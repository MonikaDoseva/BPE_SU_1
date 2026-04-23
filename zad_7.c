#include <stdio.h>

#define PI 3.14159

int main() {
    double gradusi, radiani;

    printf("Vuvedete gradusi: ");
    scanf("%lf", &gradusi);

    radiani = gradusi * PI / 180;

    printf("%.2f gradusa = %.4f radiana\n", gradusi, radiani);

    return 0;
}
