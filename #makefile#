all: bisonte
	@echo "Todo en orden"
bisonte:a.out
	@bison -d -v bison.y
a.out: lex.yy.c
	@gcc lex.yy.c -lfl
	@echo "Compilado el archivo lex.yy.c"
lex.yy.c:
	@flex flex.l
	@echo "Creado archivo de c a partir de flex"
run: a.out
	@cat prueba.txt | ./a.out
clean:
	@rm a.out
	@rm lex.yy.c
	@echo "Todo limpio"
