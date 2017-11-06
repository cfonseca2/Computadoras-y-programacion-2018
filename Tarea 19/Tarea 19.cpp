#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int fncuadro(int l, int m){
	
	int j=0;
	int k=0;
	
	for(j=1;j<=l;j=j+1){
		for(k=1;k<=m;k=k+1){
			
			printf("+");
		}
		printf("\n");
	}
	return 0;
}

int main(){
	
	int a,b;
	
	printf("Programa que dibuja un cuadro\n");
	printf("Usuario, inserte las filas que deseea: ");
	scanf("%d",&a);
	printf("Usuario, inserte las columnas que deseea: ");
	scanf("%d",&b);
	
	fncuadro(a,b);
	
	return 0;
	
}
