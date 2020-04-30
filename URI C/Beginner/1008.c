#include <stdio.h>

int main() {
    int numeroFuncionario, quantidadeHorasTrabalhadas;
    float valorHoraTrabalhada, salario;
    scanf("%d %d %f", &numeroFuncionario, &quantidadeHorasTrabalhadas, &valorHoraTrabalhada);
    salario = quantidadeHorasTrabalhadas * valorHoraTrabalhada;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numeroFuncionario, salario);
    return 0;
}
