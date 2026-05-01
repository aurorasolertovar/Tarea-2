#include <stdio.h>
int main()
{
    double radio;
    double pi;
    double circunferencia;
    double área;
    pi = 3.141593;
    
    printf("Ingresa el radio de un círculo: \n");
    scanf ("%lf", &radio);
    
    circunferencia = pi*radio*2;
    área = pi*radio*radio;
    
    printf("La circunferencia es: %lf \n", circunferencia  );
    printf("y el área es: %lf", área);
}
