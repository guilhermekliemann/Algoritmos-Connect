#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];

    printf("\nDigite o seu nome: ");
    scanf("%s", &nome);

    for(int i=0; i<10; i++) {
        printf("\n%s", nome);
    }

    return 0;
}
