#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tipoMorse(int morse);
void codifique(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int morse;
    printf("Digite um número: ");
    scanf("%d", &morse);
    codifique(morse);

    return 0;
}

void tipoMorse(int morse) {
    if(morse == 1) {
        printf("\n(1) . _ _ _ _\n");
    } else if(morse == 2) {
        printf("\n(2) . . _ _ _\n");
    } else if(morse == 3) {
        printf("\n(3) . . . _ _\n");
    } else if(morse == 4) {
        printf("\n(4) . . . . _\n");
    } else if(morse == 5) {
        printf("\n(5) . . . . .\n");
    } else if(morse == 6) {
        printf("\n(6) _ . . . .\n");
    } else if(morse == 7) {
        printf("\n(7) _ _ . . .\n");
    } else if(morse == 8) {
        printf("\n(8) _ _ _ . .\n");
    } else if(morse == 9) {
        printf("\n(9) _ _ _ _ .\n");
    } else if(morse == 0) {
        printf("\n(0) _ _ _ _ _\n");
    } else {
        printf("\nNúmero inválido!\n");
    }
}

void codifique(int n) {
    int morse;
    // morse de 50
    if(n < 10) {
        tipoMorse(n);
    } else {
        morse = n % 10; // resto da divisao sera 0
        codifique(n / 10); // 50 / 10 = 5 -> morse de 5
        tipoMorse(morse); // resultado do resto da divisao da variavel morse -> 0
    }
}
