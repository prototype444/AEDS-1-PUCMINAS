#include <stdio.h>
#include <stdlib.h>

void matriz(int n, int[][n]);
int main(){
        int n;
        scanf("%d",&n);
        int mat[n][n];
        int i,j;
        matriz(n,mat);
}
void matriz(int n, int mat[n][n]){
  for (int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        mat[i][j]=rand()%100;
        printf("%d ",mat[i][j]);

      }
        printf("\n");

  }
}
