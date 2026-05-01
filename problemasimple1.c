#include<stdio.h>
int main()
{
    double a;
    double b;
    double suma;
    double resta;
    double multiplicación;
  
    printf("Ingresa tu primer valor\n");
    scanf("%lf", &a);
    printf("\n");
    
    printf("Ingresa tu segundo valor\n");
    scanf("%lf", &b);
    printf("\n");
    
    suma = a+b;
    resta = a-b;
    multiplicación = a*b;
    
    printf("La suma de tus números es: %lf \n", suma);
    printf("La resta de tus números es: %lf \n", resta);
    printf("La multiplicación de tus números es: %lf \n", multiplicación);
return 0;
}
