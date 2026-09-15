#include <stdio.h>

int main() {
    int saque, cedulas, saldo;
    printf("Digite o valor do saque: ");
    scanf("%d",&saque);

    if(saque % 10 >= 1){
        printf("Não é possivel sacar R$%d\n", saque);
        reutrn 1;
    }

    cedulas = saque / 50; //qntd de notas de 50
    saldo = saque % 50; //resto da divisão
    printf("Cedulas de R$50: %d\n", cedulas);

    cedulas = saldo / 20;
    saldo = saldo % 20;
    printf("Cedulas de R$20: %d\n", cedulas);

    cedulas = saldo / 10;
    saldo = saldo % 10;
    printf("Cedulas de R$10: %d\n", cedulas);

    return 0;
}