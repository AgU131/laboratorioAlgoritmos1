#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//algo que podria haber hecho es esto
//#define N 4
//que es basicamente el type en haskell: define una variable con un tipo y valor
//y asi reemplazandolo por tam es los lugares que se deberia reemplazar


//Ejercicio 8

int sumatoria(int tam, int a[]) {
    int res = 0, i = 0;   //i de indice y res de resultado
    while (i < tam) {
        res = res + a[i];
        i = i + 1;
    }
    
    return res;
}

int main() {
    int i = 0, e = 0, tam = 4, a[tam], res = 0;
    printf("Ahora ingresara los valores para el arreglo 'a'\n");
    while (i<tam) {
        printf("Ingrese un valor para el lugar %d en el arreglo 'a':\n", i);
        scanf("%d", &e);
        a[i] = e ;
        i = i + 1;
    }

    res = sumatoria(tam, a);

    printf("El resultado es %i\n", res);

    return 0;
}

