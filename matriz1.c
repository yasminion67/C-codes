#include <stdio.h>
int main(){
    int k = 1, somaLinha = 0, somaColuna = 0;
    int m[3][4]={0};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            m[i][j] = k++;
            printf("%02d ", m[i][j]);
            if(i==1)somaLinha += m[1][j];
            if(j==1)somaColuna += m[i][1]; 
        }
        printf("\n");
    }
    printf("Soma da segunda linha = %d\n", somaLinha);
    printf("Soma da segunda coluna = %d\n", somaColuna);
}