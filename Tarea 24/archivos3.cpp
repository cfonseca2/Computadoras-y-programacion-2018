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

int main(int argc, char *argv[]) {
	appInfoData("Archivos", "22/11/2017");

FILE *cfPtr;
struct registro CuentaR;

if((cfPtr=fopen("cuentas.dat","r"))==NULL){
	printf("No se abrio el archivo\n");
	}else{
		printf("%-6s%-16s%10s\n", "No Cuenta", "Nombre","Balance");
		
		while (!feof(cfPtr)){
			fread(&CuentaR, sizeof(struct registro),1,cfPtr);
			
			if(CuentaR.cuenta != 0){
				printf("%-6d%-16s%-10d\n",CuentaR.cuenta,CuentaR.nombre,CuentaR.balance);
				
			}
		}
		
	}
		fclose(cfPtr);
			
return 0;
}
