#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    double gradusi, radiani;

    printf("Vuvedete gradusi na ugul: ");
    scanf("%lf", &gradusi);

    radiani = gradusi * PI / 180.0;

    printf("sin = %.4f\n", sin(radiani));
    printf("cos = %.4f\n", cos(radiani));

    if (cos(radiani) != 0) {
        printf("tan = %.4f\n", tan(radiani));
    } else {
        printf("tan ne sushtestvuva\n");
    }

    if (sin(radiani) != 0) {
        printf("cotan = %.4f\n", 1 / tan(radiani));
    } else {
        printf("cotan ne sushtestvuva\n");
    }

    return 0;
}
