#include <stdio.h>
#include <stdbool.h> 

int main(void) {
    int A[4];
    int i, c;
    printf("Ingresa el valor de i\n");
    scanf("%d", &i);
    printf("Ingresa el valor de c\n");
    scanf("%d", &c);
    i = 0;
    c = 0;

    int i2;
    i2 = 0;
    while (i2 < 4)
    {
        printf("Ingresa el valor de A.%i\n", i2);
        scanf("%d", &A[i2]);
        i2 = i2+1;
    }
    while (i<4)
    {
        if (A[i]>0)
        {
            c = c + 1;
        } else {
            ;
        }
        i = i+1;
    }
    return 0;
}