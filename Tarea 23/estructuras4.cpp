#include<stdio.h>
#include<string.h>
#include "alumnos.h"
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]){
	appInfoData("Estructura alumnos", "20/11/2017");
	
	ALUMNO var1;
	
	var1=nuevoAlumno();
	
	imprimeAlumno(var1);

	return 0;
	
}
