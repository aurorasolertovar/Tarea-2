#include <stdio.h>
int main()
{
    int número;
    int positivos=0;
    int nulos=0;
    int negativos=0;
    int cont=0;
    printf ("Ingrese 10 números enteros separados por un enter: \n");
    
    while(cont<10)
    {
        
        scanf("%d", &número);
        
        if(número<0) 
        { 
            negativos++;
        }
        
        if(número>0) 
        {
            positivos++;
        }
            
        if(número==0)
        {
            nulos++;
        }
        cont=cont+1;
    }
    
    
    if(positivos==1)
    {
        printf("Ingresaste un número positivo\n");
    }
    else
    {
        printf("Ingresaste %d ", positivos);
        printf(" números positivos \n");
    }
    
    if(nulos==1)
    {
        printf("Ingresaste un número nulo\n");
    }
    else
    {
        printf("Ingresaste %d", nulos);
        printf(" números nulos \n");
    }
    
    
     if(negativos==1)
    {
        printf("Ingresaste un número negativo\n");
    }
    else
    {
        printf("Ingresaste %d", negativos);
        printf(" números negativos\n");
    }
return 0;
}
