#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int t1 = 1, t2 = 2, t3 = 4, t4 = 8, t5 = 16, t6 = 32, numero = 0;
    char opcao;

    printf("\nPENSE EM UM NÚMERO ENTRE 1 À 63\n");
    scanf("%c", &opcao);

    printf("\nTABELA 1:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            printf("%d ", t1);
            t1 += 2;
        }
        printf("\n");
    }

    fflush(stdin);

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 1;
    }

    fflush(stdin);

    printf("\nTABELA 2:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            if(j == 2 || j == 4) {
                printf("%d ", t2);
                t2 += 3;
            } else {
                printf("%d ", t2);
                t2 += 1;
            }
        }
        printf("\n");
    }

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 2;
    }

    fflush(stdin);

    printf("\nTABELA 3:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            if(j == 4) {
                printf("%d ", t3);
                t3 += 5;
            } else {
                printf("%d ", t3);
                t3 += 1;
            }
        }
        printf("\n");
    }

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 4;
    }

    fflush(stdin);

    printf("\nTABELA 4:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            if(j == 4 && (i == 2 || i == 4 || i == 6)) {
                printf("%d ", t4);
                t4 += 9;
            } else {
                printf("%d ", t4);
                t4 += 1;
            }
        }
        printf("\n");
    }

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 8;
    }

    fflush(stdin);

    printf("\nTABELA 5:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            if(j == 4 && i == 4) {
                printf("%d ", t5);
                t5 += 17;
            } else {
                printf("%d ", t5);
                t5 += 1;
            }
        }
        printf("\n");
    }

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 16;
    }

    fflush(stdin);

    printf("\nTABELA 6:\n\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=4; j++) {
            printf("%d ", t6);
            t6++;
        }
        printf("\n");
    }

    printf("\nSeu número está na tabela acima? (s) ou (n)\n");
    scanf("%c", &opcao);
    if(opcao == 's') {
        numero += 32;
    }

    printf("\nO NÚMERO QUE VOCÊ PENSOU É %d!!!\n", numero);

    return 0;
}
