//Tema B -> https://docs.google.com/document/d/1omcNhp-9Zr8vA8_sdOl3XsLmxnv0ts0c2MzdtJL97mw/export?format=pdf
/*
Resolucion Recuperatorio 2do Parcial Laboratorio Algoritmos I - Tema B
Agustin Ezequiel Heredia Urbinatti - 44295961
*/

//Ejercicio 1

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#define N 4

//Definimos una funcion auxiliar que nos da como resultado si un int que le demos es par
bool es_par(int x) {
    bool res = (x % 2) == 0 ;
    return (res);
}

//Funcion del Ejercicio que suma pares.
    //pide: un arreglo a[], su tamaño tam y  un numero n
    //devuelve: la suma de los primeros n elementos del arreglo que son pares (elementos de valor par, no de posición par)
int sum_even(int tam, int a[], int n) {
    int i = 0, sum = 0;
    //con assert nos aseguramos de que n sea menor o igual a tam y mayor o igual que 0.
    assert(tam>0 && n<=tam && n>=0);
    //loop que suma los elementos pares del arreglo y los guarda en la variable sum
    while (i<n) {
        if (es_par(a[i])) {
            sum = a[i] + sum ;
        }

        i=i+1;
    }
    return sum;
}

//Ejercicio 2

int main(void) {
    int i = 0, e = 0, tam = N, a[N], n = 0;
    //Pedimos los valores del arreglo
    printf("Ahora ingresara los valores para el arreglo 'a' \n");
    while (i<tam) {
        printf("Ingrese un valor para el lugar %i en el arreglo 'a': \n", i);
        scanf("%i", &e);
        a[i] = e ;
        i = i + 1;
    }
    //Pedimos un n
    printf("Ahora Ingrese un valor n: \n");
    scanf("%i", &n);

    //Imprime el resultado de la funcion anterior 
    int resultado = sum_even(tam, a, n);
    printf("El resultado de la funcion es: %i\n", resultado) ;

    return 0;
}


//Ejercicio 3
/*
Fila : [3, 6, 5, 8] -> 4 -> 2 -> 6

Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a': 
3
Ingrese un valor para el lugar 1 en el arreglo 'a': 
6
Ingrese un valor para el lugar 2 en el arreglo 'a': 
5
Ingrese un valor para el lugar 3 en el arreglo 'a': 
8
Ahora Ingrese un valor n (mayor que 0): 
2
El resultado de la funcion es: 6

Fila 2: [4, 2, 3, 4] -> 4 -> 3 -> 6

Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a': 
3
Ingrese un valor para el lugar 1 en el arreglo 'a': 
6
Ingrese un valor para el lugar 2 en el arreglo 'a': 
5
Ingrese un valor para el lugar 3 en el arreglo 'a': 
8
Ahora Ingrese un valor n (mayor que 0): 
2
El resultado de la funcion es: 6

*/