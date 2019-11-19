#ifndef JLML_TABLADECUADRUPLAS_H
#define JLML_TABLADECUADRUPLAS_H

typedef struct tablaDeCuadruplas{
	int tabla[100][4];
	int nextQuad;
} tablaDeCuadruplas;



void gen(tablaDeCuadruplas *,char* , char* , char* , char*); //operacion, op1, op2, destino
void inicializacion (tablaDeCuadruplas *);
void leerlista(tablaDeCuadruplas *);

#endif
