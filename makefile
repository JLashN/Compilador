all: a.out
	@echo "Todo en orden"

a.out: intermedio
	@gcc y.tab.c lex.yy.o -lfl -lm
	@echo "Creado a.out"

intermedio: lex.yy.c bisonte
	@gcc -c lex.yy.c
	@echo "Compilado el archivo lex.yy.c"

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
	@rm y.tab.c
	@rm y.tab.h
	@rm a.out
	@echo "Todo limpio"
