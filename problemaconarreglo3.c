#include <stdio.h>
int main()
{
    int n;
    int positivos=0;
    int nulos=0;
    int negativos=0;
    int número;
    int cont;
    
    printf("Ingresa la cantidad de números que quieres que tenga tu arreglo: \n");
    scanf("%d", &n);
    int vector [n];
    cont=0;
    while(cont<n)
    {
        printf("Valor %d: \n", cont+1);
        scanf("%d", &número);
        vector[cont]=número;
        cont++;
        if(número>0)
        {
            positivos++;
        }
        if(número==0)
        {
            nulos++;
        }
        if(número<0)
        {
            negativos++;
        }
    }
    printf("Tu arreglo tiene %d números positivos,", positivos);
    printf(" %d números nulos, y", nulos);
    printf(" %d números negativos", negativos);

return 0;
}
