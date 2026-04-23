#include <stdio.h>

int main() {
    double a, b, h, lice;

    printf("Vuvedete purva osnova a: ");
    scanf("%lf", &a);

    printf("Vuvedete vtora osnova b: ");
    scanf("%lf", &b);

    printf("Vuvedete visochina h: ");
    scanf("%lf", &h);

    lice = (a + b) * h / 2;

    printf("Liceto na trapeca e: %.2f\n", lice);

    return 0;
}
