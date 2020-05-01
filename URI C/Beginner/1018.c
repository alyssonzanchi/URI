#include <stdio.h>

int main() {
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    scanf("%d", &valor);
    nota100 = valor / 100;
    cinquenta = valor % 100;
    nota50 = cinquenta / 50;
    vinte = cinquenta % 50;
    nota20 = vinte / 20;
    dez = vinte % 20;
    nota10 = dez / 10;
    cinco = dez % 10;
    nota5 = cinco / 5;
    dois = cinco % 5;
    nota2 = dois / 2;
    um = dois % 2;
    nota1 = um / 1;
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
    return 0;
}
