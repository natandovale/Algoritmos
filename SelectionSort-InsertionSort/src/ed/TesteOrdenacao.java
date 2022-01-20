package ed;

public class TesteOrdenacao {

	public static void main(String[] args) {
		
		Produto produtos[] = {
				new Produto("Lamborghini", 1000000),
				new Produto("jeep", 46000),
				new Produto("fusca", 16000),
				new Produto("smart", 460000),
				new Produto("gol", 17000)
		};
		
		ordena(produtos, produtos.length);
		InsertionSort(produtos, produtos.length);
		
		
		for(Produto produto : produtos) {
			System.out.println(produto.getNome() + " custa " + produto.getPreco());
		}
}
	
	private static void InsertionSort(Produto[] produtos, int quantidadeDeElementos) {
		for(int atual = 1; atual < quantidadeDeElementos; atual++) {
			int analise = atual;
			while(analise > 0 && produtos[analise].getPreco() < produtos[analise- 1].getPreco()) {
				Produto produtoAnalise = produtos[analise];
				Produto produtoAnaliseAnterior = produtos[analise - 1];
				produtos[analise] = produtoAnaliseAnterior;
				produtos[analise -1] = produtoAnalise;
				analise--;
			}
		}
	}

	private static void ordena(Produto[] produtos, int quantidadeElementos) {
		for(int atual = 0; atual < quantidadeElementos; atual++) {
			int menor = SelectionSort(produtos, atual, quantidadeElementos);
			Produto produtoAtual = produtos[atual];
			Produto produtoMenor = produtos[menor];
			produtos[atual] = produtoMenor;
			produtos[menor] = produtoAtual;
		}
	}

	private static int SelectionSort(Produto[] produto, int inicio, int termino) {
		int maisBarato = inicio;
		for(int atual = inicio; atual < termino; atual++) {
			if(produto[atual].getPreco() < produto[maisBarato].getPreco()) {
				maisBarato = atual;
			}
		}
		return maisBarato;
	}

}
