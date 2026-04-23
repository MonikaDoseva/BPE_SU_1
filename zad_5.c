#include <stdio.h>

int main() {
    double inch;
    double mm, cm, dm, m;

    printf("Vuvedete stoinost v inchove: ");
    scanf("%lf", &inch);

    mm = inch * 25.4;
    cm = inch * 2.54;
    dm = inch * 0.254;
    m = inch * 0.0254;

    printf("\nRezultati:\n");
    printf("%.2f inch = %.2f mm\n", inch, mm);
    printf("%.2f inch = %.2f cm\n", inch, cm);
    printf("%.2f inch = %.2f dm\n", inch, dm);
    printf("%.2f inch = %.2f m\n", inch, m);

    return 0;
}
