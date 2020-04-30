#include <stdio.h>

int main() {
    double pi, A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    pi = 3.14159;
    areaTriangulo = (A * C) / 2;
    areaCirculo = pi * (C * C);
    areaTrapezio = (A + B) * C / 2;
    areaQuadrado = B * B;
    areaRetangulo = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
    return 0;
}
