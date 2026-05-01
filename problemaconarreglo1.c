#include <stdio.h>

    int número;
    int n;
    int cont;
    int suma;
    
int main()
{
    cont=0;
    printf("Ingresa la cantidad de números que quieres que tenga tu arreglo: \n");
    scanf("%d",&n); 
    int vector[n];
    
    while(cont<n)
    {
        printf("Ingresa el valor %d \n", cont+1);
        scanf("%d", &número);
        vector[cont+1]=número;
        cont++;
    }
    
    cont=0;
    suma=0;
    while(cont<n)
    {
        suma=suma+vector[cont+1];
        cont++;
    }
    printf("La suma de tus valores es : %d", suma);
return 0;
}
