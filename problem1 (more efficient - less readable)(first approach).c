#include <stdio.h>

#define MULT_3 3
#define MULT_5 5
#define MULT_15 15
#define MAX 10

int main(){

	int i;
	long mult3 = 0, mult5 = 0, mult15 = 0;

	for(i = 0; i < MAX; i+=MULT_3){
		mult3 = mult3 + i;                        // 333
		printf("%ld\n", mult3);
	}

	for(i = 0; i < MAX; i+=MULT_5){ 
		mult5 = mult5 + i;                      // 200
		printf("%ld\n", mult5);
	}

	for(i = 0; i < MAX; i+=MULT_15){
		mult15 = mult15 + i;                    // 67   
		printf("%ld\n", mult15);
	}

											// = 600 OPERACIONES EN TOTAL

	printf("El resultado es: %ld \n", mult3 + mult5 - mult15);

	return 0;
}
