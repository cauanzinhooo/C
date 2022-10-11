#include <stdio.h>


int main(void){
	
	
	float notas[3] = {0};
	
	float total = 0;
	float media = 0;
	printf("Digite cinco notas: ");
	
	for ( int i = 0; i < 3; i++){
		scanf("%f", &notas[i]);
		
	}
	for ( int i = 0; i < 3; i++){
		
		total += notas[i];
		
	}
	media = total / 3;
	
	printf("notas:%f n",media);
}
