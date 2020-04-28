#include <stdio.h>
#include <stdlib.h>
//Marisol Villegas Rincón
/* Matriz 3x3 solicitar al usuario los valores enteros 3 x 3, solicite un valor entero escalar y multiplique la matriz por el escalar*/
	
	int main() {
	int p[3][3],v,i, j ;
	system("color 4f");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("Introduzca el valor para la posicion %d,%d   ",i+1,j+1);
		scanf("%d",&p[i][j]);
	}
	system("cls");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)	
		printf(" %4d ",p[i][j]);
	  printf("\n");
	}
	printf("Introduzca el valor a multiplicar (entero)  ");
	scanf("%d",&v);
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++)
	  	printf(" %4d ",p[i][j]*v);
	  printf("\n");
	}
	return 0;
}
