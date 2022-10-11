#include <stdio.h>

int main(){
	int total = 0;
	int m[3][3] = {{1,2,3},
	               {4,5,6},
	               {7,8,9}};
				
				
	for( int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			total = total + m[a][b];
			printf("%d",m[a][b]);

		}
		printf("\n");
	}
	
	
}
