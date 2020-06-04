#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Marisol Villegas Rincon
/* ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records
1.The user can capture as many students as he wants.
2. format the strings using functions from String lib.
3. Students with repeated studentsids are discarded.
*/struct DatosEst{
	long mat;
	char nom[100];
	char ap[100];
	char cump[50] ;
	char es[100];
	char g;
	char carrera[50];
	char genero;
}x[100];

int main(void) {
	struct DatosEst;
	int i=0,j=0,op,b=0,c=0,r;
	
do{
    do{
    	b=0;
    printf("Introduzca su matricula:\n");
    scanf("%ld",&x[c].mat);

    for(j=0;j<c;j++){
        if(x[c].mat == x[j].mat){
            b=1;
        }
	}
    }while(b==1);

    printf("Introduzca su(s) nombre(s):\n");
    fflush(stdin);
    scanf("%s",&x[c].nom);
	
	printf("Introduzca su apellido:\n");
	fflush(stdin);
	scanf("%s",&x[c].ap);
	
	printf("Introduzca su fecha de nacimiento:\n");
	fflush(stdin);
	scanf("%s",&x[c].cump);
	
	printf("introduzca su escuela:\n");
	fflush(stdin);
	scanf("%s",&x[c].es);
	
	printf("Introduzca su grado:\n");
	scanf("%d",&x[c].g);
	
	printf("Introduzca su carrera:\n");
	fflush(stdin);
	scanf("%s",&x[c].carrera);
	printf("Introduzca su genero: \nF.Femenino\nM.Masculino\n");
	scanf(" %c",&x[c].genero);
	
	printf("Desea ingresar otro estudiante?:\n1-Si\n 2-No\n");
	scanf("%d",&op);
	c++;
}
while(op==1);
for(i=0;i<c;i++){
	printf("Los datos del alumno#%d:\nMatricula: %ld\n Nombre(s): %s\nApellidos: %s\n Fecha de nacimiento: %s\n Escuela: %s\nGrado: %d\nCarrera: %s\n Genero: %c\n",c,x[i].mat,x[i].nom,x[i].ap,x[i].cump,x[i].es,x[i].g,x[i].carrera,x[i].genero);

}
	return 0;
}
