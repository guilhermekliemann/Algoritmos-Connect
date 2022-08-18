#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int N, M, R = 0, pot = 1;

    scanf("%d %d",&N,&M);

    for(int resto = N; resto != 0; resto=resto/M){
        R = R + ((resto%M)*pot);
        pot = pot*10;
        resto = resto/10;
    }

    printf("%d",R);

    return 0;
}
