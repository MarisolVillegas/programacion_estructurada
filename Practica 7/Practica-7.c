#include<stdio.h>
#include<stdlib.h>
/*Arreglos unidimensionales
Dado un numero n<100
Mostrar los n numeros y si son primos o no*/
//Marisol Villegas Rincón  

int main() {
	int num,i;
	int a[100];
	system("color 1f");
	printf("Introduzca un numero del 1 al 100:\n ");
	scanf("%d",&num);
	
	while(num<1 && num>100){
		printf("Error, Por favor introduzca otro numero;\n");
		scanf("%d",&num);	
	}
	printf("\tLos numeros son: \n");
	for(i=1;i<=num;i++)	a[i]=i;
		 
	for(i=1;i<=num;i++){
		if(a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7) 
			printf("\t'%d' es primo\n",a[i]);
		else
		{
			if(a[i]%2!=0 && a[i]%3!=0 && a[i]%5!=0 && a[i]%7!=0)
				printf("\t'%d' es primo\n",a[i]);
			else	printf("\t'%d' NO es primo \n",a[i]);
		}
	}
	return 0;
}
