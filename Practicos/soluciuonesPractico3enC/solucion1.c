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
int main11(void) 
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
int main12(void) 
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
int main13(void) 
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


//Ej1.4 (y / 2 * x)
// (x-> 7, y-> 3, z-> 5)
int main14(void) 
{    
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> , z-> _)
    printf("Su valor es x+y=%d\n",y / 2 * x);

    return 0;
}
// (x-> 1, y-> 10, z-> 8)


//Ej1.5 (y < x * z)
// (x-> 7, y-> 3, z-> 5)
int main15(void) 
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
    printf("Su valor es x+y=%d\n",y<x*z);

    return 0;
}
// (x-> 1, y-> 10, z-> 8)



//Ejercicio 2

//Ej2.1 (x % 4 == 0)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main21(void) 
{    
    int x;
    bool b, w;   // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    b = (x % 4 == 0);                           //no se si esto anda
    printf("Su valor es not b && w =%d\n", b);
    return 0;
}
// (x-> _, y-> _, z-> _, b-> _, w-> _)


//Ej2.2 (x + y == 0 && y - x == (-1) * z)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main22(void) 
{    
    int x, y, z;
    bool b, w;   // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);  
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    printf("Su valor es not b && w =%d\n", (x + y == 0 && y - x == (-1) * z));
    return 0;
}
// (x-> _, y-> _, z-> _, b-> _, w-> _)


//Ej2.3 (not b && w)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main23(void) 
{    
    int x, y;
    bool b, w;   // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);  
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    b = x ;
    w = y ;
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    printf("Su valor es not b && w =%d\n", !(b&&w));

    return 0;
    // ! = not
    // && es y
}
// (x-> _, y-> _, z-> _, b-> _, w-> _)



//Ejercicio 3

//Ej3.1a, ejecucion 1
int main31(void) {
    int x;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    x=5;
    printf("Ahora tu x es %d\n", x);
}
//Ej3.1a, ejecucion 2
//Ej3.1a, ejecucion 3

//Ej3.1b, ejecucion 1
int main32(void) {
    int x, y;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    x=x+y;
    y=y+x;
    printf("Ahora x = %d y y = %d \n", x, y);
}
//Ej3.1b, ejecucion 2
//Ej3.1b, ejecucion 3

//Ej3.1c, ejecucion 1
int main33(void) {
    int x, y;
    printf("Ejercicio Lab3: 1c)\n");
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    y=y+y;
    x=x+y;
    printf("Ahora x = %d y y = %d \n", x, y);
}
//Ej3.1c, ejecucion 2
//Ej3.1c, ejecucion 3



//Ejercicio 4: Si es posible
int main4(void) {
    int x, y, z;
    printf("Ejercicio Lab4)\n");
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    z=y;
    y=y+y;
    x=x+z;
    printf("Ahora x = %d y y = %d \n", x, y);
}









