#include<stdio.h>

int main(){
	int a,b,c;
	printf("enter 3 number: ");
	scanf("%i %i %i",&a,&b,&c);

	if(a>b && a<c || a>c && a<b){
		printf(" %i is 2nd greatest",a);
	}
	else if(b>a && b<c || b>c && b<a ){
		printf("%i is 2nd greatest",b);
	}
	else if(a == b || b == c || c == a){
		printf("number is equal, try another");
	}
	else if(c>a && c<b || c<a && c>b){
		printf("%i is greatest",c);
	}
}
