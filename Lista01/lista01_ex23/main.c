#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float alturaPessoa, sombraPessoa, alturaPredio, sombraPredio;

    printf("\nQual � a sua altura? ");
    scanf("%f", &alturaPessoa);

    printf("\nQual o tamanho da sua sombra? ");
    scanf("%f", &sombraPessoa);

    printf("\nQual � o tamanho da sombra do pr�dio? ");
    scanf("%f", &sombraPredio);

    alturaPredio = alturaPessoa * (sombraPredio / sombraPessoa);

    printf("\nA altura do pr�dio � de: %.2f metros!\n", alturaPredio);

    return 0;
}
