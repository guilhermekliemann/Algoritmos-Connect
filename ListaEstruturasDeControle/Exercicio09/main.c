#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, fat;

    printf("\nDigite um número para calcular o fatorial: ");
    scanf("%d", &n);

    for(fat=1; n > 1; n=n-1){
        fat = fat * n;
    }

    printf("%d\n", fat);

    return 0;
}
