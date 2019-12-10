#ifndef JLML_BOOLEANOS_H
#define JLML_BOOLEANOS_H
#include "../QuadruplesTable/QuadrupleTable.h"


typedef struct Patched {
	int lista[100];
	int puntero;
} Patched;

Patched* makelistP(int);
Patched* makelistVaciaP();
Patched* mergeP(Patched*,Patched*);
void backpatchP(TablaDeCuadruplas * , Patched * , int );

#endif