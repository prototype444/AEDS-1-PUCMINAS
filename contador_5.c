#include <stdio.h>
int main(){
int n=0;
int cont=0,cont5=0;
    while(n>=0){
        scanf("%d",&n);
        if(n<0){
            break;
     }
        else{
            cont++;
    }
        if(n==5){
            cont5++;
   }
}
printf("%d %d",cont,cont5);

return 0;
}
