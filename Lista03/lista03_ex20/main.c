#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtdCachorro = 0, qtdGato = 0, totalAnimais = 0;
    char tipoAnimal;

    printf("\nDigite a quantidade de animais que tem na loja: ");
    scanf("%d", &totalAnimais);

    for(int i=1; i<=totalAnimais; i++) {
        fflush(stdin);
        printf("\nDigite C para 'Cachorro' e G para 'Gato': \n");
        scanf("%c", &tipoAnimal);

        if(tipoAnimal == 'C' || tipoAnimal == 'c') {
            qtdCachorro++;
        } else if(tipoAnimal == 'G' || tipoAnimal == 'g') {
            qtdGato++;
        } else {
            printf("\nAnimal inválido, digite novamente!\n");
            i--;
        }
    }

    printf("\nQuantidade de cachorros a venda: %d\nQuantidade de gatos a venda: %d\n", qtdCachorro, qtdGato);

    return 0;
}
