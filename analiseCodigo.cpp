#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	/*
		3) Observe o trecho de código abaixo: 
		int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
	*/
	
	/*
		Esse codigo está utilizando uma estrutura de repetição para fazer a SOMA receber a soma dos numeros.
	
		Entao,
		
		estrutura de repetição A condição -> Nesse caso será K < INDICE) { // Caso seja verdadeiro, o compilador irá executar o bloco dentro dessa estrutura.
			K = K + 1; // -> Mesma coisa que K++;
			SOMA = SOMA + K; -> Mesma coisa que SOMA += K;
			
			/* O que vai acontecer. vai verificar se K < iNDICE // no começo 1 < 12 -> Isso é verdadeiro, logo vai fazer o bloco
			->
				K = 1 + 1; K = 2;
				SOMA = 0 + 2; -> SOMA = 2;
				
				// Após finalizar vai fazer a nova verificação
				
				K < INDICE -> 2 < 12 -> true, vai fazer o mesmo procedimento
				
				K = 2 + 1; K = 3;
				SOMA = 2 + 3; SOMA = 5;
				
				
				// Após finalizar vai fazer a nova verificação
				
				K < INDICE -> 3 < 12 -> true, vai fazer o mesmo procedimento
				
				K = 3 + 1; K = 4;
				SOMA = 5 + 4; SOMA = 9;
				
				Assim por diante, no final, quando K chegar ao numero 12, através do incrimento -> SOMA vai receber a soma dos numeros
			*/
	//*/
	
		//	printf("%d", SOMA); -> Imrpimir o valor final.
	
	
	/* 
		OBSERVAÇÃO:
			Nesse caso, levando em consideração o uso da estrutura de repetição 
			-
			while (condição) {bloco}
			
			O código está errado, visto que o compilador faz primeiro o incremento , e depois faz a soma.
			Deveria primeiro fazer a soma, após isso o incremento, para dar o valor correto.
	
	
		Dado o código proposto pelo enunciado.
			O valor final da variavel SOMA = 77.
			
		Dado o código corrigido pelo que eu acho -> compilador fazer a soma, após isso o incremento.
			O valor final da variavel SOMA = 66. 
	*/
	
	return 0;
} 
