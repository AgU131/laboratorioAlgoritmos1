#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//una forma de usar if es tambien asi:
        //es_vocal(letra)?printf("Es vocal\n"):printf("No es vocal\n");


//assert s
bool pedirBooleano(void) {
    int temp = 2;
    while (!(temp ==1 || temp ==0)) {
    printf("Ingrese un bool: 0 para false | 1 para true\n");
    scanf("%i", &temp);
    }
    assert(temp==1 || temp==0);
    // printf("%i", temp);
    return temp;
}

void imprimirBooleano(bool x) {
    assert (x==1 || x==0);
    if (x==1) {
        printf("Verdadero\n");
    } else if (x==0) {
        printf("Falso\n");
    }
}

int main(void) {
    bool x = pedirBooleano();   //Despues de media hora vi que el error era no haberle puesto () despues de la func
    imprimirBooleano(x);

    return 0;
}

/*   Resolucion de chatgpt para pedir bools
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
*/


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