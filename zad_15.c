#include <stdio.h>

int main() {
    double N, W, L, M, O;
    double ploshtPloshtadka, ploshtPlochka, ploshtPeika;
    double nujniPlochki, vreme;

    printf("Vuvedete strana na ploshtadkata N: ");
    scanf("%lf", &N);

    printf("Vuvedete shirina na plochka W: ");
    scanf("%lf", &W);

    printf("Vuvedete duljina na plochka L: ");
    scanf("%lf", &L);

    printf("Vuvedete shirina na peika M: ");
    scanf("%lf", &M);

    printf("Vuvedete duljina na peika O: ");
    scanf("%lf", &O);

    ploshtPloshtadka = N * N;
    ploshtPlochka = W * L;
    ploshtPeika = M * O;

    nujniPlochki = (ploshtPloshtadka - ploshtPeika) / ploshtPlochka;
    vreme = nujniPlochki * 0.2;

    printf("Nujni plochki: %.2f\n", nujniPlochki);
    printf("Vreme: %.2f minuti\n", vreme);

    return 0;
}
