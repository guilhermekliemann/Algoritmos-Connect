#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int totalLitros;
    float litrosAgua, litrosSucoMaracuja;

    printf("\nQuantos litros de refresco você deseja fazer? ");
    scanf("%d", &totalLitros);

    litrosAgua = totalLitros * 0.8;
    litrosSucoMaracuja = totalLitros * 0.2;

    printf("\nSerão necessários %.2f litros de água e %.2f litros de suco de maracujá!\n", litrosAgua, litrosSucoMaracuja);

    return 0;
}
