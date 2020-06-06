#include<stdio.h>
#include<string.h>
#include<ctype.h>
//Marisol Villegas Rincon 1898149
/* ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records
1.The user can capture as many students as he wants.
2. format the strings using functions from String lib.
3. Students with repeated studentsids are discarded.


reformat Struct exercise and store the information in a file
using json format.
*/
struct DatosEst{
	long mat;
	char nom[100];
	char ap[100];
	char cump[50] ;
	char es[100];
	char g;
	char carrera[50];
	char genero[2];
}x;
int main(){
	char *datos = "datos_json.dat", m[1];
	FILE *crear;
	/*Sirve para crear el archivo si no existe y si ya 
	existe, borra todo y lo empieza*/
	crear = fopen(datos, "w"); 
do{
	
	crear = fopen(datos, "a");//Abre y Añade al final del archivo
	if(crear == NULL){
		printf("Error,No se pudo abrir el archivo\n");
	}
	else{
		printf("Introduzca su nombre: ");
		fflush(stdin);
		gets(x.nom);
		printf("Introduzca sus apellidos: ");
		fflush(stdin);
		gets(x.ap);
		
		printf("Introduzca su matricula: ");
		scanf("%ld",&x.mat);
		
		printf("Introduzca su fecha de nacimiento: ");
		fflush(stdin);
		scanf("%s",x.cump);
		
		printf("Introduzca su escuela: ");
		fflush(stdin);
		gets(x.es);
		
		printf("Introduzca su carrera: ");
		fflush(stdin);
		gets(x.carrera);
		
		printf("Introduzca su grado: ");
		scanf("%d",&x.g);
		
		printf("Introduzca su genero:\nF -Femenino\nM -Masculino\n ");
		fflush(stdin);
		gets(x.genero);
		
		fprintf(crear, "{\n\"Nombre\":\"%s\"",x.nom);
		fprintf(crear, "\n\"Apellidos\":\"%s\"", x.ap);
		fprintf(crear, "\n\"Matricula\":\"%ld\"", x.mat);
		fprintf(crear, "\n\"Nacimiento\":\"%s\"", x.cump);
		fprintf(crear, "\n\"Escuela\":\"%s\"", x.es);
		fprintf(crear, "\n\"Carrera\":\"%s\"", x.carrera);
		fprintf(crear, "\n\"Semestre\":\"%d\"", x.mat);
		fprintf(crear, "\n\"Genero\": \"%s\"\n}\n\n", x.genero);
		printf("\nRegistrado con exito!\nVea el archivo 'datos_json.dat'\n");
	}
fclose(crear);
printf("\nDesea ingresar otro registro? SI(1), NO(2):   ");
fflush(stdin);
gets(m);
	while(atoi(m)<1 || atoi(m)>2){	
		printf("\n\t Introduzca de nuevo: ");
		fflush(stdin);
		gets(m); 
	}
}while(atoi(m)!=2);
}

