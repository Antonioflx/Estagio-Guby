#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	/*
		3) Observe o trecho de c�digo abaixo: 
		int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);
	*/
	
	/*
		Esse codigo est� utilizando uma estrutura de repeti��o para fazer a SOMA receber a soma dos numeros.
	
		Entao,
		
		estrutura de repeti��o A condi��o -> Nesse caso ser� K < INDICE) { // Caso seja verdadeiro, o compilador ir� executar o bloco dentro dessa estrutura.
			K = K + 1; // -> Mesma coisa que K++;
			SOMA = SOMA + K; -> Mesma coisa que SOMA += K;
			
			/* O que vai acontecer. vai verificar se K < iNDICE // no come�o 1 < 12 -> Isso � verdadeiro, logo vai fazer o bloco
			->
				K = 1 + 1; K = 2;
				SOMA = 0 + 2; -> SOMA = 2;
				
				// Ap�s finalizar vai fazer a nova verifica��o
				
				K < INDICE -> 2 < 12 -> true, vai fazer o mesmo procedimento
				
				K = 2 + 1; K = 3;
				SOMA = 2 + 3; SOMA = 5;
				
				
				// Ap�s finalizar vai fazer a nova verifica��o
				
				K < INDICE -> 3 < 12 -> true, vai fazer o mesmo procedimento
				
				K = 3 + 1; K = 4;
				SOMA = 5 + 4; SOMA = 9;
				
				Assim por diante, no final, quando K chegar ao numero 12, atrav�s do incrimento -> SOMA vai receber a soma dos numeros
			*/
	//*/
	
		//	printf("%d", SOMA); -> Imrpimir o valor final.
	
	
	/* 
		OBSERVA��O:
			Nesse caso, levando em considera��o o uso da estrutura de repeti��o 
			-
			while (condi��o) {bloco}
			
			O c�digo est� errado, visto que o compilador faz primeiro o incremento , e depois faz a soma.
			Deveria primeiro fazer a soma, ap�s isso o incremento, para dar o valor correto.
	
	
		Dado o c�digo proposto pelo enunciado.
			O valor final da variavel SOMA = 77.
			
		Dado o c�digo corrigido pelo que eu acho -> compilador fazer a soma, ap�s isso o incremento.
			O valor final da variavel SOMA = 66. 
	*/
	
	return 0;
} 
