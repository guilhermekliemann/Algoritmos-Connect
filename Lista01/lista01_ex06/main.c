#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoKg, pesoPrato, valorTotal;
    precoKg = 12.00;

    printf("\nDigite o peso do prato do cliente: ");
    scanf("%f", &pesoPrato);

    valorTotal = precoKg * pesoPrato;

    printf("\nValor total do prato do cliente foi de: R$ %f \n", valorTotal);

    return 0;
}
