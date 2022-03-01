#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(int[], int);

int main(int argc, char *argv[]) {
	return 0;
}

void bubbleSort(int vet[], int n){
	int bolha, borda, aux;
	
	for(borda = n-1; borda > 0; borda--){
		for(bolha=0; bolha<borda; bolha++){
		    if(vet[bolha] > vet[bolha + 1]){
			   aux = vet[bolha];//pega o atual
			   vet[bolha] = vet[bolha+1];
			   vet[bolha +1] = aux;
		    }
	   }
	}
	
}
