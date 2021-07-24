#include<stdio.h>

int main(){
	int a,b,c,max1,max2;
	printf(" enter 3 numbers: ");
	scanf("%i %i %i",&a,&b,&c);

	max1 = a>b?a:b;
	max2 = max1>c?max1:c;

	printf(" %i is greatest ",max2);
}
