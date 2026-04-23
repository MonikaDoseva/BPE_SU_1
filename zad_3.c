#include <stdio.h>

int main() {
    char znak;

    scanf("%c", &znak);

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 10) {
                printf("%c", znak);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
