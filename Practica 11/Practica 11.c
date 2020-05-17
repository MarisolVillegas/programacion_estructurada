#include <stdio.h>
#include <stdlib.h>
//Marisol Villegas Rincon
//Define fibonacci function using recursion, reformat 2d Arrays exercise usinf functions.

long fib(long n){
	if (n==0 || n==1)
		return n;
	else 
		return fib(n-1) + fib(n-2); 
}
int main(){
	int i;
	long n, num=0;
	printf("Ingrese la cantidad de numeros de la serie fibonacci: ");
	scanf("%ld", &n);
	for(i=0; i<n; i++){
		num=fib(i);
		printf("%ld ", num);
		num=0;
	}
	return 0;
}


