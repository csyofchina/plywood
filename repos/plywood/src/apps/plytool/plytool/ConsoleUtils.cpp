/*------------------------------------
  ///\  Plywood C++ Framework
  \\\/  https://plywood.arc80.com/
------------------------------------*/
#include <Core.h>
#include <ConsoleUtils.h>
#include <ply-runtime/algorithm/Find.h>

namespace ply {

bool prefixMatch(StringView input, StringView cmd, u32 minUnits) {
    if (input.numBytes < minUnits)
        return false;
    return cmd.startsWith(input);
}

void fatalError(StringView msg) {
    StringWriter stdErr = StdErr::createStringWriter();
    stdErr << "error: " << msg;
    if (!msg.endsWith("\n")) {
        stdErr << '\n';
    }
    stdErr.flushMem();
    exit(1);
}

StringView CommandLine::readToken() {
    while (this->index < this->args.numItems()) {
        StringView arg = this->args[this->index];
        this->index++;
        if (arg.startsWith("-")) {
            this->skippedOpts.append(arg);
        } else {
            return arg;
        }
    }
    return {};
}

bool CommandLine::checkForSkippedOpt(StringView arg) {
    s32 i = findItem(this->skippedOpts.view(), arg);
    if (i >= 0) {
        this->skippedOpts.erase(i);
        return true;
    }
    return false;
}

void CommandLine::finalize() {
    PLY_ASSERT(!this->finalized);
    if (this->skippedOpts.numItems() > 0) {
        fatalError(String::format("Unrecognized option '{}'\n", this->skippedOpts[0]));
    }
    this->finalized = true;
}

void ensureTerminated(CommandLine* cl) {
    StringView token = cl->readToken();
    if (!token.isEmpty()) {
        fatalError(String::format("Unexpected token \"{}\"", token));
    }
}

} // namespace ply