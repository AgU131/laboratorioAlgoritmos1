/* primer programa en C */

#include <stdio.h>        /* inclusiÃ³n biblioteca estandar */

int main(void)            /* devuelve un int, sin argumentos */ 
 {
    printf("Hello World!\n");

    return 0;             /* resultado de la funciÃ³n */
 }

/* programa en c entrada y salida basica: http//famaf.aulavirtual.unc.edu.ar/mod/url/view.php?id=15834    */
 int main(void)            
 {
	int x, y;
	printf("Ingrese un valor para x\n"); 
	scanf("%d", &x); 
	printf("Ingrese un valor para y\n"); 
	scanf("%d", &y); 
	
	printf("Usted ingreso x=%d, y=%d; entonces x*y=%d\n",x,y,x*y); 


       return 0;
}


/* ejemplo entrada y salida con booleanos */

#include <stdbool.h> /* biblioteca estÃ¡ndar de booleanos*/
#include <stdio.h>


int main(void){
    int temp;   
    bool x = true; /* declaraciÃ³n de variables - true es una constante definida como 1*/
    bool y; /* declaraciÃ³n de variables*/

    /* AsignaciÃ³n de un booleano */
    y =  false;/* es una constante definida como 0 */

    /* Lectura */
    printf("ingrese un bool: 0 para false, 1 para true:\n");
    scanf("%d", &temp); /* en realidad pedimos un entero por teclado, no un booleano, usamos temp, ya que scanf no tiene definido un '%' para bool */

   x = temp; /* asignamos para que el valor quede en x */
   printf("x vale %d, y vale %d \n", x, y); /* en realidad imprimimos un entero, no un booleano, */
   
   return 0;
}

/* programacion en c ejemplo de funciones   */

#include <stdio.h>

int f(int x) /*que hace esta funcion??*/
{
  int i=2;
  while (x%i!=0 && x>1){
    i=i+1;
  }
  return (i==x);
}


int pideEntero(void){
  int x;
  printf("Ingrese un valor para x\n"); 
  scanf("%d", &x); 
  return x;
}


int main(void) {
  printf("El resultado es %d\n", f(pideEntero())); 
  return 0;
}

