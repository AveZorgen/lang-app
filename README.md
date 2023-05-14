# lang-app
Перед сброкой сгенерируйте лексер, парсер и визитор для `сpp`.
```bash
antlr4 -Dlanguage=Cpp -no-listener -visitor -o parser-gram gram.g4
antlr4 -Dlanguage=Cpp -no-listener -visitor -o parser-calc calc.g4
```
Также в некоторых `CmakeLists.txt` укажите актуальные пути до рантайма `antlr4`.

