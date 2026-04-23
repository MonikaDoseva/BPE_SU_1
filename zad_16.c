#include <stdio.h>

int main() {
    int N;
    double M, kurs;
    double mesecnaZaplata, godishnaPechalba, sledDanuci, srednoNaDen;

    scanf("%d", &N);
    scanf("%lf", &M);
    scanf("%lf", &kurs);

    mesecnaZaplata = N * M;
    godishnaPechalba = mesecnaZaplata * 12 + mesecnaZaplata * 2.5;
    sledDanuci = godishnaPechalba * 0.75;
    srednoNaDen = sledDanuci / 365 * kurs;

    printf("%.2f\n", srednoNaDen);

    return 0;
}
