#include <stdio.h>
int main()
{
    double preciodeticketidayvuelta;
    double distanciadeida;
    int díasdeestancia;
    double descuento;
    
    printf("Ingrese la distancia de ida en kilómetros: \n");
    scanf("%lf", &distanciadeida);
    printf("Ingrese el tiempo de estancia en días: \n");
    scanf("%d", &díasdeestancia);
    
    preciodeticketidayvuelta=0.46*distanciadeida;
    if(díasdeestancia>7)
    {
        if(distanciadeida>400)
        {
            descuento=preciodeticketidayvuelta*0.3;
            preciodeticketidayvuelta=preciodeticketidayvuelta-descuento;
        }
    }
    printf("El precio del ticket de ida y vuelta es: %lf", preciodeticketidayvuelta);
return 0;    
}
