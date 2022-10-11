#include <stdio.h>


int main(){
	
	int numero, i;
	
	printf("Digite um numero");
	scanf("%d", &numero);
	
	
	for ( i = 0; i <= numero; i++){
		printf("%d\n", i);
	}
	
	for ( i = numero; i >= 0; i--){
		
		printf("%d\n",i);
	}
	
	return 0;
	
}
