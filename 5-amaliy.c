#include <stdio.h>

int main() {
    int son, i, faktorial = 1;

    printf("Musbat butun son kiriting: ");
    scanf("%d", &son);

    for (i = 1; i <= son; i++) {
        faktorial = faktorial * i;
    }

    printf("%d! = %d", son, faktorial);

    return 0;
}
