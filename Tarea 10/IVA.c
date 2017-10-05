#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j=0;
	
	printf("Introduzca el valor del IVA, del que desea obtener el subtotal y el total a pagar \n");	
	scanf("%d", &j);
	printf("\n IVA: %d",j);
	printf("\n Subtotal: %d",(j*84)/16);
	printf("\n Total: %d",(j*100)/16);
	
	return 0;
}
