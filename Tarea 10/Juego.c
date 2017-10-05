#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j;
	int p;
	
	printf("INSTRUCCIONES \n Para jugar piedra papel o tijeras, deberas: \n Los jugadores 1 y 2, deberán introducir un número de entre 1 y 3 \n con base en los siguiente: \n");
	printf("1 es papel \n 2 es tijeras \n 3 es piedra \n");
	printf("Jugador 1, introduce tu numero: \n");
	scanf("%d", &j);
	printf("Jugador 2, introduce tu numero: \n");
	scanf("%d", &p);
	
	if ((j==1 && p==1)||(j==2 && p==2)||(j==3 && p==3)){
        
        printf("Empate");
    }
    
    if ((j==1 && p==2)||(j==2 && p==3)||(j==3 && p==1)){
        
        printf("Gana jugador 2");
    }
    
    if ((p==1 && j==2)||(p==2 && j==3)||(p==3 && j==1)){
        
        printf("Gana jugador 1");
    }
	
	return 0;
}
