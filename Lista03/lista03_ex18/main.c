#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtdAlunos;
    float n1, n2, media;

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    for(int i=1; i<=qtdAlunos; i++) {
        printf("\nDigite a primeira nota do aluno [%d](notas entre 0-10): ", i);
        scanf("%f", &n1);

        printf("\nDigite a segunda nota: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;

        if(media > 6.0) {
            printf("\nAluno aprovado com média de %.1f!\n", media);
        } else {
            printf("\nAluno reprovado com média de %.1f!\n", media);
        }
    }

    return 0;
}
