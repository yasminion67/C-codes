#include <stdio.h>
 
int main()
{
    int q;
    //inserir quantidade de notas
    do{
        printf("Digite quantidade de notas! \n");
        scanf("%d", &q);
    } while (q<=2);//validação
    

    float notas[q];
    int i;
    printf("Digite %d notas!\n\n", q);

    //inserir nota
    for(i=0;i<q;i++){
        printf("Digite a %da nota: ",i+1);//i+1 é operação para imprimir valor, não atribuição
        scanf("%f",&notas[i]);
    }

    //validar notas


    //mostrar nota
    for(i=0;i<3;i++){
        printf("\n%da nota: %.2f",i+1,notas[i]);
    }
 
    return 0;
}
