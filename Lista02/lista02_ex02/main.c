#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("\nDigite um n�mero para verificar se ele � PAR ou �MPAR: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("\nO n�mero %d � um n�mero PAR!\n", n);
    } else {
        printf("\nO n�mero %d � um n�mero �MPAR!\n", n);
    }

    return 0;
}
