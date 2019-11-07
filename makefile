all: a.out
	@echo "Todo en orden"
a.out: lex.yy.c bisonte
	@gcc y.tab.c lex.yy.c -lfl
	@echo "Compilado el archivo lex.yy.c"

lex.yy.c:
	@flex flex.l
	@echo "Creado archivo de c a partir de flex"

bisonte:
	@bison -yd -v bison.y

run: a.out
	@cat prueba.txt | ./a.out
clean:
	@rm a.out
	@rm lex.yy.c
	@echo "Todo limpio"
