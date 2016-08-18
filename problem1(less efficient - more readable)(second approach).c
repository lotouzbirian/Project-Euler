#include <stdio.h>

#define MULT3 3
#define MULT5 5
#define MULT15 15
#define MAX 1000

int main(){

	int i;
	long mult = 0;

	for(i = 0; i < MAX; i++)
	{
		if(i % MULT3 == 0 || i % MULT5 == 0){
			mult += i;
		}

	}

	printf("El resultado es: %ld.\n", mult);

	return 0;

}