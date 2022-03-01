#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//*** Declaracoes de constantes ************************************************
#define TAM 10

//*** Prototipos de funcoes ****************************************************
void gerarVetor(int[], int);
void imprimirVetor(int[], int);
int pesquisaBinaria(int[], int, int);

int main(void) {
	int vetor[TAM], valor;
	
	gerarVetor(vetor, TAM);
	imprimirVetor(vetor, TAM);
	
	printf("\nDigite o valor procurado: ");
	scanf("%d", &valor);
	
	printf("\nPesquisa binaria --> %d", pesquisaBinaria(vetor, TAM, valor));
	
	return 0;
}

void gerarVetor(int vet[], int n) {
	int i, aux=0;
	srand(time(NULL));
	for (i=0; i<n; i++) {
		aux += (rand()%10) + 1;
		vet[i] = aux;
	}
}

void imprimirVetor(int vet[], int n) {
	int i;
	for (i=0; i<n; i++)
		printf("%d = %d\n", i+1, vet[i]);
}

int pesquisaBinaria(int vetor[], int n, int chave){
	int ini = 0, meio, fim = n - 1;
	
	while(ini <= fim){
		meio = (ini + fim) / 2;
		if(vetor[meio] == chave)
		    return meio + 1;	
		if(chave > vetor[meio])
		    ini = meio + 1;
		else
		    fim = meio -1;	
	}
	return -1;
}
