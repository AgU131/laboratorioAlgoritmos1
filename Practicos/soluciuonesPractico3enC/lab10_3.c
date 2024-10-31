#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
//Ejercicio 10
//3)

int pedir_entero(char name);

void imprimir_entero(int x, char name);

int main101(void) {
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    int z = pedir_entero('z');
    int m = pedir_entero('m');
    
    if (x<y) {
        m=x;
    } else {
        m=y;
    }
    
    imprimir_entero(x, 'x');
    imprimir_entero(y, 'y');
    imprimir_entero(z, 'z');
    imprimir_entero(m, 'm');
    
    return 0;
}

int main(void) {
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    int z = pedir_entero('z');
    int m = pedir_entero('m');
    
    if (m>=z) {
        m=z;
    }

    imprimir_entero(x, 'x');
    imprimir_entero(y, 'y');
    imprimir_entero(z, 'z');
    imprimir_entero(m, 'm');
    
    return 0;
}

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


