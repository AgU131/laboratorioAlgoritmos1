#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
//Ejercicio 10. 2)
//funcion que pide al usuario un booleano y lo devuelve
bool pedir_booleano(char name) {
    int x = 2;
        //este while se asegura de recibir un valor 0 o 1
    while (!(x==0 || x==1)) {
        printf("Ingrese un valor booleano: (1 = true | 0 = false)\n");
        printf("Ese valor ingresado sera guardado en la variable '%c' \n", name);
        scanf("%i", &x);
        //aca devuelve lo correspondiente segun el bool
    }
    if (x) {
        printf("Ha ingresado: Verdadero\n");
    } else {
        printf("Ha ingresado: Falso\n");
    }

    return (x);
}

// funcion que imprime el booleano
void imprimir_booleano(bool x, char name) {
    printf("La variable '%c' contiene: %d    (1 = true | 0 = false)\n", name, x);
}

int main(void) {
    char name = 'n';
    bool n = pedir_booleano('n');
    imprimir_booleano(n, name);
    return 0;
}

