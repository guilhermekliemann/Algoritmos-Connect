#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2

struct Pessoa {
    char nome[80];
    int rg;
    int cpf;
};

void cadastraPessoa(struct Pessoa vet[], int tam);
void ordenaRG(struct Pessoa vet[], int tam);
int buscaBinariaRG(int rg, struct Pessoa vet[], int tam);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Pessoa vet[TAM];

    cadastraPessoa(vet, TAM);

    ordenaRG(vet, TAM);

    int rg;
    printf("\nDigite o RG a ser buscado: ");
    scanf("%d", &rg);

    printf("\nÍndice do cadastro: [%d]\n", buscaBinariaRG(rg, vet, TAM));

    return 0;
}

void cadastraPessoa(struct Pessoa vet[], int tam) {
    printf("\nCADASTRO PESSOA\n");
    for(int i=0; i<tam; i++) {
        fflush(stdin);
        printf("\nPessoa[%d]\n", i+1);
        printf("Nome: ");
        gets(vet[i].nome);
        printf("RG: ");
        scanf("%d", &vet[i].rg);
        printf("CPF: ");
        scanf("%d", &vet[i].cpf);
    }
}

void ordenaRG(struct Pessoa vet[], int tam) {
    struct Pessoa aux;

    for(int i=1; i<tam; i++) {
        for(int j=0; j<tam-1; j++) {
            if(vet[j].rg > vet[j+1].rg) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

int buscaBinariaRG(int rg, struct Pessoa vet[], int tam) {
    int esquerda = -1, direita = tam, meio;

    while(esquerda < direita - 1) {
        meio = (esquerda + direita) / 2;
        if(vet[meio].rg < rg) {
            esquerda = meio;
        } else {
            direita = meio;
        }
    }

    if(direita < tam) {
        return direita;
    } else {
        return -1;
    }

}

