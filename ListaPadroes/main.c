#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\nLETRA A\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=8; j++) {
            if(j == i || i > j) {
                printf("# ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA B\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=8; j++) {
            if(i + j <= 9) {
                printf("# ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA C\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=8; j++) {
            if(j == i || i < j) {
                printf(" #");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

     printf("\nLETRA D\n");
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=8; j++) {
            if(i + j >= 9) {
                printf(" #");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA E\n");
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=7; j++) {
            if(i == 1 || j == 1 || i == 7 || j == 7) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA F\n");
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=7; j++) {
            if(i == 1 || i == 7 || i == j) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA G\n");
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=7; j++) {
            if(i == 1 || i == 7 || i + j == 8) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA H\n");
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=7; j++) {
            if(i == 1 || i == 7 || i == j || i + j == 8) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nLETRA I\n");
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=7; j++) {
            if(i == 1 || j == 1 || i == 7 || j == 7 || i == j || i + j == 8) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
