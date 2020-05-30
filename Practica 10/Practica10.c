#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//MVR
/* ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records
1.The user can capture as many students as he wants.
2. format the strings using functions from String lib.
3. Students with repeated studentsids are discarded.
*/
struct DatosEst{
	long mat;
	char nom[100];
	char ap[100];
	char cump[50] ;
	char es[100];
	char g;
	char carrera[50];
	int genero;
}x[100];

int main(void) {
	struct DatosEst;
	int i=0,j=0,op,b=0,c=0,r;
	
do{
    do{
    printf("Introduzca su matricula:\n");
    scanf("%ld",&x[i].mat);

    for(j=0; j<10; j++){
        if(x[i].mat == x[j].mat){
            b=1;
        }
}
    }
	
	while(b!=0);
	


    printf("Introduzca su(s) nombre(s):\n");
    fflush(stdin);
    scanf("%s",&x[i].nom);
	
	printf("Introduzca su(s) nombre(s):\n");
	fflush(stdin);
	scanf("%s",&x[i].nom);
	
	printf("Introduzca su apellido:\n");
	fflush(stdin);
	scanf("%s",&x[i].ap);
	
	printf("Introduzca su fecha de nacimiento:\n");
	fflush(stdin);
	scanf("%s",&x[i].cump);
	
	printf("introduzca su escuela:\n");
	fflush(stdin);
	scanf("%s",&x[i].es);
	
	printf("Introduzca su grado:\n");
	scanf("%d",&x[i].g);
	
	printf("Introduzca su carrera:\n");
	fflush(stdin);
	scanf("%s",&x[i].carrera);
	printf("Introduzca su genero: \nF.Femenino\nM.Masculino\n");
	scanf(" %c",&x[i].ap);
	
	printf("Desea ingresar otro estudiante?:\n1-Si\n 2-No\n");
	scanf("%d",&op);
	c++;
	b++;
}
while(op!=1);
for(i=0;i<c;i++){
	printf("Los datos del alumno:Matricula:%ld\n Nombre(s):%s\nApellidos:%s\n Fecha de nacimiento:%s\n Escuela:%s\Grado:%d \n Carrera:%s\n Genero:%c\n",x[i].mat,x[i].nom,x[i].ap,x[i].cump,x[i].es,x[i].g,x[i].genero);

}

	return 0;
}

//EJEMPLO
/*struct {
	char calle[50];
	char colonia[50];
	int numero;
	int cp;
};
//anidar una estructura  
struct agenda{
	long tel;
	char nom[40];
	struct direccion dir;
}a[5];

int main(void){
	struct agenda;
	int i;
	for(i=0;i<4;i++){
	
		printf("Dame el telefono %d:\n",i+1);
		scanf("%d",&a[i].tel);
		
		printf("Dame el nombre %d:\n",i+1);
		scanf("%s",&a[i].nom);
		
		printf("Dame tu calle %d:\n",i+1);
		scanf("%s",&a[i].dir.calle);
		
		printf("Dame tu colonia %d:\n",i+1);
		scanf("%s",&a[i].dir.colonia);
		
		printf("Dame tu numero %d:\n",i+1);
		scanf("%d",&a[i].dir.numero);
		
		printf("Dame tu Codigo postal %d:\n",i+1);
		scanf("%d",&a[i].dir.cp);
	
}
for(i=0;i<4;i++){
	printf("\n Nombre %d: %s\t Telefono %d:%d", i+1,a[i].nom[i], i+1,a[i].tel);
	printf("\nCalle:%s\t Colonia:%s \t Numero:%d \t Cp:%d \n",i+1,a[i].dir.calle,i+1,a[i].dir.colonia,i+1,a[i].dir.numero,i+1,a[i].dir.cp);
}
return 0;
}*/
