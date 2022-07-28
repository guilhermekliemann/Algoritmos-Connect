#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeSemanas, idadeDias;

    printf("\nDigite o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("\nDigite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;
    idadeMeses = idadeAnos * 12;
    idadeSemanas = idadeMeses * 4;
    idadeDias = idadeMeses * 7;

    printf("\nIdade em anos: %d\nIdade em meses: %d\nIdade em semanas: %d\nIdade em dias: %d\n", idadeAnos, idadeMeses, idadeSemanas, idadeDias);

    return 0;
}
