#include <stdio.h>

double f(double x) {
    return 2 * x + 3;
}

double trapezoidalIntegration(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2;

    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }

    return h * sum;
}

int main() {
    double a = 2; 
    double b = 3; 
    int n = 80;   

    double result = trapezoidalIntegration(a, b, n);
    printf("Hasil integral: %.2f\n", result);

    return 0;
}
