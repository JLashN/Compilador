#include <stdio.h>
#include "../SymbolTable/TablaDeSimbolos.h"
#include <string.h>

typedef struct TablaDeCuadruplas{
	int tabla[100][4];
	int nextQuad;
} TablaDeCuadruplas;

void inicializacionQ(TablaDeCuadruplas *tabla){
	tabla->nextQuad = 0;
}


void gen(TablaDeCuadruplas *tablaQ,TablaDeSimbolos *tablaS, char* operacion, char* operador1, char* operador2, char* destino){
	int row = tablaQ->nextQuad;

	if(strcmp(operacion,"suma")){ 
		(tablaQ->tabla)[row][0] = 0;
	} else if(strcmp(operacion,"menos")){ 
		(tablaQ->tabla)[row][0] = 1;	
	} else if(strcmp(operacion,"por")){ 
		(tablaQ->tabla)[row][0] = 2;
	} else if(strcmp(operacion,"entre")){ 
		(tablaQ->tabla)[row][0] = 3;
	} else //(strcmp(operacion,"div"))
	{ 
		(tablaQ->tabla)[row][0] = 4;
	}


	//(tablaQ->tabla)[row][1] = buscarId(&tablaS);
	(tablaQ->tabla)[row][2] = 1;
	(tablaQ->tabla)[row][3] = 1;
	row++;
}

void leerLista(TablaDeCuadruplas *tablaQ){

	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 4; j++){		
			printf("%d",(tablaQ->tabla)[i][j]);
		}
		printf("\n");
	}
}

void main(){

	TablaDeCuadruplas tq;
	TablaDeSimbolos ts;
	inicializacionQ(&tq);
	gen(&tq,&ts,"suma","1","2","hola4");
	printf("%d\n",tq.tabla[0][0]);

	leerLista(&tq);
}