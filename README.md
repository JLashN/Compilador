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

# Lenguaje intermedio
Nuestro compilador pasa de proAlg a un lenguaje intermedio que tiene las siguientes instrucciones:
1. sumaentero: Suma un numero entero a otro numero entero y lo guarda en la variable destino.
2. menosentero: Resta un numero entero a otro numero entero y lo guarda en la variable destino.
3. porentero: Multiplica un numero entero a otro numero entero y lo guarda en la variable destino.
4. entreentero: Divide un numero entero a otro numero entero y lo guarda en la variable destino.
5. modentero: Hace el modulo de un numero entero con otro numero entero y lo guarda en la variable destino.
6. sumareal: Suma un numero real a otro numero real y lo guarda en la variable destino.
7. menosreal: Resta un numero real a otro numero real y lo guarda en la variable destino.
8. porreal: Multiplica un numero real a otro numero real y lo guarda en la variable destino.
9. entrereal: Divide un numero real a otro numero real y lo guarda en la variable destino.
10. modreal: Hace el modulo de un numero real con otro numero real y lo guarda en la variable destino.
11. asignación: Guarda el valor de una variable en otra variable.
12. inttoreal: Convierte un valor entero a otro real y lo guarda en una variable.
13. truncar: Trunca un valor real y lo guarda en un variable.
14. ifmayor: Si la primera variable es mayor que la segunda, su valor, salta a la instrucción cuyo número es el destino.
15. ifmenor: Si la primera variable es menor que la segunda, su valor, salta a la instrucción cuyo número es el destino.
16. ifdiferente: Si la primera variable es diferente que la segunda, su valor, salta a la instrucción cuyo número es el destino.
17. ifigual: Si la primera variable es igual que la segunda, su valor, salta a la instrucción cuyo número es el destino.
18. ifmayorigual: Si la primera variable es mayor o igual que la segunda, su valor, salta a la instrucción cuyo número es el destino.
19. ifmenorigual: Si la primera variable es menor o igual que la segunda, su valor, salta a la instrucción cuyo número es el destino.
20. goto: Salta a la instrucción destino.
21. asignaciontrue: Asigna verdadero a una variable booleana.
22. asignacionfalse: Asigna false a una variable booleana.
23. fin: Es la última instrucción del programa. Representa el fin del programa.
24. i++: Suma uno a la variable destino.

# Ejemplos
Para probar las características de nuestro compilador proporcionamos los ficheros control.txt, testIntercambio.txt y testSumacomb.txt que se encuentran en el directorio 'ejemplos/'.
Una manera más rápida de hacerlo funcionar y probar rápidamente nuestro compilador es usar el comando "make run".
De esta manera, se compila el archivo prueba.txt de la carpeta ejemplos y se muestra el archivo compilado por pantalla.
