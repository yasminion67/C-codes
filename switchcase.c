#include <stdio.h>
int main() {
    int num;
    printf("Digite um número de 1 a 6: ");
    scanf("%d",&num);
    switch(num){
        case 6:
        case 5:
            printf("Bora enfrentar o Boss!!");
            break;
        case 4:
        case 3:
             printf("Se esconda e aguarde reforços!!");
             break;
        case 2:
        case 1:
            printf("Sai correndo, não dá para enfrentar!!");
            break;
        default:
            printf("Número inválido para o jogo.");
    }

    }
    