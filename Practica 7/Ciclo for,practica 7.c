#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Pedir un numero y luego otro y sacar sus multiplos */

int main(int argc, char *argv[]) {
	int b=0,n,m,l;
	printf("Introduzca un numero\n");
	scanf("%d",&b);
	printf("Introduzca el numero que desea para generar sus multiplos\n");
	scanf("%d",&n);
	printf("Los multiplos de %d",b);
	for (l=1;l<=n;l++){
	m=b*l;
	printf("\n%d",m);}
	
	return 0;
}
