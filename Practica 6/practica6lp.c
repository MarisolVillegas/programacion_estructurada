#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,sum=0,i;
	float prome=0;
	do{ 
		printf("Introduzca un numero entero o  para finalizar introduzca un numero negativo:\n");
		scanf(" %d",&a);
		if(a>=0){
			sum=sum+a;
			i++;
			
		}
		
	}
	
		while(a>=0);
			prome=sum/i;
			printf("\nEl promedio es : %.2f",prome);
	return 0;
}
