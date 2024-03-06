#include <stdio.h>
#include <math.h>
float a,b,c,delta,x1,x2;
int main(){
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
delta = (b*b - 4*a*c);

    if (delta >= 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        printf("%.1f %.1f %.1f",delta,x1,x2);
    }else{
    printf("%.1f Nao existem raizes", delta);

    }
    }
