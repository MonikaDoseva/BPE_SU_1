#include <stdio.h>

int main() {
    double cenaZelenchuci, cenaPlodove;
    int kgZelenchuci, kgPlodove;
    double prihodLv, prihodEuro;

    scanf("%lf", &cenaZelenchuci);
    scanf("%lf", &cenaPlodove);
    scanf("%d", &kgZelenchuci);
    scanf("%d", &kgPlodove);

    prihodLv = cenaZelenchuci * kgZelenchuci + cenaPlodove * kgPlodove;
    prihodEuro = prihodLv / 1.95;

    printf("%.2f\n", prihodEuro);

    return 0;
}
