#include <stdio.h>

int main() {
    double leva;
    double dolari, evro, paundove;

    printf("Vuvedete suma v leva: ");
    scanf("%lf", &leva);

    dolari = leva / 1.80;
    evro = leva / 1.95583;
    paundove = leva / 2.30;

    printf("\nRezultati:\n");
    printf("%.2f leva = %.2f dolara\n", leva, dolari);
    printf("%.2f leva = %.2f evro\n", leva, evro);
    printf("%.2f leva = %.2f paunda\n", leva, paundove);

    return 0;
}
