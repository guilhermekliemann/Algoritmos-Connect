#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\nDigite um n�mero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        num = num + 5;
        printf("\nN�mero PAR(somar + 5): %d\n", num);
    } else {
        num = num + 8;
        printf("\nN�mero �MPAR(somar + 8): %d\n", num);
    }

    return 0;
}
