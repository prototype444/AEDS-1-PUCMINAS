    #include <stdio.h>
    int main(){
    int i,a,b,c;
    printf("\n insira o valor inicial");
    scanf("%d",&a);
    printf("\n insira o limite");
    scanf("%d",&b);
    printf("\n insira o passo");
    scanf("%d",&c);
        if(a<b){
            for(i=a;i<=b;i+=c){
                printf("\n %d",i);}
    }   else if(a>b){
            for(i=a;i>=b;i-=c){
                printf("\n %d",i);
    }
    }

    }

