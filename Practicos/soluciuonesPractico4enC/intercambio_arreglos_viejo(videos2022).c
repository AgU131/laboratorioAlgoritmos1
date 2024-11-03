#include <stdio.h>  // solo este es necesario aca
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>



//Ejercicio 6

int sumatoria(int a[], int tam){
    int res = 0, i = 0;   //i de indice y res de resultado
    while (i < tam) {
        res = res + a[i];
        i = i + 1;
    }
    
    return res;
}

void pedir_arreglos( int a[], int tam) {
    int i = 0, e = 0;
    while (i<tam) {
        printf("Ingrese un valor para el lugar %d en el arreglo 'a'\n", i);
        scanf("%d", &e);   // aca en vez de &e podria ir &a[i] pero se hace un poco engorroso de leer
        a[i] = e ;  //mejor practica es esto, asignarle a un valor (como e) y ponerlo ahi para que se vea mas lindo
        i = i + 1;
    }
}

int main () {
    int a[4], res = 0;

    pedir_arreglos(a, 4) ;  //aca no es necesario asignarle ningun valor ya que de por si modifica el valor dentro del arreglo a
    res = sumatoria(a, 4);

    printf("El resultado es %i\n", res);
    return 0;
}





//Pedir los valores de las variables
    // printf("Ingrese un valor para i\n");
    // scanf("%d", &i);

