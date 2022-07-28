#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float alturaPessoa, sombraPessoa, alturaPredio, sombraPredio;

    printf("\nQual é a sua altura? ");
    scanf("%f", &alturaPessoa);

    printf("\nQual o tamanho da sua sombra? ");
    scanf("%f", &sombraPessoa);

    printf("\nQual é o tamanho da sombra do prédio? ");
    scanf("%f", &sombraPredio);

    alturaPredio = alturaPessoa * (sombraPredio / sombraPessoa);

    printf("\nA altura do prédio é de: %.2f metros!\n", alturaPredio);

    return 0;
}
