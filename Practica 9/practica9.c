#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Marisol Villegas Rincón 1898149
/*ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records
1. The user can capture as many students as he wants.
2. format the strings using functions from String lib.
3. Students with repeated studentsids are discarded.*/

int main( ) {
char est[10][9][150];
int cant,i,aux,j=1;
		printf("Introduzca la cantidad de alumnos que desea registrar: ");
		scanf("%d",&cant);
		
		for(i=0;i<cant;i++){	
		printf("Introduza su Matricula:");
		fflush(stdin);
		gets(est[i][0]);
		
		for(aux=0;aux<i;aux++)
		{	
		if(strcmp(est[aux][0],est[aux][0])==0){
			printf("Error,alumno ya registrado, introduzca otra matricula: \n");
			
		}else printf("Matricula: ");
			  fflush(stdin); 
			  gets(est[i][0]);	
		}
		printf("\nIntroduzca su Nombre(s): ");
		fflush(stdin);
		gets(est[i][1]);
			
		printf("Primer apellido: ");
		fflush(stdin);
		gets(est[i][2]);
		
		printf("Segundo apellido (opcional): ");
		fflush(stdin);
		gets(est[i][3]);
		
		printf("\nIntroduzca su Genero (M) para Masculino o (F) para Femenino): ");
		fflush(stdin);
		gets(est[i][4]);
		
		printf("Introduzca su fecha de nacimiento: ");
		fflush(stdin);
		scanf("%s",&est[i][5]);
		
		printf("\nIntroduzca su Escuela: ");
		fflush(stdin);
		scanf("%s",&est[i][6]);
		
		printf("Introduzca su Carrera: ");
		fflush(stdin);
		scanf("%s",&est[i][7]);
		
		printf("Introduzca su grado: ");
		fflush(stdin);
		scanf("%s",&est[i][8]);
		
		system("cls");
	}
	system("cls");
	printf("\t\t\t\tREGISTRO");
	
for(i=0;i<cant;i++)
	{	
	printf("\n\Datos Alumno %d: ",j++);
		fflush(stdin);
		
		printf("\nMatricula: %s\n Nombre(s): %s\nApellidos: %s %s\n Genero:(%s)\nFecha de nacimiento: %s\n Escuela: %s\nCarrera: %s\nGrado: %s\n",est[i][0],est[i][1],est[i][2],est[i][3],est[i][4],
		est[i][5],est[i][6],est[i][7],est[i][8]);
	}
	return 0;
}
