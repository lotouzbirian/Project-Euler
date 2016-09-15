#include <stdio.h>
#include <math.h>


int sumDiv(int n){

	int i, suma = 1;

	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			suma += i;
		}
	}

	return suma;
}

int main(){

	int a = 220;
	int b = 100;
	int i, j;
	int rta = 0;

	for(i = 0; i < 10000; i++)
		for(j = 0; j < 10000; j++)
			if(sumDiv(i) == j && sumDiv(j) == i)
				rta +=  (i + j);
			
	printf("%d\n", rta);

}