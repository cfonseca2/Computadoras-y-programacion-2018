#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int j;

    printf("\n   Introduzca un numero entero: \n ");
    scanf( "%d", &j );

    if ( j % 2 == 0 )
        printf( "\n   ES PAR" );
    else
        printf( "\n   ES IMPAR" );


	return 0;
}
