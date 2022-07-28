#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int id;
    float n1, n2, n3, media;

    printf("\nInforme o número de identificação do aluno: ");
    scanf("%d", &id);

    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);

    printf("\nInforme a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if(media >= 6.0) {
        printf("\nAluno com o id [%d] foi aprovado com uma média de [%.1f]!\n", id, media);
    } else if(media >= 3.0 && media < 6.0) {
        printf("\nAluno com o id [%d] precisará de recuperação, e sua média foi de [%.1f]!\n", id, media);
    } else {
        printf("\nAluno com o id [%d] foi reprovado direto, e sua média foi de [%.1f]!\n", id, media);
    }

    return 0;
}
