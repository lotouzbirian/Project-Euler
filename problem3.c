#include <stdio.h>
#include <math.h>

int isPrime(long long int);

int isPrime(long long int n)
{ 
	int prime = 1;
	int i;

	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			prime = 0;
		}
	}

	return prime;
}

int
main(){

	long long nro = 600851475143; // El número a encontrar el mayor factor primo
	int div = 2;  // El primer número primo
	int maxDiv = 0; // El máximo divisor hasta el momento

    while(div <= nro){  
	 
		while(nro % div == 0){ //Sigo dividiendo por el divisor actual hasta que el módulo no de 0. Luego avanzo al siguiente divisor primo
		 	nro /= div;
	 		if(div > maxDiv){
	 			maxDiv = div;
	 		}
	 }

	div++; // Aumento al siguiente para ver si es primo o no en el siguiente while

    while(!isPrime(div)){
    	div++;
    }
    }
	
	printf("El máximo factor primo del número 600851475143 es: %d\n", maxDiv);

	return 0;
}

