#include <stdio.h>

int main() {
    int maxfiy = 7;
    int taxmin, i;
    int topildi = 0;

    for (i = 1; i <= 5; i++) {
        printf("%d-urinish, sonni kiriting: ", i);
        scanf("%d", &taxmin);

        if (taxmin == maxfiy) {
            printf("Tabriklaymiz, topdingiz!\n");
            topildi = 1;
            break;
        } else {
            printf("Notogri, qayta urinib koring\n");
        }
    }

    if (topildi == 0) {
        printf("Maxfiy son: %d", maxfiy);
    }

    return 0;
}
