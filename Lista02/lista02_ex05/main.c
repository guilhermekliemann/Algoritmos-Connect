#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        num = num + 5;
        printf("\nNúmero PAR(somar + 5): %d\n", num);
    } else {
        num = num + 8;
        printf("\nNúmero ÍMPAR(somar + 8): %d\n", num);
    }

    return 0;
}
