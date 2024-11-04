//Simulacro del 2do parcial Algoritmos I
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


struct info_t {
    int op_sum;
    int op_mul;
    int op_div;
    int op_dist;
};

int valor_abs(int x) {
    if (x<0) {
        x = x * (-1) ;
    }
    return x;
}

struct info_t operar(int x, int y) {
    struct info_t t;
    assert(y!=0);
    t.op_sum = x + y ;
    t.op_mul = x * y ;
    t.op_div = x / y ;
    t.op_dist = valor_abs(x - y) ;

    return t;
}

int main() {
    int x, y;
    struct info_t res;
    printf("Dame un valor para x:\n");
    scanf("%i", &x);
    printf("Dame un valor para y:\n");
    scanf("%i", &y);
    assert(0<y && y<x) ;

    res = operar(x, y) ;
    printf("El valor de la funcion operar es:\n");
    printf("sum = %i\n", res.op_sum);
    printf("mul = %i\n", res.op_mul);
    printf("div = %i\n", res.op_div);
    printf("dist = %i\n", res.op_dist);


    return 0;
}




