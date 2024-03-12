#include <stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a+b>c && a-b<c){
    printf("pode formar um triangulo");
    if(a!=b && a!=c && c!=b){
        printf("\nescaleno");
    }else if  (a==b && a==c && b==c){
        printf("\nequilatero");
    }
    else if(a==b || a==c || b==c){
        printf("\nisosceles");
    }
}



else{
    printf("nao pode formar um triangulo");
}
}
