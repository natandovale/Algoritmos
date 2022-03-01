#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//*** Declaracoes de constantes ************************************************
#define TAM 10

//*** Prototipos de funcoes ****************************************************
void gerarVetor(int[], int);
void imprimirVetor(int[], int);
int pesquisaSequencial(int[], int, int);

//*** Bloco Principal **********************************************************
int main(void) {
	int vetor[TAM], valor;
	
	gerarVetor(vetor, TAM);
	imprimirVetor(vetor, TAM);
	
	printf("\nDigite o valor procurado: ");
	scanf("%d", &valor);
	
	printf("\nPesquisa sequencial --> %d", pesquisaSequencial(vetor, TAM, valor));
	
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


int pesquisaSequencial(int vet[], int n, int chave){
	int i = 0;
	while ((vet[i]) < chave && (i < n))
		i++;
	if((i < n) && (vet[i]==chave))
	    return i+1;
	return -1;
}
