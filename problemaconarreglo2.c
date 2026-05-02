#include <stdio.h>
int main()
{
    int número;
    int valor=1;
    int contador;
    int vecesqueseencuentra=0;
    int n=0;
    int vector[20000];
    printf("Ingresa varios valores separados por enter; si quieres que sea el último, escribe cero\n");
    contador=0;
    while(valor!=0)
    {
        scanf("%d", &valor);
        vector[contador]=valor;
        n++;
        contador++;
    }
    
    printf("Ingresa un número entero\n");
    scanf("%d", &número);
    
    contador=0;
    while(contador<n)
    {
        if(número==vector[contador])
        {
            vecesqueseencuentra++;
        }
        contador++;
    }
    printf("Este número se encuentra %d veces en el arreglo", vecesqueseencuentra);
    
return 0;
}
