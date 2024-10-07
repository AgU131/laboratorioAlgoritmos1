// Aqui tomare apuntes de C en las Clases de Algoritmos I Laboratorio 
/* Clase 7-10-2024

Como compilar en C:
Para compilar un archivo .c escribir en la terminal: 
        $> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
Para ejecutar escribir: 
        $> ./miprograma

estado ej.: {x->2}
Las Expresiones nunca van a modificar el estado, solo lo usaran

Como Compilar:
$> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
-w... -> parametros que chequean warnings   std->version de C (1999)  -o -> output
$> ./miprograma
lo llama al archivo para copilarlo

Si no llamamos el -o, c crea un archivo por defecto a.out para darle el output
Podria agregarle un -Werror que transformaria los warnings en errores sin compilar el docigo al encontrar uno 

Comandos extra:
$> ll -> Lista los archivos en la carpeta de C
$> rm archivo -> elimina un archivo

Tipos en C: char, int, float, double (float de doble presicion)
Para poder usar Bools podemos usar <stdbool.h>

Funcion Principales:
siempre se debe llamar main. Y en () recibe parametros o void. 
void es una forma explicita de decir que no devuelve nada, no es necesario ponerlo
return 0; es una forma de decrile a C que todo esta bien, que termino

int main() {                 //funcion principal
   printf ("Hola mundo!\n")  //programa
   return 0;                 //convencion
}

Librerias de C:











*/




