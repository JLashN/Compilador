#include <stdio.h>
#include <stdlib.h>
#include "../QuadruplesTable/QuadrupleTable.h"
#include "../SymbolTable/TablaDeSimbolos.h"

typedef struct Patched { //Es una lista de punteros a la tabla de cuadruplas
	int lista[100];
	int puntero;
} Patched;

/**
 * Function makelistP
 * Crea una lista cuya primer elemento es el parametro nextQuad de la tabla de simbolos.
 * Devuelve un puntero al struct Patched creado.
 * */
Patched* makelistP(int nextQuad){
    Patched* dev = (Patched*)malloc(sizeof(Patched));
    dev->puntero = 1;
    (dev->lista)[0] = nextQuad;
    return dev;

}

/**
 * Function makelistVaciaP
 * Crea una lista patched vacia.
 * Devuelve un puntero al struct Patched creado.
 * */
Patched* makelistVaciaP(){
    Patched* dev = (Patched*)malloc(sizeof(Patched));
    dev->puntero = 0;
    return dev;

}

/**
 * Function mergeP
 * Une los dos structs patched que se le pasan por parametro.
 * Devuelve el struct que es la union. 
 * */
Patched* mergeP(Patched* uno,Patched* dos){
    Patched* dev = (Patched*)malloc(sizeof(Patched));
    dev->puntero = 0;
    for (int i=0; i<(uno->puntero); i++){
        (dev->lista)[(dev->puntero)++] = (uno->lista)[i];
    }
    for (int i=0; i<(dos->puntero); i++){
        (dev->lista)[(dev->puntero)++] = (dos->lista)[i];
    }
    return dev;

}
/**
 * Function backpatchP
 * Se le pasa la lista de cuadruplas, el patched que es una lista de punteros y un puntero a la tabla de cuadruplas.
 * Lo que hace es rellenar el cuarto parametro de las posiciones apuntadas por el struct patched, en la tabla de cuadruplas.
 * Se reemplaza este cuarto elemento por nextQuad.
 * No devuelve nada.
 * */
void backpatchP(TablaDeCuadruplas * listaCuadruplas, Patched * listaPunteros, int nextQuad){
    for (int i=0; i<(listaPunteros->puntero); i++){
        (listaCuadruplas->tabla)[(listaPunteros->lista)[i]][3] = nextQuad;
    }
}