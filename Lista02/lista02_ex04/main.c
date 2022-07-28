#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("\nNúmero positivo(multiplica por 2): %d\n", num * 2);
    } else {
        printf("\nNúmero negativo(multiplica por 3): %d\n", num * 3);
    }

    return 0;
}
