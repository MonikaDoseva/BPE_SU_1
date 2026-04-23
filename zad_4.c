#include <stdio.h>

int main() {
    char znak;

    scanf("%c", &znak);

    int visochina = 5;

    for (int i = 1; i <= visochina; i++) {
        for (int j = 1; j <= visochina - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == visochina) {
                printf("%c", znak);
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    printf("\n");

    for (int i = visochina; i >= 1; i--) {
        for (int j = 1; j <= visochina - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == visochina) {
                printf("%c", znak);
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
