#include <stdio.h>
int main()
{
    double dólares;
    double pesos;
    
    printf("Cantidad de dólares: \n");
    scanf("%lf", &dólares);
    
    pesos=dólares*11.96;
    
    printf("Cantidad de pesos: %lf \n",pesos);
return 0;
}
