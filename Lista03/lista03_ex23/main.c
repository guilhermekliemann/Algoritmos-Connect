#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int canal, qtdPessoasNaCasa, audiencia, casas, i = 0, canal3 = 0, canal5 = 0, canal8 = 0, canal11 = 0, canal13 = 0;

    printf("\nQuantas casas participaram da pesquisa?\n");
    scanf("%d", &casas);

    while(i < casas) {
        fflush(stdin);
        printf("\n\nQual canal a familia que mora na casa %d assiste com mais frequência?\n", i+1);
        scanf("%d", &canal);

        printf("Quantas pessoas estavam assistindo na casa?\n");
        scanf("%d", &qtdPessoasNaCasa);

        if(canal == 3) {
            canal3 += qtdPessoasNaCasa;
            i++;
        } else if(canal == 5) {
            canal5 += qtdPessoasNaCasa;
            i++;
        } else if(canal == 8) {
            canal8 += qtdPessoasNaCasa;
            i++;
        } else if(canal == 11) {
            canal11 += qtdPessoasNaCasa;
            i++;
        } else if(canal == 13) {
            canal13 += qtdPessoasNaCasa;
            i++;
        } else {
            printf("\nCanal não listado! Digite novamente.\n");
        }
    }

    printf("\nAudiência CANAL 3: %d\nAudiência CANAL 5: %d\nAudiência CANAL 8: %d\nAudiência CANAL 11: %d\nAudiência CANAL 13: %d\n", canal3, canal5, canal8, canal11, canal13);

    return 0;
}
