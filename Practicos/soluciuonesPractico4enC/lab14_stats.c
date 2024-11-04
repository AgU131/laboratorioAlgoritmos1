//se encuentra en video Clase practico 7 - Proyecto 4 (ejercicio 11, 12, 9, 13) 24/10/22 Parte 2. min 9.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//Ejericio 14

struct datos_t {
float maximo;
float minimo;
float promedio;
};

struct datos_t stats(int tam, float a[]) {
    int i = 0;
    struct datos_t res;
    assert(tam > 0);

    res.maximo   = a[0];
    res.minimo   = a[0];
    res.promedio = 0;
 
    while (i < tam) {
        if (a[i] < res.minimo) {
            res.minimo = a[i];
        }
        if (a[i] > res.maximo) {
            res.maximo = a[i];
        }
        res.promedio = a[i] + res.promedio;
        i = i + 1;
    }
    res.promedio = res.promedio/tam;

    return res;
}
#define N 4   // no necesario, podria solo usar el numero 4 en vez de N
int main() {
    struct datos_t d;
    float a[N] = {1,3.5,0.5,4.2};
    
    d = stats(N,a);
    
    printf("min=%f\nmax=%f\nprom=%f\n", d.minimo, d.maximo, d.promedio);
    
    return 0;
}



