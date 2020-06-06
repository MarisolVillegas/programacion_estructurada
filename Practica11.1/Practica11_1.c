#include <stdio.h>
#include <stdlib.h>
//Marisol Villegas Rincon
//3x3 Matrix and ask to the user the 3 x 3 values int, ask for a scalar int value and multipy the matrix by the scalar.

void matriz(int es);

int main (){
int es;
printf ("Introduzca un valor escalar para multiplicar la matriz:  ");
scanf ("%d", &es);
matriz(es);
return 0;
}
void matriz(int es){
int dim[3][3];
int i,j;
	for ( i=0;i<3; i++){
		for ( j=0; j<3; j++){
			printf ("Introduzca el valor para [%d] [%d]:  ", i+1, j+1);
			scanf(" %d",&dim[i][j]);
	dim [i][j] *= es;
		 	 
		}
	}
printf ("Los elementos de la matriz son: \n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf ("%d \t", dim[i][j]);
		}
		printf ("\n");
		
	}
}
