#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int morse;

    for(int i=0; i<10; i++) {
        printf("\nDigite um número para exibir o código morse: ");
        scanf("%d", &morse);

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
            printf("\n(0) . . . . .\n");
        } else {
            printf("\nNúmero inválido!\n");
        }
    }

    return 0;
}
