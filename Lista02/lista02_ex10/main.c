#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, diff;

    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        diff = n1 - n2;
        printf("\nA diferen�a entre o primeiro n�mero e o segundo n�mero � de %d!\n", diff);
    } else if(n1 < n2) {
        diff = n2 - n1;
        printf("\nA diferen�a entre o segundo n�mero e o primeiro n�mero � de %d!\n", diff);
    } else {
        printf("\nN�meros iguais tem diferen�a de 0!\n");
    }

    return 0;
}
