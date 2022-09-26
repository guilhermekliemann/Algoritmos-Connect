#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct Data {
    int dia;
    int mes;
    int ano;
};

void cadastraDatas(struct Data vet[], int tam);
void ordenaData(struct Data vet[], int tam);
void imprimeDatas(struct Data vet[], int tam);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Data vet[TAM];

    cadastraDatas(vet, TAM);

    ordenaData(vet, TAM);

    imprimeDatas(vet, TAM);

    return 0;
}

void cadastraDatas(struct Data vet[], int tam) {
    printf("\nCADASTRA DATAS:\n");
    for(int i=0; i<tam; i++) {
        printf("Digite a %dº data (DIA/MES/ANO): ", i+1);
        scanf("%d/%d/%d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
    }
}

void ordenaData(struct Data vet[], int tam) {
    struct Data aux;

    for(int i=1; i<tam; i++) {
        for(int j=0; j<tam-1; j++) {
            if(vet[j].ano > vet[j+1].ano) {
                aux.ano = vet[j].ano;
                vet[j].ano = vet[j+1].ano;
                vet[j+1].ano = aux.ano;
            }
            if(vet[j].mes > vet[j+1].mes) {
                aux.mes = vet[j].mes;
                vet[j].mes = vet[j+1].mes;
                vet[j+1].mes = aux.mes;
            }
            if(vet[j].dia > vet[j+1].dia) {
                aux.dia = vet[j].dia;
                vet[j].dia = vet[j+1].dia;
                vet[j+1].dia = aux.dia;
            }
        }
    }

    printf("\n--------------\n");
    printf("\nDATAS EM ORDEM CRONOLÓGICA\n");
}

void imprimeDatas(struct Data vet[], int tam) {
    for(int i=0; i<tam; i++) {
        printf("%02d/%02d/%4d\n", vet[i].dia, vet[i].mes, vet[i].ano);
    }
}
