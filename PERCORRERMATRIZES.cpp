#include <stdio.h>

int main(void){
	
	int ma [3][3] = {{11,22,33},
	                {10,10,10},
					{20,20,20}};
	for ( int a = 0; a < 3; a++){
		for( int b = 0; b < 3; b++){
			
			printf("%d ",ma[a][b]);
			
		}
		printf("\n");
	}
	
	return 0;
}

				
				
				

				
 
