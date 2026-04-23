#include <stdio.h>

int main() {
    double w, h;
    int redici, mestaNaRed;
    int obshtoMesta;

    printf("Vuvedete w i h: ");
    scanf("%lf %lf", &w, &h);

    h = h * 100;
    w = w * 100;

    mestaNaRed = (int)((h - 100) / 70);
    redici = (int)(w / 120);

    obshtoMesta = mestaNaRed * redici - 3;

    printf("%d\n", obshtoMesta);

    return 0;
}
