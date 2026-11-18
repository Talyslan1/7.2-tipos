#include <math.h>
#include <stdio.h>

typedef struct { double x, y; } Ponto;

int main(void)
{
    Ponto a, b;

    printf("Ponto A (x y): ");
    if (scanf("%lf %lf", &a.x, &a.y) != 2) {
        return 1;
    }

    printf("Ponto B (x y): ");
    if (scanf("%lf %lf", &b.x, &b.y) != 2) {
        return 1;
    }

    double dx = b.x - a.x;
    double dy = b.y - a.y;
    double distancia = sqrt(dx * dx + dy * dy);

    printf("Distancia = %.2f\n", distancia);
    return 0;
}
