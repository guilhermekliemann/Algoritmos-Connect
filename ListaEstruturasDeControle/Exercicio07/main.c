#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    char c = '*';

    printf("\nDigite um n�mero �mpar: ");
    scanf("%d", &n);

    printf("\n");

    if(n % 2 == 0) {
        printf("\nN�mero par inv�lido!\n");
    } else {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(i == j) {
                    printf("%c", c);
                } else if((i + j) == (n + 1)) {
                    printf("%c", c);
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
