#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int totalLitros;
    float litrosAgua, litrosSucoMaracuja;

    printf("\nQuantos litros de refresco voc� deseja fazer? ");
    scanf("%d", &totalLitros);

    litrosAgua = totalLitros * 0.8;
    litrosSucoMaracuja = totalLitros * 0.2;

    printf("\nSer�o necess�rios %.2f litros de �gua e %.2f litros de suco de maracuj�!\n", litrosAgua, litrosSucoMaracuja);

    return 0;
}
