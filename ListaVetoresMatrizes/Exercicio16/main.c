#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void ordemDireta(int vet[]);
void ordemInversa(int vet[]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[5];
    int cod = -1;

    for(int i=0; i<5; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    do {
        printf("\nEscolha uma das opções abaixo:\n0- Encerra programa\n1- Vetor na ordem direta\n2- Vetor na ordem inversa\n\nDigite o código: ");
        scanf("%d", &cod);

        switch(cod) {
            case 0:
                printf("\nPrograma encerrado!\n");
                break;
            case 1:
                ordemDireta(vet);
                break;
            case 2:
                ordemInversa(vet);
                break;
            default:
                printf("\nCódigo inválido!\n");
                break;
        }
        printf("\n------------------------------------\n");
    } while(cod != 0);

    return 0;
}

void ordemDireta(int vet[]) {
    printf("\n");
    for(int i=0; i<5; i++) {
        printf("vetor[%d] = %d\n", i, vet[i]);
    }
}

void ordemInversa(int vet[]) {
    printf("\n");
    for(int i=0; i<5; i++) {
        printf("vetor[%d] = %d\n", i, vet[4-i]);
    }
}
