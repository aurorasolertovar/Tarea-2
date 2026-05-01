#include <stdio.h>
int main ()
{
    double montodelacompra;
    double preciototal;
    double descuento;
    printf("Monto de la compra: \n");
    scanf("%lf", &montodelacompra);
    
    preciototal=montodelacompra;
    
    if (montodelacompra>2500)
    {
        descuento=(montodelacompra/100)*8;
        preciototal=montodelacompra-descuento;
    }
    
    printf("Cantidad a pagar: %lf \n", preciototal);
return 0;
}
