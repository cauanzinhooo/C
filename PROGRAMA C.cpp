#include <stdio.h>

int main(){
	
	const int b = 4;
	const int al = 4;
	float notas[b][al] = {0};
	float mediaa[al] = {0};
	float media = 0;
	printf("Digite As 4 Notas do Aluno ");
	for(int aluno = 0; aluno < al; aluno++){
		for(int notass = 0; notass < b; ++notass){
			
			scanf("%f",&notas[aluno][notass]);
			media += notas[aluno][notass];
			
			
		}
	}
	printf("%f",media);
	
	
}
