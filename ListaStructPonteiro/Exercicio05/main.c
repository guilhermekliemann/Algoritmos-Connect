#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 10, y = 20;
    int *p1;
    int *p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;

    printf("(A) x: [%d]\n", x);

    printf("(B) y: [%d]\n", y);

    printf("(C) &x: [%d]\n", &x);

    printf("(D) &y: [%d]\n", &y);

    printf("(E) p1: [%d]\n", p1);

    printf("(F) p2: [%d]\n", p2);

    printf("(G) *p1 + *p2: [%d]\n", ((*p1) + (*p2)));

    printf("(H) *(&x): [%d]\n", *(&x));

    printf("(I) &(*p2): [%d]\n", &(*p2));

    printf("(J) *p1: [%d]\n", *p1);

    printf("(K) *p2: [%d]\n", *p2);

    return 0;
}
