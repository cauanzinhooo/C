#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	float calc(float n1,float n2);
	float a,b,m;
	
	printf("Enter two numbers:");
	scanf("%f",&a);
	scanf("%f",&b);
	m = calc(a, b);
	
	
	
	return 0;
}

float calc(float n1, float n2){
	
	
	if( n1 > n2){
		printf("First number more second number");
	}
	else{
		printf("Second number more first number");
	}
	

	
	return 0;
	
}
