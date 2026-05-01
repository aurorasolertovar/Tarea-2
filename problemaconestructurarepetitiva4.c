#include <stdio.h>
int main()
{
    int producto=1; //5:09
    int N;
    int cont=1;
    printf("Ingresa un número entero positivo\n");
    scanf("%d", &N);
    
    while(cont < N+1)
    {
        producto=producto*cont;
        cont++;
    }
    
    printf("La multiplicación de los primeros %d", N);
    printf(" números naturales es: %d", producto);
    
    
    
return 0;
}
