#include <stdio.h>
#include <string.h>
int main(){
char vet [50];
printf("Insira uma palavra");
scanf("%s",vet);
for (int i=0;i<strlen(vet);i++){
    if(vet[i]=='p' || vet[i]=='b'){
      if(vet[i-1]=='n')
            printf("errado");
        else if (vet[i-1]=='m')
            printf("correto");
}
}
}
