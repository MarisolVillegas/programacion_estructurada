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
int A=0,y;
int gen,ma=0,fe=0;
int li,lcc=0,mul=0,act=0,fis=0,mate=0,si=0;
struct DatosEst st[10];
	do {
		printf("Introduza la cantidad de alumnos a registrar: ");
		fflush(stdin);
		scanf("%d",&y);
		if(y<1 || y>10)
			puts("Error,Introduzca una cantidad valida\n");	
	} while(y<1 || y>10);
	for(A=0;A<y;A++)
	{
	datos_entrada(alum);
	do	{
		printf("\nIntroduzca su Genero\nF.-Femenino\nM.-Msculino\n");
			fflush(stdin);
			gen=getche();
			gen=toupper(gen);	
				if(gen!='F'&& gen!= 'M'){
					printf("\n\tDato erroneo\n Ingrese F o M\n");
				}
		}
	while (gen!= 'F' && gen!='M');
		switch(gen){
		case 'F':fe++;
		break;
		case 'M':ma++;
		break;}
	do{
		printf("\nLas Carreras disponibles: \n1)CIENCIAS COMPUTACIONALES\n2)MULTIMEDIA Y ANIMACION\n3)ACTUARIA\n4)FISICA\n5)MATEMATICAS\n6)SEGURIDAD EN TECNOLOGIAS\n");
			fflush(stdin);
			li=getche();
			if(li<'1' || li>'6')
				printf("\nError. Introduzca una opción valida");
	}while (li<'1' || li>'6');
		switch(li){
		case '1': lcc++;
		break;
		case '2': mul++;
		break;
		case '3': act++;
		break;
		case '4': fis++;
		break;
		case '5': mate++;
		break;
		case '6': si++;
		break;
		case'7':
		break;
		}
system("cls");
	}
	for(A=0;A<y;A++){
	void salida_datos(struct DatosEst *ap);
	}
	printf("La cantidad de estudiantes ingresados son:%d\n",y);
	printf("Alumnos con genero femenino:%d\n",fe);
	printf("Alumnos con genero Masculino:%d\n",ma);
	printf("Alumnos en la carrera de Ciencias Computacionales: %d\n",lcc);
	printf("Alumnos en la carrera de Multimedia y animacion: %d\n",mul);
	printf("Alumnos en la carrera de Actuaria: %d\n",act);
	printf("Alumnos en la carrera de Fisica: %d\n",fis);
	printf("Alumnos en la carrera de Matematicas %d\n",mate);
	printf("Alumnos en la carrera de Seguridad en Tecnologias: %d\n",si);
	puts("\n\n\n\n\n\n\n");
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
    return alum;
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


