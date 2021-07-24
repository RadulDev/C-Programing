#include<stdio.h>
int main(){
	int a, b,c, max;

	printf(" Enter 3 numbers:");
	scanf(" %i %i %i",&a,&b,&c);

	max = a>b && a>c?a:b>a && b>c?b:c;

	printf("%i is the greatest",max);

}
