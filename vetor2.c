#include <stdio.h>
int main(){
int vetor1[4];
int vetor2[4];
int vetor3[8];
int j;
for (int i=0;i<4;i++){
    scanf("%d",&vetor1[i]);

}
for (int i=0;i<4;i++){
    scanf("%d",&vetor2[i]);

}
j=0;
for (int i=0;i<4;i++){
vetor3[j] = vetor1[i];
j++;
vetor3[j] = vetor2[i];
j++;
}
for (int i=0;i<10;i++){
        printf("%d",vetor3[i]);
}
}
