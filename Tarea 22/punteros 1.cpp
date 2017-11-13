#include <iostream>
#include "cabecera.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	appInfoData("Ejemplo de Punteros", "13/11/2017");
	
	int a;
	a = 10;
	int *puntero;
	puntero=&a;
	
	printf("%d", *puntero);
	
	return 0;
}
