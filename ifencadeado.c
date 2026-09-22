#include <stdio.h>
int main() {
    int num;
    printf("Digite um número de 1 a 6: ");
    scanf("%d",&num);
    if (num == 5 || num == 6){
        printf("Bora enfrentar o Boss!!");
    }
    else if(num == 3 || num == 4){
        printf("Se esconda e aguarde reforços!!");
    }
    else if(num == 1 || num == 2){
        printf("Sai correndo, não dá para enfrentar!!");
    }
    else{
        printf("Número inválido para o jogo.");
    }
    return 0;
}
