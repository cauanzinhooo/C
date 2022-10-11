#include <stdio.h>


int main(void){
	
	int x = 10;
	int y = 20;
	
	
	int *px;
	int *py;
	px = &x;
	py = &y;
	
	int soma = *px + *py;
	
	printf("A soma eh %d",soma);
	
}
