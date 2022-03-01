#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}

void insertionSort(int vet[], int n){
	int parte, elemento, aux;
	
	for(parte = 1; parte < n; parte++){
		elemento = vet[parte];
		
		aux = parte - 1;
		
		//fazendo o deslocamento
		while((aux >= 0) && (vet[aux] > elemento)){
			vet[aux+1] = vet[aux];
			aux--;
		}
		//trocando
		vet[aux+1] = elemento;
	}
}
