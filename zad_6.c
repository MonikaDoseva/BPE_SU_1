#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Vuvedete gradusi po Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("%.2f gradusa Celsius = %.2f gradusa Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
