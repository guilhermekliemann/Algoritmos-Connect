#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade, idadeDias;

    printf("\nQual o seu nome: ");
    scanf("%s", &nome);

    printf("\nQual a sua idade: ");
    scanf("%d", &idade);

    idadeDias = idade * 365;

    printf("\n%s, VOCÊ JÁ VIVEU %d DIAS!\n", nome, idadeDias);

    return 0;
}
