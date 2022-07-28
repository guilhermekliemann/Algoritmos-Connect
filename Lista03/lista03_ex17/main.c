#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float precoKg = 23.59, pesoPratoCliente = -1, bebidaCliente = -1, valorTotal;

    while(pesoPratoCliente != 0 && bebidaCliente != 0) {
        printf("\nQual o peso do prato do cliente?\n");
        scanf("%f", &pesoPratoCliente);

        printf("\nQual o valor gasto em bebidas pelo cliente?\n");
        scanf("%f", &bebidaCliente);

        valorTotal = bebidaCliente + (pesoPratoCliente * precoKg);

        if(pesoPratoCliente == 0 && bebidaCliente == 0) {
            printf("\nPROGRAMA FINALIZADO!\n");
        } else {
            printf("\nVALOR TOTAL: %.2f\n\n", valorTotal);
        }
    }

    return 0;
}
