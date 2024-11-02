#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

//Ejercicio 1

int main1() {
    int x, y, z;
    printf("Dame un valor para x\n");
    scanf("%d", &x);
    printf("Dame un valor para y\n");
    scanf("%d", &y);
    z = x;
    x = y;
    y = z;
    printf("Tus valores son:\n");
    printf("x = %d", x);
    printf("y = %d", y);
    return 0;
}



//Ejercicio 2
/*{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X} */

//a) y b)

int main21() {
    int x, y, z;
    printf("Dame un valor para x\n");
    scanf("%d", &x);
    printf("Dame un valor para y\n");
    scanf("%d", &y);
    z = x;
    x = x + 1;
    y = z + y;
    printf("Tus valores son:\n");
    printf("x = %d", x);
    printf("y = %d", y);
    return 0;
}

int main22() {
    int x, y, z, w;
    printf("Dame un valor para x\n");
    scanf("%d", &x);
    printf("Dame un valor para y\n");
    scanf("%d", &y);
    printf("Dame un valor para z\n");
    scanf("%d", &z);
    w = x;
    // v = y;   podria haber hecho esto, pero me di cuenta de que el x ya estaba haciendo de este rol
    x = y;
    y = y + w + z;
    z = x + w;
    printf("Tus valores son:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}



//Ejercicio 4
//calcular el minimo entre x e y int
int main41() {
    int x, y;
    printf("Dame un valor para x\n");
    scanf("%i", &x);
    printf("Dame un valor para y\n");
    scanf("%i", &y);
    if (x<y){
        printf("El minimo entre 'x' e 'y' es: 'X' = %d\n", x);
    } else if (x>y){
        printf("El minimo entre 'x' e 'y' es: 'Y' = %d\n", y);
    } else if (x==y) {
        printf("Los valores de 'x' e 'y' son iguales\n");
    }

    return 0;
}

//calcular el valor absoluto de un int
int main42() {
    int x;
    printf("Dame un valor para x\n");
    scanf("%d", &x);
    if (x<0){
        x = x * (-1);
    }
    printf("El valor absoluto de x es: %d\n", x);
    
    return 0;
}



//Ejercicio 5
int suma_hasta(int n) {
    int i = 0, resultado = 0;
    assert(!(n < 0));
    while (i < n) {
        resultado = resultado + i;
        i = i+1;
        // n = n-1;
    }

    return resultado;
}

int main(){
    int x;
    printf("Dame un valor para x\n");
    scanf("%d", &x);
        while (x<0) {
        printf("ERROR. 'x' debe ser > o = a '0'\n");
        printf("\nDame un valor valido para x:\n");
        scanf("%d", &x);
        }
    printf("El valor es: %i\n", suma_hasta(x));

    return 0;
}




