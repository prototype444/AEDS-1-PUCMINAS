#include <stdio.h>
int main(){
    int l,c,soma=0;
    printf("digite o numero de linhas e o numero de colunas");
    scanf("%d %d",&l,&c);
    int matriz[l][c];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matriz[l][c]);
        }
    }
   for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            soma=soma+matriz[l][c];
        }
}

    printf("%d",soma);
}
