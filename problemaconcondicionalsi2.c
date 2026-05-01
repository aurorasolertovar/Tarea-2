#include <stdio.h>
int main()
{
    double sueldodeltrabajador;
    double sueldofinaldeltrabajador;
    double aumentodesueldo;
    printf("Sueldo del trabajador/a \n");
    scanf("%lf", &sueldodeltrabajador);
    
    if(sueldodeltrabajador<1000)
    {
        aumentodesueldo=sueldodeltrabajador*0.15;
        sueldofinaldeltrabajador=sueldodeltrabajador+aumentodesueldo;
    }
    if(sueldodeltrabajador>=1000)
    {
        aumentodesueldo=sueldodeltrabajador*0.12;
        sueldofinaldeltrabajador=sueldodeltrabajador+aumentodesueldo;
    }
    printf("Sueldo final del trabajador %lf \n", sueldofinaldeltrabajador);
    
return 0;
}
