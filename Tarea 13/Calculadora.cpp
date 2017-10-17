#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	
	int opcion;
	float num1,num2,suma,resta,multiplicacion,division;
	
	do{
		
	printf("\nMENU \n Que desea realizar? \n");
	printf("1. SUMA \n");
	printf("2. RESTA \n");
	printf("3. SALIR \n");
	
	scanf("%i",&opcion);
	
	switch(opcion){
case 1:
		printf("Elegiste SUMA\n");
		printf("Escriba el primer numero: ");
		scanf("%f",&num1);
		printf("\nEscriba el segundo numero: ");
		scanf("%f",&num2);
		printf("\nLa suma de %.2f y %.2f es %.2f \n",num1,num2,suma=num1+num2);
	break;	
	
	
case 2:
		printf("Elegiste RESTA\n");
		printf("Escriba el primer numero: ");
		scanf("%f",&num1);
		printf("\nEscriba el segundo numero: ");
		scanf("%f",&num2);
		printf("\nLa resta de %.2f y %.2f es %.2f \n",num1,num2,resta=num1-num2);
		
	break;
		
	}
	
	}	while (opcion!=3);
	
	
}
