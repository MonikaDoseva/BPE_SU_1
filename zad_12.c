#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double lice;

    printf("Vuvedete koordinati na tochka A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Vuvedete koordinati na tochka B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Vuvedete koordinati na tochka C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    lice = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

    printf("Liceto na triugulnika e: %.2f\n", lice);

    return 0;
}
