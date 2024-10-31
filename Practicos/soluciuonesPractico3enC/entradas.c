#include<stdio.h>
//Ejercicio 10

int pedir_entero(char name) {
    //pide al usuario un entero y lo devuelve
        int x;
        printf("Necesitamos que ingrese un valor que sera guardado en su variable n\n");
        printf("Ingrese un valor de tipo char ('algo'):\n");
        scanf("%d", &x);
    return (x);
}

void imprimir_entero(int x) {
    //toma un entero y lo imprime
    printf("%d", x);
}




