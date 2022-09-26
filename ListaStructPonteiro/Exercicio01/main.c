#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2

struct Produto {
    char nome[80];
    double preco;
    int quantidade;
};

void cadastraProduto(struct Produto p[], int tam);
void ordenaPreco(struct Produto vet[], int tam);
void ordenaQuant(struct Produto vet[], int tam);
void imprimeProdutos(struct Produto vet[], int tam);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Produto vet[2];

    cadastraProduto(vet, TAM);

    ordenaPreco(vet, TAM);

    ordenaQuant(vet, TAM);

    return 0;
}

void cadastraProduto(struct Produto p[], int tam) {
    printf("\n------------------------------------\n");
    printf("\nCADASTRO DOS PRODUTOS:\n");

    for(int i=0; i<tam; i++) {
        fflush(stdin);
        printf("\nPRODUTO[%d]", i+1);
        printf("\nDigite o nome do produto: ");
        gets(p[i].nome);
        printf("Digite o preço do produto: ");
        scanf("%lf", &p[i].preco);
        printf("Digite a quantidade em estoque: ");
        scanf("%d", &p[i].quantidade);
    }
}

void ordenaPreco(struct Produto vet[], int tam) {
    struct Produto aux;

    for(int i=1; i<tam; i++) {
        for(int j=0; j<tam-1; j++) {
            if(vet[j].preco > vet[j+1].preco) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }

    printf("\n------------------------------------\n");
    printf("\nPRODUTOS ORDENADOS POR PREÇO:\n");
    imprimeProdutos(vet, tam);
}

void ordenaQuant(struct Produto vet[], int tam) {
    struct Produto aux;

    for(int i=1; i<tam; i++) {
        for(int j=0; j<tam-1; j++) {
            if(vet[j].quantidade > vet[j+1].quantidade) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }

    printf("\n------------------------------------\n");
    printf("\nPRODUTOS ORDENADOS POR QUANTIDADE:\n");
    imprimeProdutos(vet, tam);
}

void imprimeProdutos(struct Produto vet[], int tam) {
    for(int i=0; i<TAM; i++) {
        printf("\nPRODUTO[%d]", i+1);
        printf("\nNome do produto: %s", vet[i].nome);
        printf("\nValor: %.2lf", vet[i].preco);
        printf("\nQuantidade: %d\n", vet[i].quantidade);
    }
}
