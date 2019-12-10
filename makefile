all: a.out
	@echo "Todo en orden"

a.out: intermedio
	@gcc y.tab.c lex.yy.o TablaDeSimbolos.o QuadrupleTable.o -lfl -lm
	@echo "Creado a.out"

intermedio: lex.yy.c bisonte tabladesimbolos tabladecuadruplas booleanos
	@gcc -c lex.yy.c
	@echo "Compilado el archivo lex.yy.c"

tabladesimbolos:
	@gcc -c SymbolTable/TablaDeSimbolos.c
	@echo "Compilada la tabla de simbolos"

tabladecuadruplas:
	@gcc -c QuadruplesTable/QuadrupleTable.c
	@echo "Compilada la tabla de cuadruplas"

lex.yy.c:
	@flex flex.l
	@echo "Creado archivo de c a partir de flex"

booleanos:
	@gcc -c booleanos/booleanos.c
	@echo "Compilado el archivo de booleanos"

bisonte:
	@bison -yd -v bison.y

run: a.out
	@cat prueba.txt | ./a.out
clean: cleanArchivosFlex
	@rm a.out
	@echo "Todo limpio"
cleanArchivosFlex: cleanArchivosBison cleanTablaDeSimbolos
	@rm lex.yy.c
	@rm lex.yy.o
	@echo "Borrados archivos de flex"
cleanArchivosBison:
	@rm y.output
	@rm y.tab.c
	@rm y.tab.h
	@echo "Borrados archivos de bison"
cleanTablaDeSimbolos:
	@rm TablaDeSimbolos.o QuadrupleTable.o
	@echo "Borrados archivos de la tabla de simbolos"


