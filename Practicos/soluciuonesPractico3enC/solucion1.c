//Resolucion Practico 3 Laboratorio Algoritmos I
//Ejercicio 1

#include <stdio.h>
#include <stdbool.h>
// ejemplo principal de como pedir valores del cliente
int mainEjemplo(void) 
{    
    int x, y;  //aux b (o aux bool) para definir un nuevo tipo
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Su valor es x+y=%d\n",x+y);   //el %d es para esperar int (digito)

    return 0;
}


//Ej1.1 (x+y+1)
// (x-> 7, y-> 3, z-> 5)
int main1(void) 
{    
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> 3, z-> _)
    printf("Su valor es x+y+1 = %d\n",x+y+1);
    return 0;
// (x-> 7, y-> 3, z-> _)
}


//Ej1.2 (z * z + y * 45 - 15 * x)
// (x-> 7, y-> 3, z-> 5)
int main2(void) 
{    
    int x, y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> 3, z-> _)
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
// (x-> 7, y-> 3, z-> 5)
    printf("Su valor es z * z + y * 45 - 15 * x = %d\n",z*z+y*45-15*x);
    return 0;
// (x-> 7, y-> 3, z-> 5)
}


//Ej1.3 (y - 2 == (x * 3 + 1) % 5)
// (x-> 7, y-> 3, z-> 5)
int main3(void) 
{    
    int x, y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> , z-> _)
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
// (x-> 7, y-> , z-> )
    printf("Su valor es y - 2 == (x * 3 + 1) / 5 = %d\n",y - 2 == (x * 3 + 1) / 5);

    return 0;
}

// (x-> 1, y-> 10, z-> 8)


//Ej1.4
// (x-> 7, y-> 3, z-> 5)
int main3(void) 
{    
    int x, y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> , z-> _)
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
// (x-> 7, y-> , z-> )
    printf("Su valor es x+y=%d\n",x+y);

    return 0;
}

// (x-> 1, y-> 10, z-> 8)





//Ej2.3 (not b && w)
// (x-> 7, y-> 3, z-> 5)
int main311(void) 
{    
    int x, y;
    bool b, w;   // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);  
// (x-> 7, y-> _, z-> _)
    b = x ;
    w = y ;
// (x-> 7, y-> , z-> )
    printf("Su valor es not b && w =%d\n", !(b&&w));

    return 0;
    // ! = not
    // && es y
}

// (x-> 1, y-> 10, z-> 8)













