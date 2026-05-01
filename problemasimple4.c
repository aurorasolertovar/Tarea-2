#include <stdio.h>
int main()
{
    double dinero;
    double tasadeinterésmensual;
    double ganancia;
    
    printf("Dinero a invertir:\n");
    scanf("%lf", &dinero);
    printf("Porcentaje de la tasa de interés mensual: \n");
    scanf("%lf", &tasadeinterésmensual);
    
    ganancia=dinero*tasadeinterésmensual/100;
    dinero=dinero+ganancia;
    printf("Dinero a recibir: %lf", dinero);
    
return 0;    
}
