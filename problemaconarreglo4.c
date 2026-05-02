#include <stdio.h>
int main()
{
    int vector[100];
    int número=0;
    int cont=0;
    while(cont<100)
    {
        vector[cont]=número;
        número=número+2;
        cont++;
    }
    cont=0;
    while(cont<100)
    {
        printf(" %d ", vector[cont] );
        cont++;
    }
return 0;    
}
