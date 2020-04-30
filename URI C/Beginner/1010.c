#include <stdio.h>

int main() {
    int codigoPeca1, numeroPeca1, codigoPeca2, numeroPeca2;
    float valorPeca1, valorPeca2, valorTotal;
    scanf("%d %d %f %d %d %f", &codigoPeca1, &numeroPeca1, &valorPeca1, &codigoPeca2, &numeroPeca2, &valorPeca2);
    valorTotal = numeroPeca1 * valorPeca1 + numeroPeca2 * valorPeca2;
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    return 0;
}