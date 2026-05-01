#include <stdio.h>
int main()
{
    int N;
    int cont;
    int res;
    cont=1;
    printf("Ingresa un número entero: \n");
    scanf("%d", &N);
    printf("La tabla de multiplicar del %d", N);
    printf(" es: \n");
    
    while(cont<11)
    {
        res=N*cont;
        printf("%d", N);
        printf(" x %d", cont);
        printf(" = %d \n", res);
        cont++;
    }
return 0;    
}
