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
		
		for(int atual = 0; atual < produtos.length; atual++) {
			int menor = buscaMenor(produtos, atual, produtos.length);
			Produto produtoAtual = produtos[atual];
			Produto produtoMenor = produtos[menor];
			produtos[atual] = produtoMenor;
			produtos[menor] = produtoAtual;
		}
		
		for(Produto produto : produtos) {
			System.out.println(produto.getNome() + " custa " + produto.getPreco());
		}

	}
	
	private static int buscaMenor(Produto[] produto, int inicio, int termino) {
		int maisBarato = inicio;
		for(int atual = inicio; atual < termino; atual++) {
			if(produto[atual].getPreco() < produto[maisBarato].getPreco()) {
				maisBarato = atual;
			}
		}
		return maisBarato;
	}

}
