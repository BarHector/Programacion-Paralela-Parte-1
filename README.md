# Programacion-Paralela-Parte-1
Primera parte de algunos programas para explicar la programación paralela en lenguaje C

DEFINICIÓN

  La programación paralela consiste en poder realizar una tarea (o programa) dividiendolo en 'n' partes (o sub-tareas) que se ejecutaran al mismo tiempo, la cantidad de sub-tareas   que se ejcutaran dependera de la cantidad de hilos con los que cuente el equipo en el que se este ejecutando el programa. Hay que considerar que no todos los programas pueden     ser paralelizados y los que se puedan paralelizar no son mejores (en cuestion de tiempo) a la versión secuencial o su dificultad para poder hacerlos es bastante alta.

Hilos: secuencia de instruciones en ejecucion

ATENCION: Es necesario tener instaladas los paquetes y/o librerias OpenMP para poder ejecutar este tipo de programas

Aunque este es un ejemplo sencillo y tal vez no sea uno en el que se pueda apreciar del todo a la programación paralela, sirve para iniciar y conocer algunas clausulas o herramientas que este tipo de programación tiene.

NOTAS ADICIONALES:
 - Para usar programación paralela, se pueden usar lenguajes como C, C++, Java (aunque no es del todo paralelizable) y python.
 - Para trabajar este tipo de programación se pueden usar IDE's en los que se pueda instalar OpenMP (Code Blocks) o se puede usar alguna distribucion de linux (Ubuntu) aunque hay    que instalar OpenMP.
 - En caso de trabajar con una distribucion de linux, el comando de compilacion (al menos en el caso de C) es distinto que el secuencial.
