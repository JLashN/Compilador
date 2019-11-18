#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_TOKEN 50

typedef enum Tipo{BOOLEANO, ENTERO, REAL, CARACTER, CADENA}Tipo;

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
}TablaDeSimbolos;

void inicializacion (TablaDeSimbolos *lista){
	lista->inicio = NULL;
	lista->ultimo = NULL;
}

void insertar_variable(TablaDeSimbolos *lista,char* nombre, char* tipoaux){
	int identificador;
	if (lista->ultimo == NULL){
		identificador = 0;
	}else{
		identificador = lista->ultimo->id+1;
	}
	Tipo tipo;
	if (strcmp(tipoaux,"entero") == 0){
		tipo = ENTERO;
	}else if(strcmp(tipoaux,"real") == 0){
		tipo = REAL;
	}
	else if(strcmp(tipoaux,"booleano") == 0){
		tipo = BOOLEANO;
	}else if(strcmp(tipoaux,"cadena") == 0){
		tipo = CADENA;
	}else{
		tipo = CARACTER;
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

		printf("El nombre de la variable es %s\n",aux->nombre);
		printf("El id de la variable es %d\n",aux->id);
		printf("El tipo de la variable es %d\n",aux->tipo);

		aux = aux->siguiente;

	}

}

