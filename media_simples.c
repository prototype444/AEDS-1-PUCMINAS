#include <stdio.h>
    int main(){
    float soma=0,n,media;
    int cont=0;
    scanf("%f",&n);
        while(n>0){
            soma=soma+n;
            cont++;
            scanf("%f",&n);
    }
        if(cont>0){
            media=soma/cont;
            printf("media=%2f",media);
    }   else
            printf("nao foram digitados numeros validos");
    }
