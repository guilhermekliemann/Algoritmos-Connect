#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("\nDigite o valor do lado (a) do triângulo: ");
    scanf("%d", &a);

    printf("\nDigite o valor do lado (b) do triângulo: ");
    scanf("%d", &b);

    printf("\nDigite o valor do lado (c) do triângulo: ");
    scanf("%d", &c);

    if((a+b<c) || (b+c<a) || (c+a<b)) {
        printf("\nNão é um triângulo!\n");
    } else if(a == b && b == c && c == a) {
        printf("\nEsse triângulo é Equilátero!\n");
    } else if((a == b && a != c) || (b == c && b != a) || (c == a && c != b)) {
        printf("\nEsse triângulo é Isósceles!\n");
    } else if(a != b && b != c && c != a) {
        printf("\nEsse triângulo é Escaleno!\n");
    }

    return 0;
}
