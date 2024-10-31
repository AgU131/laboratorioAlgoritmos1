#include <stdio.h>

// Prototipos de las funciones
int pedir_entero(char name);
void imprimir_entero(int x, char name);

int main(void) {
    char name = 'n'; // Nombre de la variable
    int n = pedir_entero(name); // Llamada a la función para pedir un entero
    imprimir_entero(n, name); // Llamada a la función para imprimir el entero

    return 0;
}

// Función que pide un entero al usuario
int pedir_entero(char name) {
    int temp;
    printf("Ingrese un valor para almacenar en la variable '%c': ", name);
    scanf("%d", &temp);
    return temp; // Devuelve el entero ingresado
}

// Función que imprime el entero
void imprimir_entero(int x, char name) {
    printf("El valor almacenado en la variable '%c' es: %d\n", name, x);
}
