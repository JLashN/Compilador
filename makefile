all: a.out
	@echo "Todo en orden"

a.out: intermedio tabladesimbolos
	@gcc y.tab.c lex.yy.o TablaDeSimbolos.o -lfl -lm
	@echo "Creado a.out"

intermedio: lex.yy.c bisonte
	@gcc -c lex.yy.c
	@echo "Compilado el archivo lex.yy.c"

tabladesimbolos:
	@gcc -c table/TablaDeSimbolos.c
	@echo "Compilada la tabla de simbolos"

lex.yy.c:
	@flex flex.l
	@echo "Creado archivo de c a partir de flex"

bisonte:
	@bison -yd -v bison.y

run: a.out
	@cat prueba.txt | ./a.out
clean:
	@rm lex.yy.o
	@rm lex.yy.c
	@rm y.output
	@rm TablaDeSimbolos.o
	@rm y.tab.c
	@rm y.tab.h
	@rm a.out
	@rm TablaDeSimbolos.o

	@echo "Todo limpio"
