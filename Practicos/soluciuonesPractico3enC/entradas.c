#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
//Ejercicio 10
//1)
//no estoy seguro si lo hice y entendi bien el ejercicio, pero ahi esta
int pedir_entero(char name) {
    //pide al usuario un entero y lo devuelve
        int x;
        printf("Ingrese un valor:\n");
        scanf("%d", &x);
        printf("Ese valor ingresado sera guardado en la variable n \n");
    return (x);
}

void imprimir_entero(int x) {
    //toma un entero y lo imprime
    printf("%d \n", x);
}

int main(void) {
    int n = pedir_entero('n');
    imprimir_entero(n);
    return 0;
}

