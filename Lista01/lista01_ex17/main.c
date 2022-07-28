#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int celcius, fahrenheit;

    printf("\nQual a temperatura em Celsius? ");
    scanf("%d", &celcius);

    fahrenheit = ((celcius * 9) / 5) + 32;

    printf("\nTemperatura convertida para Fahrenheit: %d\n", fahrenheit);

    return 0;
}
