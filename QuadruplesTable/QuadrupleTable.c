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

int getIdOperacion(char* operacion){

	if(strcmp(operacion,"nulo") == 0){ 
		return 0;		
	}else if(strcmp(operacion,"sumaentero") == 0){ 
		return 1;
	} else if(strcmp(operacion,"menosentero") == 0){ 
		return 2;	
	} else if(strcmp(operacion,"porentero") == 0){ 
		return 3;
	} else if(strcmp(operacion,"entreentero") == 0){ 
		return 4;
	} else if(strcmp(operacion,"modentero") == 0){ 
		return 5;
	}else if(strcmp(operacion,"sumareal") == 0){ 
		return 6;
	} else if(strcmp(operacion,"menosreal") == 0){ 
		return 7;	
	} else if(strcmp(operacion,"porreal") == 0){ 
		return 8;
	} else if(strcmp(operacion,"entrereal") == 0){ 
		return 9;
	} else if(strcmp(operacion,"modreal") == 0){
		return 10;
	} else if(strcmp(operacion,"asignacion") == 0){
		return 11;
	} else if(strcmp(operacion,"inttoreal") == 0){
		return 12;
	} else if (strcmp(operacion,"truncar") == 0){
		return 13;
	}
}

void gen(TablaDeCuadruplas *tablaQ,TablaDeSimbolos *tablaS, char* operacion, int operador1, int operador2, int destino){
	int row = tablaQ->nextQuad;

	(tablaQ->tabla)[row][0] = getIdOperacion(operacion);
	(tablaQ->tabla)[row][1] = operador1;
	(tablaQ->tabla)[row][2] = operador2;
	(tablaQ->tabla)[row][3] = destino;
	row++;

	tablaQ->nextQuad = row;
}

void leerLista(TablaDeCuadruplas *tablaQ){

	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 4; j++){		
			printf("%d",(tablaQ->tabla)[i][j]);
		}
		printf("\n");
	}
}

/*
void main(){

	TablaDeCuadruplas tq;
	TablaDeSimbolos ts;
	inicializacionQ(&tq);
	gen(&tq,&ts,"asignacion",1,2,3);
	gen(&tq,&ts,"sumareal",5,8,23);
	
	leerLista(&tq);
}
*/
