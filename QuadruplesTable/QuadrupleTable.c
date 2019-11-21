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

int getIdOperacion(){
	if(strcmp(operacion,"nulo")){ 
		return 0;		
	}else if(strcmp(operacion,"sumaentero")){ 
		return 1;
	} else if(strcmp(operacion,"menosentero")){ 
		return 2;	
	} else if(strcmp(operacion,"porentero")){ 
		return 3;
	} else if(strcmp(operacion,"entreentero")){ 
		return 4;
	} else if(strcmp(operacion,"diventero")){ 
		return 5;
	}else if(strcmp(operacion,"sumareal")){ 
		return 6;
	} else if(strcmp(operacion,"menosreal")){ 
		return 7;	
	} else if(strcmp(operacion,"porreal")){ 
		return 8;
	} else if(strcmp(operacion,"entrereal")){ 
		return 9;
	} else if(strcmp(operacion,"divreal")){
		return 10;
	}
}

void gen(TablaDeCuadruplas *tablaQ,TablaDeSimbolos *tablaS, int operacion, int operador1, int operador2, int destino){
	int row = tablaQ->nextQuad;

	(tablaQ->tabla)[row][0] = getIdOperacion(operacion);

	(tablaQ->tabla)[row][1] = operador1;
	(tablaQ->tabla)[row][2] = operador2;
	(tablaQ->tabla)[row][3] = destino;
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
