#include<stdio.h>
#include <conio.h>
#include<string.h>
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct registro{
	int cuenta;
	char nombre[30];
	int balance;
};
typedef struct registro Cuenta;

int main(int argc, char *argv[]) {
	appInfoData("Archivos", "22/11/2017");

FILE *cfPtr;
Cuenta c;
int j=0;

if((cfPtr=fopen("cuenta5.txt","w"))==NULL){
	printf("No se abrio el archivo");
	}else{
		printf("Dame la cuenta:");
		scanf("%d",&c.cuenta);
		
		printf("Dame el nombre:");
		fflush(stdin);
		gets(c.nombre);
		
		printf("Dame el balance:");
		scanf("%d",&c.balance);
		for(j=0;j>10;j++){
			fprintf(cfPtr,"%d%s%d\n",c.cuenta,c.nombre,c.balance);
		}
	}
		fclose(cfPtr);
		getch();
		
return 0;
}
