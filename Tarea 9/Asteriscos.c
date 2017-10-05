#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// este programa permite imprimir el número de asteriscos que indique el usuario

int main(int argc, char *argv[]) {
	
	int j=0;
	int x=0;
	printf("Inserte un número, para que se impriman esa cantidad de asteriscos \n");
	scanf("%d",&j);
	for(x=1;x<=j;x=x+1){
		printf("*");
	}
	
	
	return 0;
}
