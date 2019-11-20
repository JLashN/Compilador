#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_TOKEN 50

typedef enum Tipo{BOOLEANO, ENTERO, REAL, CARACTER, CADENA}Tipo;
typedef enum TipoVariable{ENTRADA, SALIDA, ENTRADASALIDA, ENTORNO,TEMPORAL,CONSTANTE}TipoVariable;

typedef struct Elemento {
	int id;
	Tipo tipo;
	char *nombre;
	TipoVariable tipoentorno;
	struct Elemento *siguiente;
	struct Elemento *anterior;
}Elemento;

typedef struct Lista {
	Elemento *inicio;
	Elemento *ultimo;
	int ultimaVariableTemporal;
}TablaDeSimbolos;

void inicializacion (TablaDeSimbolos *lista){
	lista->inicio = NULL;
	lista->ultimo = NULL;
	lista->ultimaVariableTemporal = 0;
}

int insertar_variable(TablaDeSimbolos *lista,char* nombre, char* tipoaux, char* tipoentorno){
	int identificador;

	Elemento* e = obtenerObjeto(lista,nombre);
	if (e==NULL){
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

		TipoEntorno te;
		if (strcmp(tipoentorno,"entrada") == 0){
			te = ENTRADA;
		}else if(strcmp(tipoentorno,"salida") == 0){
			te = SALIDA;
		}
		else if(strcmp(tipoentorno,"entorno") == 0){
			te = ENTORNO;
		}else if(strcmp(tipoentorno,"entradasalida") == 0){
			te = ENTRADASALIDA;
		}else if(strcmp(tipoentorno,"temporal") == 0){
			te = TEMPORAL;
		}else if(strcmp(tipoentorno,"constante") == 0){
			te = CONSTANTE;
		}

		if (nombre==NULL){
			do{
				nombre = (char*)malloc(LEN_TOKEN*sizeof(nombre));
				nombre[0] = 't';
				itoa(lista->ultimaVariableTemporal,&(nombre[1]),16);
				(lista->ultimaVariableTemporal)++;
			}while (obtenerObjeto(lista,nombre)!=NULL);
		}

		Elemento *aux = (Elemento*)malloc(sizeof(Elemento));
		aux->siguiente = NULL;
		aux->anterior = lista->ultimo;
		aux->id = identificador;
		aux->tipo = tipo;
		aux->tipoentorno = te;
		aux->nombre = (char*)malloc(LEN_TOKEN*sizeof(nombre));
		strcpy(aux->nombre,nombre);

		if (lista->inicio == NULL){
			lista->inicio = aux;
			lista->ultimo = aux;
		}else{
			lista->ultimo->siguiente = aux;
			lista->ultimo = aux;	
		}
		return identificador;
	}
	else{
		if ((strcmp(tipoentorno,"entrada")==0) && ((e->tipoentorno) == SALIDA)){
			(e->tipoentorno) == ENTRADASALIDA;
		}else if ((strcmp(tipoentorno,"salida")==0) && ((e->tipoentorno) == ENTRADA)){
			(e->tipoentorno) == ENTRADASALIDA;
		}else{
			return -1;
		}
		
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

Elemento* obtenerObjeto(TablaDeSimbolos *lista, char* nombre){
	Elemento *aux = lista->inicio;
	while (aux != NULL){

		if (strcmp(aux->nombre,nombre)==0){
			return aux;
		}

		aux = aux->siguiente;

	}
	return NULL;

}
