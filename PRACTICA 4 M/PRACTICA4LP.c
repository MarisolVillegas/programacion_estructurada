#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char op;
	float num1,num2,s,r,m,d;
	
	printf("\n\nIntroduzca la operacion a realizar:\n+ suma\n- resta\n*  multiplicaci%cn\n/ divisi%cn:\n",162,162);
		fflush(stdin);
		scanf("%c",&op);
		printf("Introduzca un n%cmero:\n\a",163);
		fflush(stdin);
		scanf("%f",&num1);
		printf("Introduzca otro n%cmero:\n\a",163);
		fflush(stdin);
		scanf("%f",&num2);
	
			switch(op){
				case '+':s=num1+num2;
					printf("\n\nLa suma de los n%cmeros es:\n%0.2f",163,s);
					break; 
				case '-': r=num1-num2;
					printf("\n\nLa resta de los n%cmeros es:\n%0.2f",163,r);
					break;
					case '*': m=num1*num2;
					printf("\n\nLa multiplicaci%cn de los n%cmeros es:\n%0.2f",162,163,m);
					break;
					case '/': d=num1/num2;
					printf("\n\nLa divisi%cn de los n%cmeros es:\n%0.2f",162,163,d);
					break;
					default: printf("\n\nOperci%cn no valida",162);
					}
	return 0;
}
