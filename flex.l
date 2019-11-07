/* scanner for a toy Pascal-like language */

%{
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"

int deCadenaAEntero(char* cadena);

double deCadenaAFloat(char* cadena);
%}

/* Definiciones basicas */
DR_DIGIT [0-9]
DR_MAY [A-Z]
DR_MIN [a-z]
DR_LETRA {DR_MAY}|{DR_MIN}
DR_CR " "|"\t"|"\n"

DR_ASIGNACION :=
DR_SECUENCIAL ;
DR_SEPARADOR ,
DR_SUBRANGO \.\.
DR_DEF_TIPO :
DR_ENTONCES ->
DR_SINOSI \[\]
DR_TIPO =
DR_ARRAY \[
DR_FIN_ARRAY \]
DR_IGUAL ==
DR_MAYOR >
DR_MENOR <
DR_MAYOR_IGUAL >=
DR_MENOR_IGUAL <=
DR_DIFERENTE !=
DR_SUMA \+
DR_NEGATIVO -
DR_MULTIPLICACION \*
DR_DIVISION \/
DR_MOD %
DR_EXPONENTE \^
DR_OR \|\|
DR_AND &&
DR_PARENTESIS_APERTURA \(
DR_PARENTESIS_CIERRE \)

DR_ID ([ac-zAC-Z])({DR_LETRA}|{DR_DIGIT})*
DR_ID_BOOLEANO (B|b)({DR_LETRA}|{DR_DIGIT})*
DR_LOD {DR_LETRA}|{DR_DIGIT}

/*Literales enteros*/
DR_LE	[\+-]?{DR_DIGIT}+([eE]{DR_DIGIT}+)?

/*Literales reales*/
DR_LR	 [\+-]?{DR_DIGIT}+(\.{DR_DIGIT}+)?([eE]-*{DR_DIGIT}+)?

/*Literal cadena*/
DR_CADENA	"\'"([^\']|("/""\'"))*"\'"

/*Literal caracter*/
DR_LC	"\""."\""

/*Comentarios*/
DR_COMENTARIO	"{"([^}]|"/""}")*"}"

%option caseless
DR_PALABRA_FPARA fpara
DR_PALABRA_FSI fsi
DR_PALABRA_FTIPO ftipo
DR_PALABRA_FTUPLA ftupla
DR_PALABRA_FUNCION funcion
DR_PALABRA_FVAR fvar
DR_PALABRA_HACER hacer
DR_PALABRA_HASTA hasta
DR_PALABRA_MIENTRAS mientras
DR_PALABRA_MOD mod
DR_PALABRA_NO no
DR_PALABRA_O o
DR_PALABRA_PARA para
DR_PALABRA_REAL real
DR_PALABRA_REF ref
DR_PALABRA_SAL sal
DR_PALABRA_SI si
DR_PALABRA_TABLA tabla
DR_PALABRA_TIPO tipo
DR_PALABRA_TUPLA tupla
DR_PALABRA_VAR var
DR_PALABRA_VERDADERO verdadero
DR_PALABRA_Y y
DR_PALABRA_ACCION accion
DR_PALABRA_ALGORITMO algoritmo
DR_PALABRA_BOOLEANO booleano
DR_PALABRA_CADENA cadena
DR_PALABRA_CARACTER caracter
DR_PALABRA_CONST const
DR_PALABRA_CONTINUAR continuar
DR_PALABRA_DE de
DR_PALABRA_DEV dev
DR_PALABRA_DIV div
DR_PALABRA_ENT ent
DR_PALABRA_ENTERO entero
DR_PALABRA_ES e\/s
DR_PALABRA_FACCION faccion
DR_PALABRA_FALGORITMO falgoritmo
DR_PALABRA_FALSO falso
DR_PALABRA_FCONST fconst
DR_PALABRA_FFUNCION ffuncion


%%

{DR_PARENTESIS_CIERRE} {printf("Se ha leido %s\n",yytext);return (BPARENTESIS_CIERRE);}
{DR_PARENTESIS_APERTURA} {printf("Se ha leido %s\n",yytext);return (BPARENTESIS_APERTURA);}
{DR_PALABRA_FPARA} {printf("Se ha leido %s\n",yytext);return (BPARA);}
{DR_PALABRA_FSI} {printf("Se ha leido %s\n",yytext);return (BFSI);}
{DR_PALABRA_FTIPO} {printf("Se ha leido %s\n",yytext);return (BFTIPO);}
{DR_PALABRA_FTUPLA} {printf("Se ha leido %s\n",yytext);return (BFTUPLA);}
{DR_PALABRA_FUNCION} {printf("Se ha leido %s\n",yytext);return (BFUNCION);}
{DR_PALABRA_FVAR} {printf("Se ha leido %s\n",yytext);return (BFVAR);}
{DR_PALABRA_HACER} {printf("Se ha leido %s\n",yytext);return (BHACER);}
{DR_PALABRA_HASTA} {printf("Se ha leido %s\n",yytext);return (BHASTA);}
{DR_PALABRA_MIENTRAS} {printf("Se ha leido %s\n",yytext);return (BMIENTRAS);}
{DR_PALABRA_MOD} {printf("Se ha leido %s\n",yytext);return (BMOD);}
{DR_PALABRA_NO} {printf("Se ha leido %s\n",yytext);return (BNO);};
{DR_PALABRA_O} {printf("Se ha leido %s\n",yytext);return (BO);}
{DR_PALABRA_PARA} {printf("Se ha leido %s\n",yytext);return (BPARA);}
{DR_PALABRA_REAL} {printf("Se ha leido %s\n",yytext);}
{DR_PALABRA_REF} {printf("Se ha leido %s\n",yytext);return (BREF);}
{DR_PALABRA_SAL} {printf("Se ha leido %s\n",yytext);return (BSAL);}
{DR_PALABRA_SI} {printf("Se ha leido %s\n",yytext);return (BSI);}
{DR_PALABRA_TABLA} {printf("Se ha leido %s\n",yytext);return (BTABLA);}
{DR_PALABRA_TIPO} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_TUPLA} {printf("Se ha leido %s\n",yytext);return (BTUPLA);}
{DR_PALABRA_VAR} {printf("Se ha leido %s\n",yytext);return (BVAR);}
{DR_PALABRA_VERDADERO} {printf("Se ha leido %s\n",yytext);return (BVERDADERO);}
{DR_PALABRA_Y} {printf("Se ha leido %s\n",yytext);return (BY);}
{DR_PALABRA_ACCION} {printf("Se ha leido %s\n",yytext);return (BACCION);} 
{DR_PALABRA_ALGORITMO} {printf("Se ha leido %s\n",yytext);return (BALGORITMO);}
{DR_PALABRA_BOOLEANO} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_CADENA} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_CARACTER} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_CONST} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_CONTINUAR} {printf("Se ha leido %s\n",yytext);return (BCONTINUAR);}
{DR_PALABRA_DE} {printf("Se ha leido %s\n",yytext);return (BDE);}
{DR_PALABRA_DEV} {printf("Se ha leido %s\n",yytext);return (BDEV);}
{DR_PALABRA_DIV} {printf("Se ha leido %s\n",yytext);return (BDIV);}
{DR_PALABRA_ENT} {printf("Se ha leido %s\n",yytext);return (BENT);}
{DR_PALABRA_ENTERO} {printf("Se ha leido %s\n",yytext);return (BTIPO);}
{DR_PALABRA_ES} {printf("Se ha leido %s\n",yytext);return (BES);}
{DR_PALABRA_FACCION} {printf("Se ha leido %s\n",yytext);return (BFACCION);}
{DR_PALABRA_FALGORITMO} {printf("Se ha leido %s\n",yytext);return (BFALGORITMO);}
{DR_PALABRA_FALSO} {printf("Se ha leido %s\n",yytext);return (BFALSO);}
{DR_PALABRA_FCONST} {printf("Se ha leido %s\n",yytext);return (BFCONST);}
{DR_PALABRA_FFUNCION} {printf("Se ha leido %s\n",yytext);return (BFFUNCION);}
{DR_ASIGNACION} {printf("Se ha leido %s\n",yytext);return (BDOS_PUNTOS_IGUAL);}
{DR_SECUENCIAL} {printf("Se ha leido %s\n",yytext);return (BPUNTO_Y_COMA);}
{DR_SEPARADOR} {printf("Se ha leido %s\n",yytext);return (BCOMA);}
{DR_SUBRANGO} {printf("Se ha leido %s\n",yytext);return (BPUNTOSS);}
{DR_DEF_TIPO} {printf("Se ha leido %s\n",yytext);return (BDOS_PUNTOS);}
{DR_ENTONCES} {printf("Se ha leido %s\n",yytext);return (BENTONCES);}
{DR_SINOSI} {printf("Se ha leido %s\n",yytext);return (BSINO);}
{DR_TIPO} {printf("Se ha leido %s\n",yytext);return (BIGUAL);}
{DR_ARRAY} {printf("Se ha leido %s\n",yytext);return (BCORCHETE_APERTURA);}
{DR_FIN_ARRAY} {printf("Se ha leido %s\n",yytext);return (BCORCHETE_CIERRE);}
{DR_IGUAL} {printf("Se ha leido %s\n",yytext);return (BIGUAL);}
{DR_MAYOR} {printf("Se ha leido %s\n",yytext);return (BOPREL);}
{DR_MENOR} {printf("Se ha leido %s\n",yytext);return (BOPREL);}
{DR_MAYOR_IGUAL} {printf("Se ha leido %s\n",yytext);return (BOPREL);}
{DR_MENOR_IGUAL} {printf("Se ha leido %s\n",yytext);return (BOPREL);}
{DR_DIFERENTE} {printf("Se ha leido %s\n",yytext);return (BOPREL);}
{DR_SUMA} {printf("Se ha leido %s\n",yytext);return (BSUMA);}
{DR_NEGATIVO} {printf("Se ha leido %s\n",yytext);return (BMENOS);}
{DR_MULTIPLICACION} {printf("Se ha leido %s\n",yytext);return (BPOR);} 
{DR_DIVISION} {printf("Se ha leido %s\n",yytext);return (BDIV);}
{DR_MOD} {printf("Se ha leido %s\n",yytext);return (BMOD);}
{DR_EXPONENTE} {printf("Se ha leido %s\n",yytext);}
{DR_OR} {printf("Se ha leido %s\n",yytext);return (BO);}
{DR_AND} {printf("Se ha leido %s\n",yytext);return (BY);}




{DR_COMENTARIO}	{printf("Se ha leido un comentario %s\n", yytext); return (BCOMENTARIO);}

{DR_CADENA}	{printf("Se ha leido una cadena %s\n", yytext);}

{DR_LC}	{printf("Se ha leido un caracter %s\n", yytext ); return (BLITERAL_CARACTER);}

{DR_LE} {printf("Se ha leido un literal entero con valor %d\n", deCadenaAEntero(yytext)); return (BLITERAL_NUMERICO);}

{DR_LR}	{printf("Se ha leido un literal real con valor %f\n", deCadenaAFloat(yytext)); return (BLITERAL_NUMERICO);}

{DR_ID} {printf("Se ha leido un identificador\n"); return (BIDENTIFICADOR);}
{DR_ID_BOOLEANO} {printf("Se ha leido un identificador booleano\n"); return (BIDENTIFICADORB);}



%%

int deCadenaAEntero(char* cadena){
	int multiplicador = 1;
	if (*cadena=='+'){
		cadena = &cadena[1];
	}else{
		if (*cadena=='-'){
			multiplicador = -1;
			cadena = &cadena[1];
		}
	}
	char *token1 = strtok(cadena, "e");
	char *token2 = strtok(NULL,"e");
	if (token2 == NULL){
		char *token3 = strtok(token1, "E");
		char *token4 = strtok(NULL,"E");

		token1 = token3;

		if (token4 != NULL){

			for (int i=0; i<atoi(token4); i++){
				multiplicador = multiplicador * 10;
			}

		}
		
	}else{

		for (int i=0; i<atoi(token2); i++){
			multiplicador = multiplicador * 10;
		}
	
	}


	int dev = atoi(token1)*multiplicador;

	return dev;


}

double deCadenaAFloat(char* cadena){

	int numero;
	double multiplicador = 1;
	double aux;
	if (*cadena=='+'){
		cadena = &cadena[1];
	}else{
		if (*cadena=='-'){
			multiplicador = -1;
			cadena = &cadena[1];
		}
	}
	char *token1 = strtok(cadena, "e");
	char *token2 = strtok(NULL,"e");
	if (token2 == NULL){
		char *token3 = strtok(token1, "E");
		char *token4 = strtok(NULL,"E");
		
		token1 = token3;

		if (token4 != NULL){

			
			if (*token4=='-'){
				aux=0.1;
				numero = - atoi(token4);

			}else{
				aux=10;
				numero = atoi(token4);
			}

			for (int i=0; i<numero; i++){
				multiplicador = multiplicador * aux;
			}

		}
		
	}else{

		if (*token2=='-'){
			aux=0.1;
			numero = - atoi(token2);

		}else{
			aux=10;
			numero = atoi(token2);
		}

		for (int i=0; i<numero; i++){
			multiplicador = multiplicador * aux;
		}
	
	}
	
	double dev = atof(token1)*multiplicador;

	return dev;


}

/*
int main( int argc, char **argv ){
	++argv, --argc;
	if ( argc > 0 )
		scanf("", &yyin);
	else
		yyin = stdin;

	yylex();
}
*/