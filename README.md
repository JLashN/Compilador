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
- Alternativas y bucles.

No hemos hecho arrays ni memoria dinámica ya que requería un tiempo del que no disponíamos.
El compilador no reconoce procedimientos ni funciones.

# Compilación
El compilador consta de diferentes módulos: flex para reconocer los tokens, bison para la gramática, SymbolTable es la librería que implementa la tabla de símbolos, QuadruplesTable es la librería que implementa la tabla de cuádruplas y la librería booleanos que implementa la funcionalidad de los booleanos y el control de flujo.
Se proporciona un makefile que compila las librerías necesarias.

# Comandos
make 
make clean
./compilador : lee de la entrada estandar(teclado)
Opciones:
./compilador [-i in_fichero_a_compilar ] [-o out_fichero_compilado(tabla de cuadruplas)] [-t out_tabla_de_simbolos] [-v out_reducciones] [-h muestra_instrucciones_de_uso] 
Por ejemplo:
./compilador ejemplos/testSumacomb.txt -o a.out
  
# Ejemplos
Para probar las características de nuestro compilador proporcionamos los ficheros control.txt, testIntercambio.txt y testSumacomb.txt que se encuentran en el directorio 'ejemplos/'.
Una manera más rápida de hacerlo funcionar y probar rápidamente nuestro compilador es usar el comando "make run".
De esta manera, se compila el archivo prueba.txt de la carpeta ejemplos y se muestra el archivo compilado por pantalla.

# Participación
La carga de trabajo se ha distribuido en función de nuestras aptitudes y conocimientos, por lo que se ha repartido de la siguiente manera:
Javier Lasheras - 60%
Miguel Lucas - 40%


