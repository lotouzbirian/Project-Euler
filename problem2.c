#include <stdio.h>

#define MAX 3524578 /* Máximo número antes de 4.000.000 */

int main(){

	int i, fib = 0;
	int ant1 = 1;
	int ant2 = 2;
	int sum = 2;  /* Contemplo ya al 2 de la sucesión inicial */

	for(i = 0; fib < MAX; i++){

		fib = ant1 + ant2;
		ant1 = ant2;
		ant2 = fib;

		if(fib % 2 == 0)
			sum += fib;
	}

	printf("La suma de todos los números pares de Fibonacci debajo de 4.000.000 es: %d \n", sum);
}