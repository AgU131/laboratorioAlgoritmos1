#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

//Ejercicio 6

int sumatoria(int a[], int tam){
    int res = 0, i = 0;   //i de indice y res de resultado
    while (i < tam) {
        res = res + a[i];
        i = i + 1;
    }
    
    
    return res;
}


int main () {

    return 0;
}

