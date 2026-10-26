#include <stdio.h>
 
int main()
{
    int x = 10;
    float nota = 7.8;
    float notas[5];
    float moeda[] = {1.00, 0.50, 0.25, 0.10, 0.05, 1.50};

 
    printf("char   : %zu byte\n", sizeof(char));
    printf("int    : %zu bytes\n", sizeof(int));
    printf("double : %zu bytes\n", sizeof(double));
    printf("x      : %zu bytes\n", sizeof(x));
    printf("nota   : %zu bytes \n", sizeof(nota));
    printf("notas  : %zu bytes\n", sizeof(notas));
    printf("moeda  : %zu bytes\n", sizeof(moeda));
    int q = 6;
    q=sizeof(moeda)/sizeof(moeda[0]); //7
    //tamanho do vetor inteiro/tamanho de um valor, no caso a primeira posição
    //loop para imprimir todos os valores sem saber a quantidade
    for(int i=0; i<q; i++){
         printf("%.2f, ", moeda[i]);
    }
    printf("\n");
    return 0;
}
