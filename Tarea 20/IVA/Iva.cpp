#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


#include "iva.h"

int main () {
	float precio=0.0f;
	printf ("¿Cuál es el precio del producto?");
	scanf ("%f", &precio);
	printf ("Valor del precio Total: %.2f\n", precio);
	printf ("Valor del IVA: %.2f\n", fniva(precio));
	printf ("Valor sin IVA: %.2f\n", fnsiniva(precio));
	
	return (0);
}
