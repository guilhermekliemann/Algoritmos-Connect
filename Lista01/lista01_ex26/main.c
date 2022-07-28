#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n[3], total;

    for(int i=0; i<3; i++) {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%d", &n[i]);
    }

    total = n[0] * n[1] * n[2];

    printf("\nResultado da multiplicação dos três números é de: %d\n", total);

    return 0;
}
