#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
//Ejercicio 10
//1)
//no estoy seguro si lo hice y entendi bien el ejercicio, pero ahi esta
// funcion que pide al usuario un entero y lo devuelve
int pedir_entero(char name) {
        int x;
        printf("Ingrese un valor numerico:\n");
        printf("Ese valor ingresado sera guardado en la variable '%c' \n", name);
        scanf("%d", &x);
    return (x);
}

// funcion que imprime el entero
void imprimir_entero(int x, char name) {
    //toma un entero y lo imprime
    printf("La variable '%c' contiene a: %d \n", name, x);
}

int main(void) {
    char name = 'n';
    int n = pedir_entero('n');
    imprimir_entero(n, name);
    return 0;
}

