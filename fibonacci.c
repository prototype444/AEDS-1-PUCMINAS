#include <stdio.h>
int main (){
int a,b,c;
a=0;
b=1;
for (unsigned long i=1; i<8; i++){
c=a+b;
a=b;
b=c;

printf("\n%u",c);
}
return 0;
}
