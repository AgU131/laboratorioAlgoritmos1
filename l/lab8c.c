#include <stdio.h>
#include <stdbool.h> 
int main(void) {
    int x, y, i;
    bool res;
    res = true;
    printf("Ingresa el valor de x\n");
    scanf("%d", &x);
    /*printf("Ingresa el valor de y\n");
    scanf("%d", &y);*/
    i = 2;
    while (i<x && res)
    {
        res = res && x%i != 0;
        i = i+1;
    }
    
    return res;
}