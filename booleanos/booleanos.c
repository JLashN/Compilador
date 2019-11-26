#include <stdio.h>
#include <stdlib.h>
#include "../QuadruplesTable/QuadrupleTable.h"

typedef struct Patched {
	int lista[100];
	int puntero;
} Patched;

Patched* makelistP(int nextQuad){
    Patched* dev = (Patched*)malloc(sizeof(Patched));
    dev->puntero = 1;
    (dev->lista)[0] = nextQuad;
    return dev;

}
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

void backpatchP(TablaDeCuadruplas * listaCuadruplas, Patched * listaPunteros, int nextQuad){
    for (int i=0; i<(listaPunteros->puntero); i++){
        (listaCuadruplas->tabla)[(listaPunteros->lista)[i]][3] = nextQuad;
    }
}