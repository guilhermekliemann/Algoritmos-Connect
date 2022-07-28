#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("\nDigite o valor do lado (a) do tri�ngulo: ");
    scanf("%d", &a);

    printf("\nDigite o valor do lado (b) do tri�ngulo: ");
    scanf("%d", &b);

    printf("\nDigite o valor do lado (c) do tri�ngulo: ");
    scanf("%d", &c);

    if((a+b<c) || (b+c<a) || (c+a<b)) {
        printf("\nN�o � um tri�ngulo!\n");
    } else if(a == b && b == c && c == a) {
        printf("\nEsse tri�ngulo � Equil�tero!\n");
    } else if((a == b && a != c) || (b == c && b != a) || (c == a && c != b)) {
        printf("\nEsse tri�ngulo � Is�sceles!\n");
    } else if(a != b && b != c && c != a) {
        printf("\nEsse tri�ngulo � Escaleno!\n");
    }

    return 0;
}
