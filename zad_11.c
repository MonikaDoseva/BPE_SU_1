#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double duljina, shirina, lice;

    printf("Vuvedete koordinati na tochka A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Vuvedete koordinati na tochka B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    duljina = fabs(x2 - x1);
    shirina = fabs(y2 - y1);

    lice = duljina * shirina;

    printf("Liceto na pravougulnika e: %.2f\n", lice);

    return 0;
}
