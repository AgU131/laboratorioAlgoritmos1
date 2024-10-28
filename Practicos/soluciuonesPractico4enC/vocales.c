#include <stdio.h>
#include <stdbool.h>

bool es_vocal(char letra);
//declaramos la funcion asi para que el prog sepa que existe, y asi la pueda ejecutar siendo igual que la func esta abajo


int main(void) {
    char letrita;
    scanf("%c", &letrita);
            //otra forma sin usar if
            //es_vocal(letrita)?printf("Es vocal\n"):printf("No es vocal\n");
    if (es_vocal(letrita)) {
        printf("Es vocal\n");
    } else {
        printf("No es vocal\n");
    }
    return 0;
}



bool es_vocal(char letra){
    return letra == 'a' || letra == 'e'|| letra == 'i'|| letra == 'o'|| letra == 'u';
}

