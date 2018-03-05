#include <stdio.h>

int main()
{
    float sb, sl, inss;

    printf("digite o valor do SB  ");

    scanf("%f", &sb);

    if(sb <= 420)
    {
        inss = ( sb * 8 ) / 100;

        sl = sb - inss;

        printf("Valor do inss = %f , valor do salario liquido = %f", inss, sl);
    }

    if((sb > 420) && (sb < 1350))
    {
        inss = ( sb * 9 ) / 100;

        sl = sb - inss;

        printf("Valor do inss = %f , valor do salario liquido = %f", inss, sl);
    }
    if(sb > 1350)
    {
        inss = ( sb * 10 ) / 100;

        sl = sb - inss;

        printf("Valor do inss = %f , valor do salario liquido = %f", inss, sl);
    }




    return 0;
}
