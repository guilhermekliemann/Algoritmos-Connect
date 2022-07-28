#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float notas[3], media;

    for(int i=0; i<3; i++) {
        printf("\nDigite a %dº nota do aluno: ", i+1);
        scanf("%f", &notas[i]);
    }

    media = (notas[0] + notas[1] + notas[2]) / 3;
    printf("\nA média final do aluno foi de: %.1f \n", media);

    return 0;
}
