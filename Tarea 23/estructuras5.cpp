#include<stdio.h>
#include<string.h>
#include "alumnos.h"
#define MAX 3
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]){
	appInfoData("Estructura alumnos", "20/11/2017");

	ALUMNO lista[MAX];
	int j=0;
	
	for(j=0;j<MAX;j++){
		
		printf("Datos alumno %d\n",j+1);
		lista[j]=nuevoAlumno();
	}
	
	for(j=0;j<MAX;j++){
		
		imprimeAlumno(lista[j]);
	}

	return 0;
	
}
