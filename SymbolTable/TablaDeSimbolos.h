#ifndef JLML_TABLADESIMBOLOS_H
#define JLML_TABLADESIMBOLOS_H
typedef enum Tipo{BOOLEANO, ENTERO, REAL}Tipo;

typedef struct Elemento {
	int id;
	Tipo tipo;
	char *nombre;
	struct Elemento *siguiente;
	struct Elemento *anterior;
}Elemento;

typedef struct Lista {
	Elemento *inicio;
	Elemento *ultimo;
	int contador;
}TablaDeSimbolos;

void insertar_variable(TablaDeSimbolos *,char* , char*);
void inicializacion (TablaDeSimbolos *);
void leerlista(TablaDeSimbolos *);

#endif
