#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool pedir_booleano(char name) {
    int temp;
    printf("Ingrese un valor booleano para almacenar en la variable '%c' (0 para false, 1 para true): ", name);
    scanf("%d", &temp); // Leer un entero
    assert(temp == 0 || temp == 1); // Asegurarse de que el valor sea 0 o 1
    return (bool)temp; // Convertir a bool
}

void imprimir_booleano(bool x, char name) {
    printf("El valor almacenado en la variable '%c' es: %s\n", name, x ? "true" : "false");
}

int main(void) {
    char name = 'b'; // Nombre de la variable
    bool b = pedir_booleano(name); // Llamada a la función para pedir un booleano
    imprimir_booleano(b, name); // Llamada a la función para imprimir el booleano

    return 0;
}
