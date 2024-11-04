#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//Ejercicio 7

void pedir_arreglos( int n_max, int a[]) {
    int i = 0, e = 0;
    while (i<n_max) {
        printf("Ingrese un valor para el lugar %d en el arreglo 'a'\n", i);
        scanf("%d", &e);   // aca en vez de &e podria ir &a[i] pero se hace un poco engorroso de leer
        a[i] = e ;  //mejor practica es esto, asignarle a un valor (como e) y ponerlo ahi para que se vea mas lindo
        i = i + 1;
    }
}

void imprimir_arreglos( int n_max, int a[]) {
    int i = 0;
    printf("Los valores del arreglo 'a' son:\n");

    while (i<n_max) {
        printf("a[%i] = %i\n", i, a[i]);
        i = i+1;
    }
}


int main () {
    int n_max = 4, a[n_max];

    pedir_arreglos(n_max,a) ;  //aca no es necesario asignarle ningun valor ya que de por si modifica el valor dentro del arreglo a
    imprimir_arreglos(n_max,a) ;
    return 0;
}
