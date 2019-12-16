# Compilador 2019
# Autores 
Miguel Lucas y Javier Lasheras

# Tipos de variables 
Tipos de variables que reconoce el compilador:
- cadenas de caracteres: "holaMundo2","sOyUnString"
- caracteres: 'h','a','3'
- enteros: 5,3,0,3e10
- reales: 5.0,0.4,2.9, 3.2e2
- booleano: true, false

# Funcionalidad
Las operaciones aritméticas solo aceptan variables, no constantes.
Las variables booleanas empiezan con la letra 'b'.
Flex reconoce todos los tokens de la gramática propuesta.
Hemos hecho modificaciones a la gramática para adaptarla al lenguaje de los ejemplos.
Nuestro compilador reconoce:
- Declaración de constantes de tipos entero, real, booleano, caracter y cadena de caracteres.
- Asignaciones.
- Expresiones aritméticas.

No hemos hecho control de flujo
No hemos hecho arrays ni memoria dinámica
El compilador no reconoce procedimientos ni funciones 
...aunque la gramática está implementada.

# Compilación
El compilador consta de diferentes módulos: flex para reconocer los tokens, bison para la gramática, SymbolTable es la librería que implementa la tabla de símbolos y QuadruplesTable es la librería que inmplementa la tabla de cuádruplas.
Para probar estas características de nuestro compilador proporcionamos los ficheros test1.txt, test2.txt y test3.txt.
Se proporciona un makefile que compila las librerías necesarias.

# Comandos
make 
make clean
./compilador.out : lee de la entrada estandar(teclado)
Opciones:
./compilador.out [-i in_fichero_a_compilar ] [-o out_fichero_compilado(tabla de cuadruplas)] [-t out_tabla_de_simbolos] [-v out_reducciones] [-h muestra_instrucciones_de_uso] 
  
# Ejemplos
Los ejemplos para probar el compilador se encuentran en el directorio 'ejemplos/'.

# Participación
La carga de trabajo se ha dsitribuido en función de nuestras aptitudes y conocimientos, por lo que se ha repartido de la siguiente manera:
Javier Lasheras - 60%
Miguel Lucas - 40%


