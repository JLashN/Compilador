#ifndef JLML_TABLADESIMBOLOS_H
#define JLML_TABLADESIMBOLOS_H
typedef enum Tipo{BOOLEANO, ENTERO, REAL, CARACTER, CADENA}Tipo;
typedef enum TipoVariable{ENTRADA, SALIDA, ENTRADASALIDA, ENTORNO,TEMPORAL,CONSTANTE}TipoVariable;

typedef struct Elemento {
	int id;
	Tipo tipo;
	char *nombre;
	TipoVariable tipoentorno;
	struct Elemento *siguiente;
	struct Elemento *anterior;
}Elemento;

typedef struct Lista {
	Elemento *inicio;
	Elemento *ultimo;
	int ultimaVariableTemporal;
}TablaDeSimbolos;

int insertar_variable(TablaDeSimbolos *,char* , char*,char*);
void inicializacion (TablaDeSimbolos *);
void leerlista(TablaDeSimbolos *);
Elemento* obtenerObjeto(TablaDeSimbolos *, char* );
Elemento* obtenerObjetoPorId(TablaDeSimbolos *lista, int id);

#endif
