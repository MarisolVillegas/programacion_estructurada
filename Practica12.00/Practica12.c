#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Marisol Villegas Rincón 1898149
/* 3.12 Pointers 1
Reformat Structs exercice using functions with parameters
{studentid, fistname, firstlastname, secondlastname (optional),
birthdate, school, grade, career, gender}
 Pointers 2
 Use pointers of structs to handle objects,use Pointers 1
exercise and calculate basic statistics of students (Total
students, total students by gender, carrer), also use function pointer to filter the struct array.
 */
typedef char cad[' ']; //Variable global
 struct DatosEst{
    long mat;
    cad nom;
    char ap[100];
    char cump[50] ;
    char es[100];
    char g[2];
    char carrera[50];
    char genero;
};
struct DatosEst alum[2], *ap;
void datos_entrada(struct DatosEst *ap);
void salida_datos(struct DatosEst *ap);
int main(){
	datos_entrada(alum);
    salida_datos(alum);
	system("pause");
	return 0;
}

void datos_entrada(struct DatosEst *ap){
	ap=&alum[0];
	int i;
	char r[' '];
	for(i=0;i<2;i++){
	printf("\nIntroduzca su matricula:\n");
	fflush(stdin);
	gets(r);
	ap->mat=atoi(r);
	printf("Introduzca su nombre:\n");
	fflush(stdin);
	gets(ap->nom);
	printf("Introduzca su apellido:\n");
	fflush(stdin);
	gets(ap->ap);
	printf("Introduzca su fecha de nacimiento:\n");
	fflush(stdin);
	gets(ap->cump);
	printf("Introduzca su escuela:\n");
	fflush(stdin);
	gets(ap->es);
	printf("Indroduzca su grado:\n");
	fflush(stdin);
	gets(ap->g);
	printf("Introduzca su carrera:\n");
	gets(ap->carrera);
	printf("Introduzca su genero: \nF.Femenino\nM.Masculino\n");
	fflush(stdin);
	scanf("%c",&ap->genero);
	ap++;
    }
}
void salida_datos(struct DatosEst *ap){
	ap=&alum[0];
	int j;
	system("cls");
	printf("REPORTE DE ALUMNOS\n");
	for(j=0;j<2;j++)
	{
		printf("\nAlumno #%i\n",j+1);
		printf("\nMatricula: %ld ",ap->mat);
        printf("\nNombre completo: %s %s ",ap->nom, ap->ap);
        printf("\nFecha de nacimiento: %s",ap->cump);
        printf("\nEscuela: %s",ap->es);
        printf("\nGrado:%s",ap->g);
        printf("\nCarrera: %s",ap->carrera);
        printf("\nGenero:%c",ap->genero);
        ap++;
	}
}


