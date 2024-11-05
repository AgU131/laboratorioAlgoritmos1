//Tema C: https://docs.google.com/document/d/1wyL-L7lCUmU_2ImmkpVVYCRAD8-oxrJF-Xk_jonnsu0/export?format=pdf

//Tema D: https://docs.google.com/document/d/18Y4vCq-a14rvq88BSJlyC76gDH8X6i2LqTrsrdNSLi8/export?format=pdf

/*
Resolucion 2do Parcial Laboratorio Algoritmos I
Agustin Ezequiel Heredia Urbinatti - 44295961
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define N 5

//Ejercicio 1


int max_init(int tam, int a[], int n) {
    int res;
    assert(n<=tam && n>0);  //Precondicion n<=tam y n>0
    //Nos aseguramos de que el resultado mimimo sea el primer elemento
    res = a[0];
    int i = 0;
    //Checkea si hay algun valor en el arreglo mayor que el primer valor, hasta n
    while (i<n) { 
        if (a[i] > a[0]) {
            res = a[i];
        }

        i = i + 1 ;
    }

    return res;
}



//Ejercicio 2


int main (void) {
    int i = 0, e = 0, tam = N, a[N], n = 1;
    //Pedimos los valores del arreglo
    printf("Ahora ingresara los valores para el arreglo 'a'\n");
    while (i<tam) {
        printf("Ingrese un valor para el lugar %i en el arreglo 'a':\n", i);
        scanf("%i", &e);
        a[i] = e ;
        i = i + 1;
    }
    //Pedimos un n
    printf("Ahora Ingrese un valor n (mayor que 0): \n");
    scanf("%i", &n);

    //Imprime el resultado de la funcion anterior 
    int resultado = max_init(tam, a, n);
    printf("El resultado de la funcion es: %i\n", resultado) ;

    return 0;
}



//Ejercicio 3:

/* 
----> Prueba 1 de la tabla: [4,3,6,5,8] -> 5 -> 3 -> 6
Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a':
4
Ingrese un valor para el lugar 1 en el arreglo 'a':
3
Ingrese un valor para el lugar 2 en el arreglo 'a':
6
Ingrese un valor para el lugar 3 en el arreglo 'a':
5
Ingrese un valor para el lugar 4 en el arreglo 'a':
8
Ahora Ingrese un valor n (mayor que 0): 
3
El resultado de la funcion es: 6

----> Prueba 2 de la tabla: [1,1,6,3,7] -> 5 -> 5 -> 7
Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a':
1
Ingrese un valor para el lugar 1 en el arreglo 'a':
1
Ingrese un valor para el lugar 2 en el arreglo 'a':
6
Ingrese un valor para el lugar 3 en el arreglo 'a':
3
Ingrese un valor para el lugar 4 en el arreglo 'a':
7
Ahora Ingrese un valor n (mayor que 0): 
5
El resultado de la funcion es: 7

----> Prueba 3 de la tabla: [3,9,77,5,66] -> 5 -> 2 -> 9
Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a':
3
Ingrese un valor para el lugar 1 en el arreglo 'a':
9
Ingrese un valor para el lugar 2 en el arreglo 'a':
77
Ingrese un valor para el lugar 3 en el arreglo 'a':
5
Ingrese un valor para el lugar 4 en el arreglo 'a':
66
Ahora Ingrese un valor n (mayor que 0): 
2
El resultado de la funcion es: 9

----> Prueba 4 de la tabla: [7,44,8,9] -> 5 -> 1 -> 7
Ahora ingresara los valores para el arreglo 'a'
Ingrese un valor para el lugar 0 en el arreglo 'a':
7
Ingrese un valor para el lugar 1 en el arreglo 'a':
44
Ingrese un valor para el lugar 2 en el arreglo 'a':
8
Ingrese un valor para el lugar 3 en el arreglo 'a':
9
Ingrese un valor para el lugar 4 en el arreglo 'a':
0
Ahora Ingrese un valor n (mayor que 0): 
1
El resultado de la funcion es: 7

*/