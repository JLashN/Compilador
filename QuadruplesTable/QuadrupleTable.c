#include <stdio.h>
#include "../SymbolTable/TablaDeSimbolos.h"
#include <string.h>
#include <stdlib.h>

typedef struct TablaDeCuadruplas{
	int tabla[300][4];
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
	} else if (strcmp(operacion,"ifmayor") == 0){
		return 14;
	} else if (strcmp(operacion,"ifmenor") == 0){
		return 15;
	} else if (strcmp(operacion,"ifdiferente") == 0){
		return 16;
	} else if (strcmp(operacion,"ifigual") == 0){
		return 17;
	} else if (strcmp(operacion,"ifmayorigual") == 0){
		return 18;
	} else if (strcmp(operacion,"ifmenorigual") == 0){
		return 19;
	} else if (strcmp(operacion,"goto") == 0){
		return 20;
	} else if (strcmp(operacion,"asignaciontrue") == 0) {
		return 21;
	} else if (strcmp(operacion,"asignacionfalse") == 0) {
		return 22;
	} else if (strcmp(operacion,"fin") == 0){
		return 23;
	} else if (strcmp(operacion,"i++") == 0){
		return 24;
	}
}

char* getNombreOperacion(int operacion){
	switch (operacion)
	{
	case 0:
		return "nulo";
		break;
	case 1:
		return "sumaentero";
		break;
	case 2:
		return "menosentero";
		break;
	case 3:
		return "porentero";
		break;
	case 4:
		return "entreentero";
		break;
	case 5:
		return "modentero";
		break;
	case 6:
		return "sumareal";
		break;
	case 7:
		return "menosreal";
		break;
	case 8:
		return "porreal";
		break;
	case 9:
		return "entrereal";
		break;
	case 10:
		return "modreal";
		break;
	case 11:
		return "asignacion";
		break;
	case 12:
		return "inttoreal";
		break;
	case 13:
		return "truncar";
		break;
	case 14:
		return "ifmayor";
		break;
	case 15:
		return "ifmenor";
		break;
	case 16:
		return "ifdiferente";
		break;
	case 17:
		return "ifigual";
		break;
	case 18:
		return "ifmayorigual";
		break;
	case 19:
		return "ifmenorigual";
		break;
	case 20:
		return "goto";
		break;
	case 21:
		return "asignaciontrue";
		break;
	case 22:
		return "asignacionfalse";
		break;
	case 23:
		return "fin";
		break;
	case 24:
		return "i++";
		break;

	
	default:
		return NULL;
		break;
	}
}

void gen(TablaDeCuadruplas *tablaQ, char* operacion, int operador1, int operador2, int destino){
	int row = tablaQ->nextQuad;


	(tablaQ->tabla)[row][0] = getIdOperacion(operacion);
	(tablaQ->tabla)[row][1] = operador1;
	(tablaQ->tabla)[row][2] = operador2;
	(tablaQ->tabla)[row][3] = destino;
	row++;

	tablaQ->nextQuad = row;
}

void leerlistaQ(TablaDeCuadruplas *tablaQ, TablaDeSimbolos *tablaS, FILE* desc){

	for(int i = 0; i < tablaQ->nextQuad; i++){
		printf("%d: ",i);
		printf("%s ",getNombreOperacion((tablaQ->tabla)[i][0]));
		if ((tablaQ->tabla)[i][0] == 23){ //Si la instrucción es fin, terminamos de recorrer la lista
			fprintf(stdout,"\n");
			break;
		}
		if ((tablaQ->tabla)[i][0] != 20 && (tablaQ->tabla)[i][0] != 24){ //Si es goto imprime el destino de la tabla de cuadruplas
																		 //Si es i++ simplemente imprime el destino al que se le suma 1
			if ((tablaQ->tabla)[i][1] == -1){
				printf("nulo ");
			}else{
				printf("%s ",obtenerObjetoPorId(tablaS,(tablaQ->tabla)[i][1])->nombre);

			}
			if ((tablaQ->tabla)[i][2] == -1){
				printf("nulo ");
			}else{
				printf("%s ",obtenerObjetoPorId(tablaS,(tablaQ->tabla)[i][2])->nombre);
				
			}
			if (((tablaQ->tabla)[i][0] > 13) && ((tablaQ->tabla)[i][0] < 20)){
				if ((tablaQ->tabla)[i][3] == -1){
					fprintf(stdout,"nulo\n");
				}else{
					fprintf(stdout,"%d\n",(tablaQ->tabla)[i][3]);
				}
				
			}else{
				if ((tablaQ->tabla)[i][3] == -1){
					fprintf(stdout,"nulo\n");

				}else{
					fprintf(stdout,"%s\n",obtenerObjetoPorId(tablaS,(tablaQ->tabla)[i][3])->nombre);	
				}
			}
		}else{
			printf("%d\n",(tablaQ->tabla)[i][3]);
		}

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
