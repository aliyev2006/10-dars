#include <stdio.h>

int main() {
    int i, son;

    for (i = 1; i <= 10; i++) {
        printf("%d-sonni kiriting: ", i);
        scanf("%d", &son);

        if (son < 0) {
            break;
        }

        printf("Kiritilgan son: %d\n", son);
    }

    return 0;
}
