#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20;

    for(int i=0; i<tam; i++) {
        printf("\nEst� � a mensagem %d", i+1);
    }

    return 0;
}
