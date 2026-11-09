#include <stdio.h>

int main() {
    int i, yigindi = 0;

    for (i = 1; i <= 100; i++) {
        yigindi = yigindi + i;
    }

    printf("Yigindi: %d", yigindi);

    return 0;
}
