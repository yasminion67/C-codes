#include <stdio.h>
int main(){
    printf("Digite o salário: ");
    int salario;
    int valor;
    scanf("%d", &valor);
    salario = valor;
    if(salario < 500){
        salario = (salario * 15 / 100);
    }
    else if(salario >= 500 && salario < 1000){
        salario = (salario * 10) / 100;
    }
    else{
        salario = (salario * 5) / 100;
    }
    salario = salario + valor;
    printf("Valor do salário reajustado: %d\n", salario);
}