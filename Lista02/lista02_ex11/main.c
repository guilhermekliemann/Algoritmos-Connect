#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int nivel, qtdAulas;
    float salario;

    printf("\nDigite o nível do professor: ");
    scanf("%d", &nivel);

    if(nivel == 1) {
        printf("\nDigite a quantidade de horas/aula que o professor tem na semana: ");
        scanf("%d", &qtdAulas);
        salario = 12 * qtdAulas * 4.5;
        printf("\nProfessor de nível %d receberá um salário de R$ %.2f por semana!\n", nivel, salario);
    } else if(nivel == 2) {
        printf("\nDigite a quantidade de horas/aula que o professor tem na semana: ");
        scanf("%d", &qtdAulas);
        salario = 17 * qtdAulas * 4.5;
        printf("\nProfessor de nível %d receberá um salário de R$ %.2f por semana!\n", nivel, salario);
    } else if(nivel == 3) {
        printf("\nDigite a quantidade de horas/aula que o professor tem na semana: ");
        scanf("%d", &qtdAulas);
        salario = 25 * qtdAulas * 4.5;
        printf("\nProfessor de nivel %d receberá um salário de R$ %.2f por semana!\n", nivel, salario);
    } else {
        printf("\nNível de professor inexistente!\n");
    }

    return 0;
}
