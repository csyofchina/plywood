PLY_STRUCT_BEGIN(ply::cpp::Token)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_END()

PLY_ENUM_BEGIN(ply::cpp::, Token::Type)
PLY_ENUM_IDENTIFIER(Invalid)
PLY_ENUM_IDENTIFIER(LineComment)
PLY_ENUM_IDENTIFIER(CStyleComment)
PLY_ENUM_IDENTIFIER(Macro)
PLY_ENUM_IDENTIFIER(MacroArgument)
PLY_ENUM_IDENTIFIER(Directive)
PLY_ENUM_IDENTIFIER(OpenCurly)
PLY_ENUM_IDENTIFIER(CloseCurly)
PLY_ENUM_IDENTIFIER(OpenParen)
PLY_ENUM_IDENTIFIER(CloseParen)
PLY_ENUM_IDENTIFIER(OpenAngle)
PLY_ENUM_IDENTIFIER(CloseAngle)
PLY_ENUM_IDENTIFIER(LessThanOrEqual)
PLY_ENUM_IDENTIFIER(GreaterThanOrEqual)
PLY_ENUM_IDENTIFIER(OpenSquare)
PLY_ENUM_IDENTIFIER(CloseSquare)
PLY_ENUM_IDENTIFIER(Semicolon)
PLY_ENUM_IDENTIFIER(SingleColon)
PLY_ENUM_IDENTIFIER(DoubleColon)
PLY_ENUM_IDENTIFIER(SingleEqual)
PLY_ENUM_IDENTIFIER(DoubleEqual)
PLY_ENUM_IDENTIFIER(NotEqual)
PLY_ENUM_IDENTIFIER(PlusEqual)
PLY_ENUM_IDENTIFIER(MinusEqual)
PLY_ENUM_IDENTIFIER(Arrow)
PLY_ENUM_IDENTIFIER(StarEqual)
PLY_ENUM_IDENTIFIER(SlashEqual)
PLY_ENUM_IDENTIFIER(Comma)
PLY_ENUM_IDENTIFIER(QuestionMark)
PLY_ENUM_IDENTIFIER(ForwardSlash)
PLY_ENUM_IDENTIFIER(Star)
PLY_ENUM_IDENTIFIER(Percent)
PLY_ENUM_IDENTIFIER(SingleAmpersand)
PLY_ENUM_IDENTIFIER(DoubleAmpersand)
PLY_ENUM_IDENTIFIER(SingleVerticalBar)
PLY_ENUM_IDENTIFIER(DoubleVerticalBar)
PLY_ENUM_IDENTIFIER(SinglePlus)
PLY_ENUM_IDENTIFIER(DoublePlus)
PLY_ENUM_IDENTIFIER(SingleMinus)
PLY_ENUM_IDENTIFIER(DoubleMinus)
PLY_ENUM_IDENTIFIER(LeftShift)
PLY_ENUM_IDENTIFIER(RightShift)
PLY_ENUM_IDENTIFIER(Dot)
PLY_ENUM_IDENTIFIER(Tilde)
PLY_ENUM_IDENTIFIER(Caret)
PLY_ENUM_IDENTIFIER(Bang)
PLY_ENUM_IDENTIFIER(Ellipsis)
PLY_ENUM_IDENTIFIER(Identifier)
PLY_ENUM_IDENTIFIER(StringLiteral)
PLY_ENUM_IDENTIFIER(NumericLiteral)
PLY_ENUM_IDENTIFIER(EndOfFile)
PLY_ENUM_END()

