#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, fat;

    printf("\nDigite um n�mero para apresentar o fatorial: ");
    scanf("%d", &n);

    for(fat=1; n>1; n=n-1) {
        fat = fat * n;
    }

    printf("\nFatorial: %d\n", fat);

    return 0;
}
