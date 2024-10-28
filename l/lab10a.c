#include <stdio.h>
#include <stdbool.h> 

int pedir_entero(char name) {
    int x;
    printf("Ingrese un entero para almacenar en %c\n", name);
    scanf("%d", &x);
    
    return x;
}

int imprimir_entero (int x) {
    printf("%i \n", x);
    return 0;
}

int main(void) {
    int x = pedir_entero('a');
    return x;
}