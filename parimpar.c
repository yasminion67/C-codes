#include <stdio.h>
int main() {
    int a;
    printf("Digite um número: ");
    scanf("%d",&a);
    int res = (a%2==0) ? printf("PAR\n") : printf("ÍMPAR\n") ;
    return 0;
}
