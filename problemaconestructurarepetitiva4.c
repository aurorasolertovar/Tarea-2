#include <stdio.h>
int main()
{
    double producto=1;
    int N;
    int cont=1;
    printf("Ingresa un número entero positivo\n");
    scanf("%d", &N);
    
    while(cont < N+1)
    {
        producto=producto*cont;
        cont++;
    }
    
    printf("La multiplicación de los primeros %lf", N);
    printf(" números naturales es: %d", producto);
    
    
    
return 0;
}
