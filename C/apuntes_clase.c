// Aqui tomare apuntes de C en las Clases de Algoritmos I Laboratorio 
/* Clase 7-10-2024

-Como compilar en C:
Para compilar un archivo .c escribir en la terminal: 
        $> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
-Para ejecutar escribir: 
        $> ./miprograma

estado ej.: {x->2}
Las Expresiones nunca van a modificar el estado, solo lo usaran

-Como Compilar:
$> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
-w... -> parametros que chequean warnings   std->version de C (1999)  -o -> output
$> ./miprograma
lo llama al archivo para copilarlo

Si no llamamos el -o, c crea un archivo por defecto a.out para darle el output
Podria agregarle un -Werror que transformaria los warnings en errores sin compilar el docigo al encontrar uno 

-Comandos extra:
$> ll -> Lista los archivos en la carpeta de C
$> rm archivo -> elimina un archivo

-Tipos en C: char, int, float, double (float de doble presicion)
Para poder usar Bools podemos usar <stdbool.h>

-Funcion Principales:
int main() {                 //funcion principal
   printf ("Hola mundo!\n")  //programa
   return 0;                 //convencion
}
siempre se debe llamar main. Y en () recibe parametros o void. Y la funcion main debe devolver siempre int
void es una forma explicita de decir que no devuelve nada, no es necesario ponerlo
return 0; es una forma de decrile a C que todo esta bien, que termino bien o exitoso
al final de cada sentencia del programa siempre debe ir un ;

-Librerias de C:
#include <stdio.h>   // estandar input ouput
debe estar incluido para que funcione, saca declaraciones o definiciones de funciones de estas librerias
cuando le ponemos comillas ("stdio.h") es que nosotros estamops definiaendo esa libreria
podemos poner todas las librerias que queramos, ej: #include <stdio.h>
                                                    #include <stdbool.h>

Instrucciones basicas de C:
Declaracion: int x, int y;
Asignacion: x=2;   Las variables pára ser asignadas debieron haber sido declaradas previamente
Alternativas:   if (x<y) {
                   b=true;
                } else {
                   b=false;
                }

-Variables globales: se defienen afuera para todo el programa

-ejemplo:
void sentenceIf(int x, int y) {
  //int x, y;
  if (x<y) {
    b=true;
  } else if (x==y) {   //formas de hacer alternativas mas grandes
    b=true;
  } else {
    b=false;
  }
}

cada funcion tiene su propio estado
en los booleanos 0 es false y 1 es true
*/

//Clase anterior vimos arrays y no se que mas

/* Clase 28/10/2024     - Ultima clase antes del 2do Parcial
Resumen General



*/






