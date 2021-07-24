#include<stdio.h>

int main(){

int a, b,c;
printf(" enter 3 numbers: ");
scanf("%i %i %i", &a, &b,&c);

if(a>b && a>c){
printf("%i is greatest",a);
}
else if(b>a && b>c){
printf("%i is greatest",b);
}
else{
printf("%i is greatest",c);
}
}

