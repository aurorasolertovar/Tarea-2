#include <stdio.h>
int main ()
{
    int suma=0;
    int número=10;
    
    while(número<51)
    {
        suma=suma+número;
        número=número+2;
    }
    
    printf("La suma de los números pares comprendidos entre el 10 y el 50 es : %d", suma);
    
return 0; 
}
