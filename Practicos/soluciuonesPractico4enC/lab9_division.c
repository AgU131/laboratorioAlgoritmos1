#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//Ejercicio 9

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
    struct div_t res;
    int mod = x % y, coci = x / y ; ; 
    assert(y!=0);

    res.cociente = coci;
    res.resto = mod ;

    return res;
}

int main(void) {
    struct div_t d;
    int x, y;
    printf("Dame un valor para x (dividendo):\n");
    scanf("%i", &x);
    printf("Dame un valor para y (divisor):\n");
    scanf("%i", &y);
    while (y==0) {
        printf("ERROR. 'y' debe ser distinto a 0\n");
        printf("\nDame un valor valido para y (divisor):\n");
        scanf("%i", &y);
    }
    
    d = division(x, y);   //Recordar darle un valor a la operacion hecha

    printf("Cociente = %i\nResto = %i\n", d.cociente, d.resto);

    return 0;
}

