#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	FILE *file;
	file = fopen("");
	
	
	if ( file == NULL){
		printf("Não existe");
		getchar();
		exit(0);
	}
}
