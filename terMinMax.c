#include<stdio.h>

int main(){
	int a,b, max;
	printf(" Enter 2 numbers: ");
	scanf("%i %i", &a, &b);

	max = a>b?a:b;
	printf(" %i is the greatest.", max);
}
