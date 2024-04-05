#include <stdio.h>
int main(){
int m,a,b,c,maior;
scanf("%d",&m);
scanf("%d",&a);
scanf("%d",&b);
c=m-(a+b);
if(a>b && a>c){
    maior=a;
}
else if(b>c){
maior=b;
}
else{
maior=c;
}
if (m>=40 || m<=110){
    printf("%d",maior);
}
else if(a>=1 || a<m){
    printf("%d",maior);
}
else if(b>=1 || b<m){
    printf("%d",maior);
}
else if (a=b){
    printf("%d",maior);
}
else{
return 0;
}




}
