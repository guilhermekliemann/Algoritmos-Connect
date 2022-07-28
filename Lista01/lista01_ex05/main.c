#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoLitro, valorPagamento, qtdLitros;

    printf("\nDigite o preço por litro da gasolina: ");
    scanf("%f", &precoLitro);
    printf("\nDigite o valor para efetuar o pagamento: ");
    scanf("%f", &valorPagamento);

    qtdLitros = valorPagamento / precoLitro;
    printf("\nForam colocados %f litros de gasolina no tanque!\n", qtdLitros);

    return 0;
}
