#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota[2], media;

    for(int i=0; i<2; i++) {
        printf("\nDigite a %dº nota: ", i+1);
        scanf("%f", &nota[i]);
    }

    media = ((nota[0] * 2) + (nota[1] * 3)) / 5.0;

    printf("\nMédia final: %.2f\n", media);

    return 0;
}
