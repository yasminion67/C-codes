#include <stdio.h>
int main(){
    int saida = 1, q = 5;
    for (int i = 0; i<q; i++) {
        for(int j = 0;j<q; j++){
            //q-1 é ultimo, 0 é o começo e q/2 é meio
            //if(!(i==0 || j==0 || i==q-1 || j==q-1)){
            //if(!(i==q/2 || j==q/2)){
            //if(i==j){
            if(i==j){
                printf("%02d ", saida);
            }
            else{
                printf("   ");
            }
                saida++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}