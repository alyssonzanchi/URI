#include <stdio.h>

int main() {
    int tempo, velocidadeMedia;
    double distancia, quantidadeLitros;
    scanf("%d %d", &tempo, &velocidadeMedia);
    distancia = velocidadeMedia * tempo;
    quantidadeLitros = distancia / 12;
    printf("%.3lf\n", quantidadeLitros);
    return 0;
}