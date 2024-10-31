#include <stdio.h>

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

int main() {
    // min 

    return 0;
}



//calcular el valor absoluto de un numero