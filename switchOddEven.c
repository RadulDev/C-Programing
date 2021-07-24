#include<stdio.h>

int main(){

int a,b;
printf("enter a number: ");
scanf("%i",&a);
b = a % 2;
switch(b){
	case 1:
		printf("%i is an odd number\n",a);
		break;
	case 0:
		printf("%i is an even number\n",a);
		break;
}
}
