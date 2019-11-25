%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SymbolTable/TablaDeSimbolos.h"
#include "QuadruplesTable/QuadrupleTable.h"
void yyerror(const char* s);
int yylex();
static FILE* yyin;
TablaDeSimbolos listavariables;
TablaDeSimbolos listaconstantes;
tablaDeCuadruplas listainstrucciones;

%}

%code requires {
#include "SymbolTable/TablaDeSimbolos.h"

	typedef struct E {
		int place;
		Tipo type;
	} E;
}
%union {
	long valor_entero;
	char* valor_texto;
	double valor_doble;
	char valor_letra;
	E e;
}

%token <valor_texto> BALGORITMO
%token <valor_texto> BIDENTIFICADOR
%token <valor_texto> BPUNTO_Y_COMA
%token <valor_texto> BFALGORITMO
%token <valor_texto> BPUNTO
%token <valor_texto> BCOMENTARIO
%token <valor_texto> BTIPO
%token <valor_texto> BFTIPO
%token <valor_texto> BCONST
%token <valor_texto> BFCONST
%token <valor_texto> BVAR
%token <valor_texto> BFVAR
%token <valor_texto> BIGUAL
%token <valor_texto> BTUPLA
%token <valor_texto> BFTUPLA
%token <valor_texto> BTABLA
%token <valor_texto> BCORCHETE_APERTURA
%token <valor_texto> BDE
%token <valor_texto> BEND
%token <valor_texto> BLITERAL
%token <valor_texto> BDEF
%token <valor_texto> BREF
%token <valor_texto> BTIPO_BASE
%token <valor_texto> BPUNTOSS
%token <valor_texto> BLITERAL_CARACTER
%token <valor_texto> BCORCHETE_CIERRE
%token <valor_texto> BDOS_PUNTOS
%token <valor_texto> BCOMA
%token <valor_texto> BENT
%token <valor_texto> BSAL
%token <valor_texto> BSUMA
%token <valor_texto> BMENOS
%token <valor_texto> BPOR
%token <valor_texto> BENTRE
%token <valor_texto> BMOD
%token <valor_texto> BDIV
%token <valor_texto> BPARENTESIS_APERTURA
%token <valor_texto> BPARENTESIS_CIERRE
%token <valor_texto> BLITERAL_CADENA
%token <valor_texto> BY
%token <valor_texto> BO
%token <valor_texto> BNO
%token <valor_texto> BVERDADERO
%token <valor_texto> BFALSO
%token <valor_texto> BOPREL
%token <valor_texto> BCONTINUAR
%token <valor_texto> BDOS_PUNTOS_IGUAL
%token <valor_texto> BSI
%token <valor_texto> BENTONCES
%token <valor_texto> BMIENTRAS
%token <valor_texto> BFSI
%token <valor_texto> BSINO
%token <valor_texto> BHACER
%token <valor_texto> BFMIENTRAS
%token <valor_texto> BPARA
%token <valor_texto> BHASTA
%token <valor_texto> BFPARA
%token <valor_texto> BACCION
%token <valor_texto> BFUNCION
%token <valor_texto> BDEV
%token <valor_texto> BFFUNCION
%token <valor_texto> BFACCION
%token <valor_texto> BES
%token <valor_texto> BIDENTIFICADORB
%token <valor_entero> BLITERAL_ENTERO
%token <valor_doble> BLITERAL_REAL


%left BSUMA BMENOS
%left BPOR BENTRE BMOD BDIV
%left UMINUS
%left BY BO
%left UBNO
%left BPARENTESIS_APERTURA
%left BPUNTO
%left BREF
%left BPUNTO_Y_COMA
%right BCORCHETE_APERTURA

/*Variables*/
%type <valor_texto> cabecera_alg
%type <valor_texto> bloque_alg
%type <valor_texto> decl_globales
%type <valor_texto> decl_a_f
%type <valor_texto> bloque
%type <valor_texto> declaraciones
%type <valor_texto> declaracion_tipo
%type <valor_texto> declaracion_const
%type <valor_texto> declaracion_var
%type <valor_texto> lista_d_tipo
%type <valor_texto> d_tipo
%type <valor_texto> expresion_t
%type <valor_texto> lista_campos
%type <valor_texto> lista_d_cte
%type <valor_texto> lista_d_var
%type <valor_texto> lista_id
%type <valor_texto> decl_ent_sal
%type <valor_texto> expresion
%type <e> exp_a
%type <valor_texto> exp_b
%type <valor_texto> operando
%type <valor_texto> operando_booleano
%type <valor_texto> instrucciones
%type <valor_texto> instruccion
%type <e> asignacion
%type <valor_texto> alternativa
%type <valor_texto> lista_opciones
%type <valor_texto> iteracion
%type <valor_texto> it_cota_exp
%type <valor_texto> it_cota_fija
%type <valor_texto> accion_d
%type <valor_texto> funcion_d
%type <valor_texto> a_cabecera
%type <valor_texto> f_cabecera
%type <valor_texto> d_par_form
%type <valor_texto> d_p_form
//%type <valor_texto> accion_ll
%type <valor_texto> funcion_ll
%type <valor_texto> l_ll
%type <valor_texto> decl_ent
%type <valor_texto> decl_sal
%type <valor_texto> lista_id_entrada
%type <valor_texto> lista_id_salida
%type <valor_texto> lista_d_var_entrada
%type <valor_texto> lista_d_var_salida



%%

desc_algoritmo: BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO {printf("BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO por desc_algoritmo\n");};

//declaraciones

cabecera_alg: decl_globales decl_a_f decl_ent_sal BCOMENTARIO {printf("decl_globales decl_a_f decl_ent_sal BCOMENTARIO por cabecera_alg\n");};

bloque_alg: bloque BCOMENTARIO {printf("bloque BCOMENTARIO por bloque_alg\n");};

decl_globales: declaracion_tipo decl_globales {printf("declaracion_tipo decl_globales por decl_globales\n");}
	| declaracion_const decl_globales {printf("declaracion_const decl_globales por decl_globales\n");}
	|  {printf("empty por decl_globales\n");};

decl_a_f: accion_d decl_a_f {printf("accion_d decl_a_f por decl_a_f\n");}
	| funcion_d decl_a_f {printf("funcion_d decl_a_f por decl_a_f\n");}
	|  {printf("empty por decl_a_f\n");};

bloque: declaraciones instrucciones {printf("declaraciones instrucciones por bloque\n");};

declaraciones: declaracion_tipo declaraciones {printf("declaracion_tipo declaraciones por declaraciones\n");}
	| declaracion_const declaraciones {printf("declaracion_const declaraciones por declaraciones\n");}
	| declaracion_var declaraciones {printf("declaracion_var declaraciones por declaraciones\n");}
	|  {printf("empty por declaraciones\n");};

declaracion_tipo: BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA {printf("BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA por declaracion_tipo\n");};

declaracion_const: BCONST lista_d_cte BFCONST BPUNTO_Y_COMA {printf("BCONST lista_d_cte BFCONST BPUNTO_Y_COMA por declaracion_const\n");};

declaracion_var: BVAR lista_d_var BFVAR BPUNTO_Y_COMA {printf("BVAR lista_d_var BFVAR BPUNTO_Y_COMA por declaracion_var\n");};

lista_d_tipo: BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo {printf("BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo por lista_d_tipo\n");}
	|  {printf("empty por lista_d_tipo\n");};

d_tipo: BTUPLA lista_campos BFTUPLA {printf("BTUPLA lista_campos BFTUPLA por d_tipo\n");}
	| BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo {printf("BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo por d_tipo\n");}
	| BIDENTIFICADOR {printf("BIDENTIFICADOR por d_tipo\n");}
	| expresion_t BPUNTOSS expresion_t {printf("expresion_t BPUNTOSS expresion_t por d_tipo\n");}
	| BREF d_tipo {printf("BREF d_tipo por d_tipo\n");}
	| BTIPO_BASE {
		$$ = $1;
		printf("BTIPO_BASE por d_tipo\n");};

expresion_t: expresion {printf("expresion por expresion_t\n");}
	| BLITERAL_CARACTER {printf("BLITERAL_CARACTER por expresion_t\n");};

lista_campos: BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos {printf("BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos por lista_campos\n");}
	|  {printf("empty por lista_campos\n");};

lista_d_cte: BIDENTIFICADORB BIGUAL exp_b BPUNTO_Y_COMA lista_d_cte {insertar_variable(&listaconstantes,$1,"booleano","constante"); printf("BIDENTIFICADORB BIGUAL exp_b BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
	| BIDENTIFICADOR BIGUAL BLITERAL_ENTERO BPUNTO_Y_COMA lista_d_cte {insertar_variable(&listaconstantes,$1,"entero","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_ENTERO BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
	| BIDENTIFICADOR BIGUAL BLITERAL_REAL BPUNTO_Y_COMA lista_d_cte {insertar_variable(&listaconstantes,$1,"real","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_REAL BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
	| BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte {insertar_variable(&listaconstantes,$1,"caracter","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
	| BIDENTIFICADOR BIGUAL BLITERAL_CADENA BPUNTO_Y_COMA lista_d_cte {insertar_variable(&listaconstantes,$1,"cadena","constante"); printf("BIDENTIFICADOR BIGUAL BLITERAL_CARACTER BPUNTO_Y_COMA lista_d_cte por lista_d_cte\n");}
	|  {printf("empty por lista_d_cte\n");};

lista_d_var_entrada: lista_id_entrada BPUNTO_Y_COMA lista_d_var_entrada {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
	|  {printf("empty por lista_d_var\n");};

lista_d_var_salida: lista_id_salida BPUNTO_Y_COMA lista_d_var_salida {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
	|  {printf("empty por lista_d_var\n");};

lista_d_var: lista_id BPUNTO_Y_COMA lista_d_var {printf("lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var por lista_d_var\n");}
	|  {printf("empty por lista_d_var\n");};

lista_id_entrada:  BIDENTIFICADOR BDOS_PUNTOS d_tipo { insertar_variable(&listavariables,$1,$3,"entrada"); $$ = $3; printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
	| BIDENTIFICADOR BCOMA lista_id_entrada {insertar_variable(&listavariables,$1,$3,"entrada"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");};

lista_id_salida:  BIDENTIFICADOR BDOS_PUNTOS d_tipo { insertar_variable(&listavariables,$1,$3,"salida"); $$ = $3; printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
	| BIDENTIFICADOR BCOMA lista_id_salida {insertar_variable(&listavariables,$1,$3,"salida"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");};

lista_id:  BIDENTIFICADOR BDOS_PUNTOS d_tipo { insertar_variable(&listavariables,$1,$3,"entorno"); $$ = $3; printf("lista_id BDOS_PUNTOS d_tipo por lista_id");}
	| BIDENTIFICADOR BCOMA lista_id {insertar_variable(&listavariables,$1,$3,"entorno"); printf("BIDENTIFICADOR BCOMA lista_id por lista_id\n");};

decl_ent_sal: decl_ent {printf("decl_ent por decl_ent_sal\n");}
	| decl_ent decl_sal {printf("decl_ent decl_sal por decl_ent_sal\n");}
	| decl_sal {printf("decl_sal por decl_ent_sal\n");};

decl_ent: BENT lista_d_var_entrada {printf("BENT lista_d_var por decl_ent\n");};

decl_sal: BSAL lista_d_var_salida {printf("BSAL lista_d_var por decl_sal\n");};

// Empiezan las expresiones
expresion: exp_a {printf("exp_a por expresion\n");}
	| exp_b {printf("exp_b por expresion\n");}
	| funcion_ll {printf("funcion_ll por expresion\n");};
exp_a: exp_a BSUMA exp_a {
	if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			$$.type = ENTERO;
			gen(&listainstrucciones,"sumaentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"sumareal",$1.place,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"sumareal",$1.place,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"sumareal",$1.place,$3.place,$$.place);
		}
	printf("exp_a BSUMA exp_a por exp_a\n");}
	| exp_a BMENOS exp_a {
		if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			$$.type = ENTERO;
			gen(&listainstrucciones,"menosentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$1.place,0,temp);
			gen(&listainstrucciones,"menosreal",temp,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$3.place,0,temp);
			gen(&listainstrucciones,"menosreal",$1.place,temp,$$.place);
		} else if(($1.type == REAL) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"menosreal",$1.place,$3.place,$$.place);
		}
	printf("exp_a BMENOS exp_a por exp_a\n");}
	| exp_a BPOR exp_a {
		if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			$$.type = ENTERO;
			gen(&listainstrucciones,"porentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$1.place,0,temp);
			gen(&listainstrucciones,"porreal",temp,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$3.place,0,temp);
			gen(&listainstrucciones,"porreal",$1.place,temp,$$.place);
		} else if(($1.type == REAL) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"porreal",$1.place,$3.place,$$.place);
		}
	printf("exp_a BPOR exp_a por exp_a\n");}
	| exp_a BENTRE exp_a {
		if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			$$.type = ENTERO;
			gen(&listainstrucciones,"entreentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$1.place,0,temp);
			gen(&listainstrucciones,"entrereal",temp,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$3.place,0,temp);
			gen(&listainstrucciones,"entrereal",$1.place,temp,$$.place);
		} else if(($1.type == REAL) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"entrereal",$1.place,$3.place,$$.place);
		}
		printf("exp_a BENTRE exp_a por exp_a\n");}
	| exp_a BMOD exp_a {
		if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			$$.type = ENTERO;
			gen(&listainstrucciones,"modentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$1.place,0,temp);
			gen(&listainstrucciones,"modreal",temp,$3.place,$$.place);
		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$3.place,0,temp);
			gen(&listainstrucciones,"modreal",$1.place,temp,$$.place);
		} else if(($1.type == REAL) && ($3.type == REAL)){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
			$$.type = REAL;
			gen(&listainstrucciones,"modreal",$1.place,$3.place,$$.place);
		}
		printf("exp_a BMOD exp_a por exp_a\n");}
	| exp_a BDIV exp_a {
		$$.type = ENTERO;
		if(($1.type == ENTERO) && ($3.type == ENTERO)){
			$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
			gen(&listainstrucciones,"entreentero",$1.place,$3.place,$$.place);
		} else if(($1.type == ENTERO) && ($3.type == REAL)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$1.place,0,temp);
			gen(&listainstrucciones,"modreal",temp,$3.place,temp2);
			gen(&listainstrucciones,"truncar",temp2,0,$$.place);

		} else if(($1.type == REAL) && ($3.type == ENTERO)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			int temp = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"inttoreal",$3.place,0,temp);
			gen(&listainstrucciones,"modreal",$1.place,temp,temp2);
			gen(&listainstrucciones,"truncar",temp2,0,$$.place);

		} else if(($1.type == REAL) && ($3.type == REAL)){
			int temp2 = insertar_variable(&listavariables,NULL,"real","temporal");
			gen(&listainstrucciones,"modreal",$1.place,$3.place,temp2);
			gen(&listainstrucciones,"truncar",temp2,0,$$.place);
		}	
		
		printf("exp_a BDIV exp_a por exp_a\n");}
	| BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE {$$.type = $2.type; $$.place = $2.place; printf("BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE por exp_a\n");}
	| operando {$$.type = obtenerObjeto(&listavariables,$1)->tipo; $$.place = obtenerObjeto(&listavariables,$1)->id; printf("operando por exp_a\n");}
	| BLITERAL_REAL {printf("BLITERAL_REAL por exp_a\n");}
	| BLITERAL_ENTERO {printf("BLITERAL_ENTERO por exp_a\n");}
 	| BMENOS exp_a %prec UMINUS {
		$$.type = $1.type;
 		if ($1.type == ENTERO){
	 		$$.place = insertar_variable(&listavariables,NULL,"entero","temporal");
 			gen(&listainstrucciones,"menosunarioreal",$1.place,0,$$.place);
 		}else if($1.type == REAL){
			$$.place = insertar_variable(&listavariables,NULL,"real","temporal");
 			gen(&listainstrucciones,"menosunarioentero",$1.place,0,$$.place);
 		}


 	printf("BMENOS exp_a por exp_a\n");}
	| BSUMA exp_a {$$.type = $2.type; $$.place = $2.place; printf("BMAS exp_a por exp_a\n");};	
exp_b: exp_b BY exp_b {printf("exp_b BY exp_b por exp_b\n");}
	| exp_b BO exp_b {printf("exp_b BO exp_b por exp_b\n");}
	| BNO exp_b %prec UBNO {printf("BNO exp_b por exp_b\n");}
	| operando_booleano {printf("operando_booleano por exp_b\n");}
	| BVERDADERO {printf("BVERDADERO por exp_b\n");}
	| BFALSO {printf("BFALSO por exp_b\n");}
	| BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE {printf("BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE por exp_b\n");}
	| exp_a BOPREL exp_a {printf("exp_a BOPREL exp_a por exp_b\n");};
operando: BIDENTIFICADOR {$$ = $1; printf("BIDENTIFICADOR por operando\n");}
	| operando BPUNTO operando {printf("operando BPUNTO operando por operando\n");}
	| operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE {printf("operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE por operando\n");}
	| operando BREF {printf("operando BREF por operando\n");};
operando_booleano: BIDENTIFICADORB {printf("BIDENTIFICADOR por operando_booleano\n");};
instrucciones: instruccion BPUNTO_Y_COMA instrucciones {printf("instruccion BPUNTO_Y_COMA instrucciones por instrucciones\n");}
	| instruccion {printf("instruccion por instrucciones\n");};
instruccion: BCONTINUAR {printf("BCONTINUAR por instruccion\n");}
	| asignacion {printf("asignacion por instruccion\n");}
	| alternativa {printf("alternativa por instruccion\n");}
	| iteracion {printf("iteracion por instruccion\n");}; 
	//| accion_ll {};
asignacion: operando BDOS_PUNTOS_IGUAL expresion{
	if (obtenerObjeto(&listavariables,$1)->tipo == $3.type){
		gen(&listainstrucciones,"asignacion",$3.place,0,$1);
	}else if((obtenerObjeto(&listavariables,$1)->tipo == REAL) && ($3.type == ENTERO)){
		int idtemporal = insertar_variable(&listavariables,NULL,"real","temporal");
		gen(&listainstrucciones,"inttoreal",$3.place,0,idtemporal);
		gen(&listainstrucciones,"asignacion",idtemporal,0,$1);
	}else if((obtenerObjeto(&listavariables,$1)->tipo == ENTERO) && ($3.type == REAL)){
		return -1;
	}
	printf("operando BDOS_PUNTOS_IGUAL expresion por asignacion\n");}
	| expresion {printf("expresion por asignacion\n");};
alternativa: BSI expresion BENTONCES instrucciones lista_opciones BFSI {printf("BSI expresion BENTONCES instrucciones lista_opciones BFSI por alternativa\n");};
lista_opciones: BSINO expresion BENTONCES instrucciones lista_opciones {printf("BSINO expresion BENTONCES instrucciones lista_opciones por lista_opciones\n");}
	|  {printf("empty por lista_opciones\n");};
iteracion: it_cota_fija {printf("it_cota_fija por iteracion\n");}
	| it_cota_exp {printf("it_cota_exp por iteracion\n");};
it_cota_exp: BMIENTRAS expresion BHACER instrucciones BFMIENTRAS {printf("BMIENTRAS expresion BHACER instrucciones BFMIENTRAS por it_cota_exp\n");};
it_cota_fija: BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA {printf("BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA por it_cota_fija\n");};
accion_d: BACCION a_cabecera bloque BFACCION {printf("BACCION a_cabecera bloque BFACCION por accion_d\n");};
funcion_d: BFUNCION f_cabecera bloque BDEV expresion BFFUNCION {printf("BFUNCION f_cabecera bloque BDEV expresion BFFUNCION por funcion_d\n");};
a_cabecera: BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA {printf("BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA por a_cabecera\n");};
f_cabecera: BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA {printf("BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA por f_cabecera\n");};
d_par_form: d_p_form BPUNTO_Y_COMA d_par_form {printf("d_p_form BPUNTO_Y_COMA d_par_form por d_par_form\n");};
	|  {printf("empty por d_par_form\n");};

d_p_form: BEND lista_id BDOS_PUNTOS d_tipo {printf("BEND lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
	| BSAL lista_id BDOS_PUNTOS d_tipo {printf("BSAL lista_id BDOS_PUNTOS d_tipo por d_p_form\n");}
	| BES lista_id BDOS_PUNTOS d_tipo {printf("BES lista_id BDOS_PUNTOS d_tipo por d_p_form\n");};
//accion_ll: BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por d_p_form\n");};

funcion_ll: BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE {printf("BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE por funcion_ll\n");};
l_ll: expresion BCOMA l_ll {printf("expresion BCOMA l_ll por l_ll\n");}
	| expresion {printf("expresion por l_ll\n");};
 
%%
 
int main() {
	inicializacion(&listavariables);
	inicializacion(&listaconstantes);
	incializacionQ(&listainstrucciones);

	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));
	leerlista(&listavariables);
	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
