#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    /*
    int a = 10;
    int b = 15;
    a = a - b;
    b = a + b;
    a = a + b + b;
    */

    setlocale(LC_ALL, "Portuguese");

    float lata350, garrafa600, garrafa2l, totalLitros;

    printf("\nQuantas latas de 350ml você comprou? ");
    scanf("%f", &lata350);

    printf("\nQuantas garrafas de 600ml você comprou? ");
    scanf("%f", &garrafa600);

    printf("\nQuantas garrafas de 2l você comprou? ");
    scanf("%f", &garrafa2l);

    lata350 = lata350 * 350;
    garrafa600 = garrafa600 * 600;
    garrafa2l = garrafa2l * 2000;

    totalLitros = (lata350 + garrafa600 + garrafa2l) / 1000;

    printf("\nQuantidade total de litros de Meia-Cola comprados: %.2f l\n", totalLitros);

    return 0;
}
