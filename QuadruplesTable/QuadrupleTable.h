#ifndef JLML_TABLADECUADRUPLAS_H
#define JLML_TABLADECUADRUPLAS_H

typedef struct tablaDeCuadruplas{
	int tabla[100][4];
	int nextQuad;
} tablaDeCuadruplas;



void gen(tablaDeCuadruplas *,char* , int , int , int); //operacion, op1, op2, destino
void inicializacionQ (tablaDeCuadruplas *);
void leerlistaQ(tablaDeCuadruplas *);
void getIdOperacion(char*);
#endif
