#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		int num=0;
	printf("Escriba un n�mero entre 1 y 7 \n");
	scanf("%d",&num);
	if(num>=1 && num<=7){
		switch(num){
			case 1:
				printf("Lunes"); break;
			case 2:
				printf("Martes"); break;
			case 3:
				printf("Mi�rcoles"); break;
			case 4:
				printf("Jueves"); break;
			case 5:
				printf("Viernes"); break;
			case 6:
				printf("S�bado"); break;
			case 7:
				printf("Domingo"); break;
			}
		}
	else{
		printf("Insert� un n�mero incorrecto, debe ser mayor o igual a 1 y menor o igual a 7");
	}

	
	return 0;
}
