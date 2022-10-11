#include <stdio.h>


int main(void){
	
	
	const int numerodealunos = 4;
	const int bimestres = 4;
	float media = 0;
	float school[numerodealunos][bimestres] = {0};
	float notes[numerodealunos] = {0};
	printf("Notas alunos 1: ");
	for( int alunos = 0; alunos < numerodealunos; alunos++){
		for ( int notas = 0; notas < bimestres; notas++ ){		
			scanf("%f",&school[alunos][notas]);
			media += school[alunos][notas];
		}
		notes[alunos] = media / bimestres;
		media = 0;
		printf("Insira as 4 notas do aluno %i\n", alunos + 2);
	}
	for ( int alunos = 0; alunos < numerodealunos; alunos++){
		
		printf("A media do aluno %i e %.2f\n", alunos + 1,notes[alunos] );
		
	}
	
	
	
}
