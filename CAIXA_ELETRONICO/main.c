#include <stdio.h>

int main(void) {
    int saldo = 1000; // saldo disponível no caixa (fixo para esta simulação)
    int valor_saque;
    int resto;
    int notas100, notas50, notas20, notas10, notas5;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor_saque);

    if (valor_saque % 5 == 0 && valor_saque <= saldo) {
        resto = valor_saque;
        notas100 = resto / 100;
        resto = resto % 100;

        notas50 = resto / 50;
        resto = resto % 50;

        notas20 = resto / 20;
        resto = resto % 20;

        notas10 = resto / 10;
        resto = resto % 10;

        notas5 = resto / 5;

        printf("Notas entregues:\n");
        if (notas100 > 0) printf("%d nota(s) de 100\n", notas100);
        if (notas50  > 0) printf("%d nota(s) de 50\n", notas50);
        if (notas20  > 0) printf("%d nota(s) de 20\n", notas20);
        if (notas10  > 0) printf("%d nota(s) de 10\n", notas10);
        if (notas5   > 0) printf("%d nota(s) de 5\n", notas5);
    } else {
        printf("Erro: valor invalido. Deve ser multiplo de 5 e nao pode ultrapassar o saldo disponivel (%d).\n", saldo);
    }

    return 0;
}