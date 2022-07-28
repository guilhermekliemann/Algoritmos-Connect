#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char resposta = 'n';

    do {
        printf("\nOlá, tudo bem? s(sim)-n(não)\n");
        scanf("%c", &resposta);
        fflush(stdin);
    } while(resposta != 's');

    printf("\nPrograma finalizado!\n");

    return 0;
}
