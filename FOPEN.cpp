#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	
	FILE *file;
	file = fopen("sexo.txt", "w");
	fprintf(file,"danilo gordinho");
	fclose(file);
	
	
	return 0;
	
	
	
}
