#include <stdio.h>


int main(void){
	int total;
	int vetor[5];
	vetor[0] = 10;
	vetor[1] = 10;
	vetor[2] = 10;
	vetor[3] = 10;
	
	
	for ( int i = 0; i < 3; i++){
		
		printf("%d\n",vetor[i]);
		total += vetor[i];
		
	}
	printf("%d",total);
}
