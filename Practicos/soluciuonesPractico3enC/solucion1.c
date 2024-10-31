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

//Antes aca hice 1 para cada apartado del ej, pero ahora hay 1 para todos (que incluye a todos)

// (x-> 7, y-> 3, z-> 5)
int main1(void) {    
    int x, y, z;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> 7, y-> _, z-> _)
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
// (x-> 7, y-> 3, z-> _)
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
// (x-> 7, y-> 3, z-> )
    printf("Recuerde que el valor 0 = false y 1 = true\n");
    //Ej1.1 (x+y+1)
    printf("Su valor es x + y + 1 = %d\n",x+y+1);

    //Ej1.2 (z * z + y * 45 - 15 * x)
    printf("Su valor es z * z + y * 45 - 15 * x = %d\n",z*z+y*45-15*x);
    
    //Ej1.3 (y - 2 == (x * 3 + 1) % 5)
    printf("Su valor es y - 2 == (x * 3 + 1) / 5 = %d\n",y - 2 == (x * 3 + 1) / 5);
    
    //Ej1.4 (y / 2 * x)
    printf("Su valor es y / 2 * x = %d\n",y / 2 * x);

    //Ej1.5 (y < x * z)
    printf("Su valor es y < x * z = %d\n",y<x*z);

    return 0;
}
// (x-> 7, y-> 3, z-> _)



//Ejercicio 2

//Ej2.1 (x % 4 == 0)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main21(void) {    
    int x;
    bool b;   // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    b = (x % 4 == 0);                           //no se si esto anda
    
    if (b)
    {
    printf("Su valor es: x mod 4 == 0) = true\n");
    } else {
    printf("Su valor es: x mod 4 == 0) = false\n");   
    }
    
    // printf("Su valor es not b && w =%d\n", b);
    return 0;
}
// (x-> _, y-> _, z-> _, b-> _, w-> _)


//Ej2.2 (x + y == 0 && y - x == (-1) * z)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main22(void) {    
    int x, y, z;
    bool resultado;
    // 0 false, x (1) true
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);  
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);  
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    resultado = (x + y == 0 && y - x == (-1) * z);
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    printf("Su valor es: (x + y == 0 && y - x == (-1) * z) = %d\n", resultado);
    return 0;
}
// (x-> _, y-> _, z-> _, b-> _, w-> _)


//Ej2.3 (not b && w)
// (x-> _, y-> _, z-> _, b-> _, w-> _)
int main23(void) 
{    //despues de muchas pruebas parece que si def las variables como bool no funciona el code
    int b , w;   // 0 false, x (1) true

    printf("Recuerde que: 0 = false y 1 = true\n");
    printf("Ingrese un valor para b:\n");
    scanf("%d", &b);  
    printf("Ingrese un valor para w:\n");
    scanf("%d", &w);  
// (x-> _, y-> _, z-> _, b-> _, w-> _)
    bool result = (!b && w);
    
    if (result)
    {
    printf("Su valor es: not b && w = true (1)\n");
    } else {
    printf("Su valor es: not b && w = false (0)\n");   
    }
    // (x-> _, y-> _, z-> _, b-> _, w-> _)
    
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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
}



//Ejercicio 5

//Ej5.3a
int main5(void) {
    int x, y;
    printf("Ejercicio Lab5)\n");
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    if (x>=y) {
        x=0;
    } else if (x<=y) {
        x=2;
    }
    printf("Su devolucion es x = %d y y = %d \n", x, y);
    return 0;
}



//Ejercicio 6

int main61(void) {
    int x, y, z, m;
    printf("Ejercicio Lab6)\n");
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para m\n");
    scanf("%d", &m);
    if (x<y) {
        m=x;
    } else {
        m=y;
    }
    printf("Su devolucion es x = %d, y = %d, z = %d, m = %d \n", x, y, z, m);
    return 0;
}

int main62(void) {
    int x, y, z, m;
    printf("Ejercicio Lab6)\n");
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);
    printf("Ingrese un valor para z\n");
    scanf("%d", &z);
    printf("Ingrese un valor para m\n");
    scanf("%d", &m);
    if (m<z) {
        ;
    } else {
        m=z;
    }
    printf("Su devolucion es x = %d, y = %d, z = %d, m = %d \n", x, y, z, m);
    return 0;
}



// //Ejercicio 7

// a) int i=4;
int main71(void){
    int i=4;
    while (i!=0)
    {
        i = i-1;        
    }
    printf("%d\n", i);
    
    return 0;
}
// b) int i=4;

int main72(void){
    int i=400;
    while (i!=0)
    {
        i = 0;        
    }
    printf("%d\n", i);
    
    return 0;
}
// c) int i=4;
int main73(void){
    int i=4;
    while (i<0)
    {
        i = i-1;
    }
    printf("%d\n", i);

    return 0;
}


//Ejercicio 8
//a)

int main81() {
    int x, y, i=0;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);
    printf("Ingrese un valor para y\n");
    scanf("%d", &y);

    while (x>=y)
    {
        x = x-y;
        i = i+1;
    }
    printf("Valores resultantes: x = %d, y = %d, i = %d\n", x, y, i);

    return 0;
}

//b)

int main82() {
    int x, i=2;
    bool res = true;
    printf("Ingrese un valor para x\n");
    scanf("%d", &x);

    while (i<x && res)
    {
        res = res && ((x % i) != 0);
        i = i+1;
    }
    printf("Valores resultantes: x = %d, i = %d, res = %d\n", x, i, res);
    printf("(0 para false, 1 para true)\n");

    return 0;
}


//Ejercicio 9
//a)
// (i -> -3, s -> 5, A -> [2,10,10,-1])
int main91() {
    int i, s, a[4];

    //Pedir los valores de las variables
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);
    printf("Ingrese un valor para s\n");
    scanf("%d", &s);
    printf("Ahora deberá ingresar valores para el Arreglo\n");
    printf("Ingrese un valor para a[0]\n");
    scanf("%d", &a[0]);
    printf("Ingrese un valor para a[1]\n");
    scanf("%d", &a[1]);
    printf("Ingrese un valor para a[2]\n");
    scanf("%d", &a[2]);
    printf("Ingrese un valor para a[3]\n");
    scanf("%d", &a[3]);

    i = 0; 
    s = 0; 

    while (i<4) {
        printf("Estado numero %d: \na[%d] = %d\n", i+1, i, a[i]);
        s = s + a[i];
        i = i + 1;
        printf("s = %d\n",s);
        printf("i = %d\n",i);
    }
    printf("Estado final: \ni = %d \ns = %d", i, s);
        
    return 0;
}


//b)
// (i -> 3, c -> 12, A -> [12,-9,10,-1])
int main() {
    int i, c; 
    int a[4];

    //Pedir los valores de las variables
    printf("Ingrese un valor para i\n");
    scanf("%d", &i);
    printf("Ingrese un valor para c\n");
    scanf("%d", &c);
    printf("Ahora deberá ingresar valores para el Arreglo\n");
    printf("Ingrese un valor para a[0]\n");
    scanf("%d", &a[0]);
    printf("Ingrese un valor para a[1]\n");
    scanf("%d", &a[1]);
    printf("Ingrese un valor para a[2]\n");
    scanf("%d", &a[2]);
    printf("Ingrese un valor para a[3]\n");
    scanf("%d", &a[3]);

    i = 0; 
    c = 0; 
    printf("\n");

    while (i<4) {
        printf("Estado numero %d: \n", i+1);
        printf("a[%d] = %d\n", i, a[i]);
        if (a[i]>0) {
            c = c + 1 ;
        }
        i = i + 1 ;

        printf("c = %d\n",c);
        printf("i = %d\n",i);
    }
    printf("\nEstado final: \ni = %d \nc = %d\n", i, c);
        
    return 0;
}



//Ejercicio 10



