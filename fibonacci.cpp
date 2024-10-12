#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e 
	o próximo valor sempre será a soma dos 2 valores anteriores 
	(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
	escreva um programa na linguagem que desejar onde, informado um número, 
	ele calcule a sequência de Fibonacci e retorne uma mensagem, 
	avisando se o número informado pertence ou não a sequência.


	O que: Pedir um num ao usuário -> Após Informar, verificar se o numero
	do usuário está presente na sequencia de Fibonacci.
*/


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int tam = 20;
	int ant = 0, suc = 1, soma, i, check = 0, valor, numbers[tam];
	
	// pedir ao usuario um num inteiro e verificar se está na sequencia
	
	printf("\nOBS: O tamanho da sequência está limitada ao tamanho [20]\n\n");
	
	printf("\nInforme um valor inteiro: ");
	scanf("%d", &valor);
	
	/* 
		Ant começa com 0.
		Suc = começa com 1.
		
		Fazer um loop para atribuir os valores para suc e ant
		
		soma = suc + ant; ->  Soma entre o antecessor + sucessor.
		ant = suc; -> o antecessor vai ser o sucessor antigo.
		suc = soma; -> O novo sucessor vai ser a soma entre o suc + ant;
		e imprimir na tela.
	
	*/
	
	// imprimir o ant = 0 e suc = 1;
	printf("\n%d, %d, ", ant, suc);
	
	for (i = 0; i < tam; i++){
		soma = ant + suc;
		ant = suc;
		suc = soma;
		printf("%d, ", suc);
		
		// Atribuir os valores do suc para uma array.
		numbers[i] = suc;
		
	}
						
	printf("\n");
	for (i = 0; i < tam; i++) {
		if(numbers[i] == valor || valor == 0) {
			check = 1;
			break;
		}
	}
	
	// fazer o check se ele pertence ou nao a essa sequencia de tamanho 20.
	if(check) 
		printf("\nO numero %d pertence a sequência de Fibonacci", valor);
	else 
		printf("\nO numero %d não pertence a sequência de Fibonacci", valor);
	
	return 0;
} 


