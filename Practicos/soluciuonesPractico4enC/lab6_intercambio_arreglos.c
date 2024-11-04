#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//Ejercicio 6

void intercambiar(int tam, int a[], int i, int j) {
    int z = 0;
    assert(i<tam && j<tam);
    
    z = a[i];
    a[i] = a[j];
    a[j] = z;
}

int main() {
    int x = 0, tam = 4, a[tam], i,j, y=0;
    printf("Ahora ingrese los valores para el arreglo 'a'.\n");
    while (x<tam) {
        printf("Ingrese un valor para el lugar %d en el arreglo 'a':\n", x);
        scanf("%d", &a[x]);
        x = x + 1;
    }

    printf("Ingrese los lugares del arreglo que desea intercambiar (entre 0 hasta %i)\n", tam-1);
    printf("Valor i:\n");
    scanf("%i", &i);
    printf("Valor j:\n");
    scanf("%i", &j);

    intercambiar(tam, a, i, j);
    
    printf("Los valores del arreglo 'a' intercambiados son:\n");

    while (y < tam) {
        printf("a[%i] = %i\n", y, a[y]);
        y = y+1;
    }
    
    return 0;
}
