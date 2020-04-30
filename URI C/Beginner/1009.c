#include <stdio.h>

int main() {
    char vendedor;
    double salarioFixo, totalVendas, salarioTotal;
    scanf("%s %lf %lf", &vendedor, &salarioFixo, &totalVendas);
    salarioTotal = salarioFixo + (totalVendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salarioTotal);
    return 0;
}
