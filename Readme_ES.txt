Proyecto de Divisores de un Número
Este proyecto está diseñado para encontrar tres divisores de un número dado que, multiplicados entre sí, resulten en el propio número. 
Si se encuentra una combinación de divisores, el programa la muestra. De lo contrario, indica que no se encontraron divisores válidos. 
El programa permite al usuario ingresar varios números y obtener los resultados de los divisores hasta que decida salir.

Descripción del Proyecto
Este programa en C permite a los usuarios ingresar un número, y luego busca tres divisores de dicho número que, al multiplicarse entre sí, den como resultado el número original. 
Si encuentra estos divisores, los muestra; si no, indica que no es posible encontrar una combinación adecuada. 
El proceso se repite para cada número que el usuario ingresa hasta que ingresa un 0, momento en el cual el programa termina.

Funcionalidades:
	Ingreso de Número: Permite al usuario ingresar un número, o ingresar 0 para finalizar la ejecución del programa.
	Búsqueda de Divisores: Para cada número ingresado, el programa busca tres divisores distintos que, multiplicados entre sí, den como resultado el número ingresado.
	Resultados: Si se encuentran los divisores, se muestran al usuario; de lo contrario, el programa indica que no se pudieron encontrar divisores válidos.
	Ciclo Continuo: El programa permite ingresar números de manera continua, procesando cada número hasta que el usuario decida terminar.

Funciones Principales:
	EscrituraNumero(): Función que solicita al usuario un número o 0 para finalizar. El número ingresado se almacena en la variable proporcionada.
	Divisores(): Función que calcula tres divisores del número ingresado que, al multiplicarse entre sí, den como resultado el número original. Si no se encuentra una combinación válida, retorna que no se encontraron divisores.
	Escritura(): Función que imprime los resultados de la búsqueda de divisores. Si se encuentran divisores válidos, los muestra. De lo contrario, imprime un mensaje indicando que no se encontraron divisores.

Explicación del Algoritmo:
	Entrada de Número: El programa primero pide al usuario que ingrese un número. Si el número es 0, el programa se termina.
	Búsqueda de Divisores: La función Divisores() busca tres divisores d1, d2, y d3 del número ingresado, tal que la multiplicación de estos tres divisores sea igual al número. La búsqueda comienza con d1 desde 2 hasta la mitad del número, y para cada valor de d1, busca valores de d2 de d1 hasta num/d1. Para cada par de divisores d1 y d2, calcula d3 como el cociente de num/(d1*d2).
	Verificación: Si los tres divisores d1, d2, y d3 multiplicados entre sí dan como resultado el número, los divisores se almacenan y se indica que se han encontrado divisores válidos. Si no se encuentra una combinación válida, se imprime un mensaje que lo indica.
	Repetición: El proceso se repite hasta que el usuario ingresa un número 0 para finalizar.

Requisitos:
Compilador: Se requiere un compilador de C compatible con el estándar C99 o superior.
Sistema Operativo: Funciona en sistemas operativos como Windows, Linux y macOS.

Instrucciones de Uso
Compilación y Ejecución:

Para compilar el proyecto, utiliza un compilador de C (por ejemplo, GCC) con el siguiente comando:
	gcc -o divisores divisores.c
Para ejecutar el programa, utiliza el siguiente comando:
	./divisores

Interacción:

El programa solicita al usuario ingresar un número.
Luego, el programa muestra los divisores de ese número si existen.
El proceso se repite para cada número ingresado hasta que el usuario ingresa un 0 para terminar.

Ejemplo de Uso
Entrada: El usuario ingresa el número 36.
	El programa busca tres divisores de 36 que, multiplicados entre sí, den como resultado 36. Por ejemplo, 2 * 3 * 6 = 36.
El programa imprime:
	numero: 36
	Divisor 1: 2
	Divisor 2: 3
	Divisor 3: 6
Entrada: El usuario ingresa el número 30.

El programa no encuentra tres divisores que, multiplicados entre sí, den como resultado 30.
El programa imprime:
	No se encontraron divisores para el numero: 30
Entrada de 0: Cuando el usuario ingresa 0, el programa termina.

Contribuciones
Las contribuciones al proyecto son bienvenidas. Si deseas mejorar el código, agregar nuevas funcionalidades o corregir errores, por favor sigue estos pasos:
Haz un fork del repositorio.
Crea una nueva rama para tu cambio (git checkout -b feature/nueva-funcionalidad).
Realiza tus cambios y haz commit (git commit -am 'Añadir nueva funcionalidad').
Haz push a la rama (git push origin feature/nueva-funcionalidad).
Crea un pull request describiendo los cambios realizados.