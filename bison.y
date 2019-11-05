%{
#include <stdio.h>
#include <stdlib.h>
%}

%union {
	long valor_entero;
	char* valor_texto;
	double valor_doble;
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
%token <valor_texto> BLITERAL_NUMERICO
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
%type <valor_texto> exp_a
%type <valor_texto> exp_b
%type <valor_texto> operando
%type <valor_texto> operando_booleano
%type <valor_texto> instrucciones
%type <valor_texto> instruccion
%type <valor_texto> asignacion
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



%%

desc_algoritmo: BALGORITMO BIDENTIFICADOR BPUNTO_Y_COMA cabecera_alg bloque_alg BFALGORITMO BPUNTO {};
cabecera_alg: decl_globales decl_a_f decl_ent_sal BCOMENTARIO {};
bloque_alg: bloque BCOMENTARIO {};
decl_globales: declaracion_tipo decl_globales {}
	| declaracion_const decl_globales {}
	| %empty {};
decl_a_f: accion_d decl_a_f {}
	| funcion_d decl_a_f {}
	| %empty {};
bloque: declaraciones instrucciones {};
declaraciones: declaracion_tipo declaraciones {}
	| declaracion_const declaraciones {}
	| declaracion_var declaraciones {}
	| %empty {};
declaracion_tipo: BTIPO lista_d_tipo BFTIPO BPUNTO_Y_COMA {};
declaracion_const: BCONST lista_d_cte BFCONST BPUNTO_Y_COMA {};
declaracion_var: BVAR lista_d_var BFVAR BPUNTO_Y_COMA {};
lista_d_tipo: BIDENTIFICADOR BIGUAL d_tipo BPUNTO_Y_COMA lista_d_tipo {}
	| %empty {};
d_tipo: BTUPLA lista_campos BFTUPLA 
	| BTABLA BCORCHETE_APERTURA expresion_t BPUNTOSS expresion_t BCORCHETE_CIERRE BDE d_tipo {}
	| BIDENTIFICADOR {}
	| expresion_t BPUNTOSS expresion_t {}
	| BREF d_tipo {}
	| BTIPO_BASE {};
expresion_t: expresion 
	| BLITERAL_CARACTER {};
lista_campos: BIDENTIFICADOR BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_campos {}
	| %empty {};
lista_d_cte: BIDENTIFICADOR BIGUAL BLITERAL BPUNTO_Y_COMA lista_d_cte {}
	| %empty {};
lista_d_var: lista_id BDOS_PUNTOS BIDENTIFICADOR BPUNTO_Y_COMA lista_d_var {}
	| lista_id BDOS_PUNTOS d_tipo BPUNTO_Y_COMA lista_d_var {}
	| %empty {};
lista_id: BIDENTIFICADOR BCOMA lista_id {}
	| BIDENTIFICADOR {};
decl_ent_sal: decl_ent {}
	| decl_ent decl_sal {}
	| decl_sal {};
decl_ent: BENT lista_d_var {};
decl_sal: BSAL lista_d_var {};
expresion: exp_a {}
	| exp_b {}
	| funcion_ll {};
exp_a: exp_a BSUMA exp_a {}
	| exp_a BMENOS exp_a {}
	| exp_a BPOR exp_a {}
	| exp_a BENTRE exp_a {}
	| exp_a BMOD exp_a {}
	| exp_a BDIV exp_a {}
	| BPARENTESIS_APERTURA exp_a BPARENTESIS_CIERRE {}
	| operando {}
	| BLITERAL_NUMERICO {}
 	| BMENOS exp_a %prec UMINUS{};
exp_b: exp_b BY exp_b {}
	| exp_b BO exp_b {}
	| BNO exp_b %prec UBNO {}
	| operando_booleano {}
	| BVERDADERO {}
	| BFALSO {}
	| BPARENTESIS_APERTURA exp_b BPARENTESIS_CIERRE {}
	| exp_a BOPREL exp_a {};
operando: BIDENTIFICADOR {}
	| operando BPUNTO operando {}
	| operando BCORCHETE_APERTURA expresion BCORCHETE_CIERRE {}
	| operando BREF {};
operando_booleano: BIDENTIFICADORB {};
instrucciones: instruccion BPUNTO_Y_COMA instrucciones {}
	| instruccion {};
instruccion: BCONTINUAR {}
	| asignacion {}
	| alternativa {}
	| iteracion {}; 
	//| accion_ll {};
asignacion: operando BDOS_PUNTOS_IGUAL
	| expresion {};
alternativa: BSI expresion BENTONCES instrucciones lista_opciones BFSI {};
lista_opciones: BSINO expresion BENTONCES instrucciones lista_opciones {}
	| %empty {};
iteracion: it_cota_fija {}
	| it_cota_exp {};
it_cota_exp: BMIENTRAS expresion BHACER instrucciones BFMIENTRAS {};
it_cota_fija: BPARA BIDENTIFICADOR BDOS_PUNTOS_IGUAL expresion BHASTA expresion BHACER instrucciones BFPARA {};
accion_d: BACCION a_cabecera bloque BFACCION {};
funcion_d: BFUNCION f_cabecera bloque BDEV expresion BFFUNCION {};
a_cabecera: BIDENTIFICADOR BPARENTESIS_APERTURA d_par_form BPARENTESIS_CIERRE BPUNTO_Y_COMA {};
f_cabecera: BIDENTIFICADOR BPARENTESIS_APERTURA lista_d_var BPARENTESIS_CIERRE BDEF d_tipo BPUNTO_Y_COMA {};
d_par_form: d_p_form BPUNTO_Y_COMA d_par_form 
	| %empty {};
d_p_form: BEND lista_id BDOS_PUNTOS d_tipo {} 
	| BSAL lista_id BDOS_PUNTOS d_tipo {}
	| BES lista_id BDOS_PUNTOS d_tipo {};
//accion_ll: BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE {};
funcion_ll: BIDENTIFICADOR BPARENTESIS_APERTURA l_ll BPARENTESIS_CIERRE{};
l_ll: expresion BCOMA l_ll {}
	| expresion {};

int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
