#include <stdio.h>

int main() {
    int son, i;

    printf("Sonni kiriting: ");
    scanf("%d", &son);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", son, i, son * i);
    }

    return 0;
}
