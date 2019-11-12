#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_TOKEN 50

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

void inicializacion (TablaDeSimbolos *lista){
	lista->inicio = NULL;
	lista->ultimo = NULL;
	lista->contador = 0;
}

void insertar_variable(TablaDeSimbolos *lista,char* nombre, Tipo tipo){
	int identificador;
	if (lista->ultimo == NULL){
		identificador = 0;
	}else{
		identificador = lista->ultimo->id+1;
	}

	Elemento *aux = (Elemento*)malloc(sizeof(Elemento));
	aux->siguiente = NULL;
	aux->anterior = lista->ultimo;
	aux->id = identificador;
	aux->tipo = tipo;
	aux->nombre = (char*)malloc(LEN_TOKEN*sizeof(nombre));
	strcpy(aux->nombre,nombre);

	if (lista->inicio == NULL){
		lista->inicio = aux;
		lista->ultimo = aux;
	}else{
		lista->ultimo->siguiente = aux;
		lista->ultimo = aux;	
	}

}

void leerlista(TablaDeSimbolos *lista){
	Elemento *aux = lista->inicio;
	while (aux != NULL){

		printf("%s\n",aux->nombre);
		printf("%d\n",aux->id);
		aux = aux->siguiente;

	}

}

