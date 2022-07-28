#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n[2];
    float total;

    for(int i=0; i<2; i++) {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%d", &n[i]);
    }

    total = n[0] / n[1];

    printf("\nResultado da divisão dos dois números: %.2f\n", total);

    return 0;
}
