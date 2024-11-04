//Ejercicio 9
//a)
// (i -> -3, s -> 5, A -> [2,10,10,-1])
int main() {
    int i, s, a[4];  //aca para el arreglo a[], debo dentro poner si o si su tamaño para que compile

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
