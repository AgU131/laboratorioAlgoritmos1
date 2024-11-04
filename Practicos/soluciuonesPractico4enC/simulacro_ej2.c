//Simulacro del 2do parcial Algoritmos I
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

// #define N 4

typedef struct {
    int cant_v;
    int cant_pares;
    int cant_imp;
    bool hay_8;
} datos;

/*
int cantidad_de(int , int v) {
    int can = 0, i = 0;
    while (i <)
    {
       
    // }
    
    // return can;
// }
*/
bool es_par(int x) {
    bool res;
    res = (x % 2) == 0 ;

    return res;
}

datos llenar_estructura(int a[], int tam, int v) {
    int i = 0;
    datos d;

    d.cant_v = 0 ;  
    d.cant_pares = 0 ; 
    d.cant_imp = 0 ;
    d.hay_8 = false ;

    while (i<tam) {
        if (a[i] == v) {
            d.cant_v = 1 + d.cant_v ;
        }
        
        if (es_par(a[i])) {
            d.cant_pares = 1 + d.cant_pares ;
        } else {
            d.cant_imp = 1 + d.cant_imp ;
        }
        
        if (a[i] == 8) {
            d.hay_8 = true ;
        }

        i = i+1;
    }
    return d;
}


int main() {
    int x = 0, tam = 4, a[tam], v;
    datos resultado;
    printf("Ahora ingrese los valores para el arreglo 'a'.\n");
    while (x<tam) {
        printf("Ingrese un valor para el lugar %d en el arreglo 'a':\n", x);
        scanf("%d", &a[x]);   
        x = x + 1;
    }
    printf("Ingrese un valor para el valor v:\n");
    scanf("%d", &v);
    
    resultado = llenar_estructura(a, tam, v);

    printf("Los valores de la struct datos son:\n");
    printf("cant_v = %i\ncant_pares = %i\ncant_imp = %i\nhay_8 = %i\n", resultado.cant_v, resultado.cant_pares,resultado.cant_imp, resultado.hay_8);


    return 0;
}

