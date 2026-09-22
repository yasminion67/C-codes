#include <stdio.h>
int main(){
    printf("Digite a primeira nota: ");
    float nota1;
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    float nota2;
    scanf("%f",&nota2);
    float media;
    media = (nota1 + nota2) / 2;
    if(media >= 6){
        printf("Aprovado\n");
    }
    else if(media >= 4.5 && media < 6){
        printf("Recuperação\n");
    }
    else{
        printf("Reprovado\n");
    }
}