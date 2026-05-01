
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int residuo;
    printf("Ingresa tu primer número\n");
    scanf("%d", &num1);
    printf("Ingresa tu segundo número\n");
    scanf("%d", &num2);
    if (num2%num1==0)
    {
        printf("Resultado: %d", num1);
        printf(" sí es divisor de %d", num2);
    }
    else
    {
        printf("Resultado: %d", num1);
        printf(" no es divisor de %d", num2);
    }
return 0;
}
