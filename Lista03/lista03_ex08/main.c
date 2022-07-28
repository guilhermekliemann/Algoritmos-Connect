#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[50], nomeMenor[50];
    int idade, idadeMenor = 500;

    for(int i=1; i<=3; i++) {
        printf("\nDigite o nome %d: ", i);
        scanf("%s", &nome);

        printf("\nDigite a idade %d: ", i);
        scanf("%d", &idade);

        if(idade < idadeMenor) {
            idadeMenor = idade;
            strcpy(nomeMenor, nome);
        }
    }

    printf("\n%s é a pessoa mais nova, com %d anos!\n", nomeMenor, idadeMenor);

    return 0;
}
