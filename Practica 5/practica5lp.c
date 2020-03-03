#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a,sum=0,i=0;
		float prome=0;
	
	printf("Introduzca un numero entero o  para finalizar introduzca un numero negativo:\n");
	scanf(" %d",&a);
	while(a>=0){
		sum=sum+a;
		i++;
		printf("Introduzca un numero entero o si desea finalizar introduzca un numero negativo:\n");
		scanf(" %d",&a);	
	}
	prome=sum/i;
	printf("\nEl promedio es : %.2f",prome);
	return 0;
}
