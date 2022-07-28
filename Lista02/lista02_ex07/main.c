#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float altura, peso;

    printf("\nQual o seu sexo(m ou f)?\n");
    scanf("%c", &sexo);

    if(sexo == 'm' || sexo == 'M') {
        printf("\nQual a sua altura?\n");
        scanf("%f", &altura);
        peso = (72.7 * altura) - 58;
        printf("\nSeu peso ideal é: %.2f\n", peso);
    } else if(sexo == 'f' || sexo == 'F') {
        printf("\nQual a sua altura?\n");
        scanf("%f", &altura);
        peso = (62.1 * altura) - 44.7;
        printf("\nSeu peso ideal é: %.2f\n", peso);
    } else {
        printf("\nSexo incorreto!\n");
    }

    return 0;
}
