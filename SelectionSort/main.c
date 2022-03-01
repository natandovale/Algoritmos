#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	return 0;
}

void selectionSort(int vet[], int n){
	int bolha, borda, aux, maior;
	
	for(borda = n-1; borda > 0; borda--){
		maior = 0;
		for(bolha=0; bolha<borda; bolha++){
		    if(vet[bolha] > vet[maior]){
			   maior = bolha;
		    }
		    aux = vet[borda]; 
			vet[borda] = vet[maior];
			vet[maior] = aux;
	   }
	}
	
}
