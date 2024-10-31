#include <stdio.h>
#include <stdbool.h>

bool es_vocal(char letra);
//declaramos la funcion asi para que el prog sepa que existe, y asi la pueda ejecutar siendo igual que la func esta abajo


int main(void) {
    char letra;
    printf("Ingrese una letra: \n");
    scanf("%c", &letra);
            //otra forma sin usar if
            //es_vocal(letra)?printf("Es vocal\n"):printf("No es vocal\n");
    if (es_vocal(letra)) {
        printf("La letra '%c' Es vocal\n", letra);
    } else {
        printf("La letra '%c' No es vocal\n", letra);
    }
    return 0;
}


//foncion toma un char y devuelve un bool que dice si ese char es una vocal
bool es_vocal(char letra){
    return letra == 'a' || letra == 'e'|| letra == 'i'|| letra == 'o'|| letra == 'u'|| letra == 'A'|| letra == 'E'|| letra == 'I'|| letra == 'O'|| letra == 'U';
}

