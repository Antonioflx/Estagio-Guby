#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
	seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
	
	o que: Ler uma string e verificar se existe dentro dela o char 'A' ou 'a' e imprimir a quantidade de vezes.
	
*/


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int tam = 51, i;
	int check = 0, contador = 0;
	char frase[tam];
	
	printf("\nOBS: O tamanho da frase está limitada ao tamanho [50 caracteres]\n\n"); // 50 visto que o caractere 51 é o '\0';
	
	// Pedir ao usuario a frase.
	printf("\nDigite uma frase: ");
	fgets(frase, sizeof(frase), stdin);
	
	// Imprimir na tela a frase
	printf("\n%s", frase);
	
	// Criar um loop para verificar em cada indice se a frase digitada possui o caractere 'A' ou 'a'
	for(i = 0 ; i < strlen(frase); i++){
		if (frase[i] == 'A' || frase[i] == 'a') {
			check++;
			contador++;
		}
	}
	
	// fazer o check se existe ou não.
	if(check) 
		printf("\nNa frase que você digitou existe a letra [A,a], ela apareceu %d vezes\n", contador);
	else
		printf("\nNa frase que você digitou nao existe a letra [A,a]\n");
	// codigo
	return 0;
} 
