#include <stdio.h>
#include <math.h>

enum limits{
	MIN = 100,
	MAX = 999
};

long isPalindrome(long);

long isPalindrome(long n){

	long aux = n;
	long n2 = 0;
	
	while(aux){
		n2 = n2 * 10 + aux % 10; 
		aux /= 10;
	}

	return (n == n2);
}

int main(){

	int i, j, rta, max = 0;

	/* int flag = 1; */

	for(i = n1; i >= MIN /* && flag */; i--){
		for(j = n2; j >= MIN /* && flag */; j--){
			if(isPalindrome((i) * (j))){
				rta = i * j;
			/*	flag = 0; */
				if(rta > max){	/* Si hacía flag = 0 y en los for colocaba la condición "&& flag == 1" no me funcionaba, ¿por qué? */
					max = rta;
				}
			}
		}
	}

	printf("El número máximo es: %ld", max);

}
