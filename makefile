all: a.out
	@echo "Todo en orden"

a.out: intermedio booleanos tabladesimbolos tabladecuadruplas
	@gcc y.tab.c lex.yy.o booleanos.o TablaDeSimbolos.o QuadrupleTable.o -lfl -lm -o compilador
	@echo "Creado a.out"

intermedio: lex.yy.c bisonte tabladesimbolos tabladecuadruplas
	@gcc -c lex.yy.c
	@echo "Compilado el archivo lex.yy.c"

tabladesimbolos:
	@gcc -c SymbolTable/TablaDeSimbolos.c
	@echo "Compilada la tabla de simbolos"

tabladecuadruplas: tabladesimbolos
	@gcc -c QuadruplesTable/QuadrupleTable.c
	@echo "Compilada la tabla de cuadruplas"

lex.yy.c:
	@flex flex.l
	@echo "Creado archivo de c a partir de flex"

booleanos: tabladesimbolos tabladecuadruplas
	@gcc -c booleanos/booleanos.c
	@echo "Compilado el archivo de booleanos"

bisonte:
	@bison -yd -v bison.y

run: a.out
	@cat ejemplos/prueba.txt | ./compilador
clean: cleanArchivosFlex
	@rm compilador
	@echo "Todo limpio"
cleanArchivosFlex: cleanArchivosBison cleanTablaDeSimbolos cleanBooleanos
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
cleanBooleanos:
	@rm booleanos.o
	@echo "Borrados booleanos"


