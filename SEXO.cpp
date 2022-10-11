#include <stdio.h>
#include <stdlib.h>
int main() {
int i, NUM[3], SEXO[3];
//lendo os valores
for (i=0; i<3; i++) {
printf("Informe um numero: \n");
scanf("%d", &NUM[i]);
}
//imprimindo os valores
for (i=0; i<4; i++) {
printf("Numero: %d \n", NUM[i]);
printf("Outro numero: %d\n", SEXO[i]);
}
}
