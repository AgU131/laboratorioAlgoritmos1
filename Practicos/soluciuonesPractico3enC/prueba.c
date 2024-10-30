#include <stdio.h>
#include <stdbool.h>


int main() {
    int b, w; // Usamos el tipo bool para las variables booleanas

    // Solicitar al usuario que ingrese los valores
    printf("Ingrese el valor de b (0 para false, 1 para true): ");
    scanf("%d", &b);
    printf("Ingrese el valor de w (0 para false, 1 para true): ");
    scanf("%d", &w);

    // Calcular el valor de la expresión
    bool resultado = (!b && w);

    // Mostrar el resultado
    printf("El resultado de (not b && w) es: %d\n", resultado);

    return 0;
}



/*
int main () {
    bool x, y;
    x = false;   //false = 0
    y = true;    //true = 1
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}
*/





/*
// para hacer una funcion:
// int 
int main(){
//array
char puflito[28];
//length de array
int length = sizeof(puflito);
printf("%d\n",length);
return 0 ; 
}

*/