#ifndef JLML_TABLADECUADRUPLAS_H
#define JLML_TABLADECUADRUPLAS_H

typedef struct TablaDeCuadruplas{
	int tabla[300][4];
	int nextQuad;
} TablaDeCuadruplas;



void gen(TablaDeCuadruplas *,char* , int , int , int); //operacion, op1, op2, destino
void inicializacionQ (TablaDeCuadruplas *);
void getIdOperacion(char*);
char* getNombreOperacion(int);
void leerlistaQ(TablaDeCuadruplas *, TablaDeSimbolos *);
#endif
