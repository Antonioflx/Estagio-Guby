#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	4) Descubra a lógica e complete o próximo elemento:
	a) 1, 3, 5, 7, ___
	b) 2, 4, 8, 16, 32, 64, ____
	c) 0, 1, 4, 9, 16, 25, 36, ____
	d) 4, 16, 36, 64, ____
	e) 1, 1, 2, 3, 5, 8, ____
	f) 2,10, 12, 16, 17, 18, 19, ____

*/

int main() {
	
	
	/*
		4) Descubra a lógica e complete o próximo elemento:
	a) 1, 3, 5, 7, [9] -> O sucessor vai ser a soma do numero anterior com  2; sucessor = antecessor + 2;
	
	b) 2, 4, 8, 16, 32, 64, [128] -> O sucessor vai ser a multiplicação do numero anterior com 2; sucessor = antecessor * 2;
	
	c) 0, 1, 4, 9, 16, 25, 36, [49] -> O sucessor vai ser o quadrado do numero inteiro consecutivo. -> 7x7 = 49.
	
	d) 4, 16, 36, 64, [100] -> O sucessor vai ser o quadrado de numeros páres consecutivos.
	-> 
		1) 2 * 2 = 4; 
		2) 4 * 4 = 16; 
		3) 6 * 6 = 36;  
		4) 8 * 8 = 64; 
		5) 10 * 10 = 100; 
	
	e) 1, 1, 2, 3, 5, 8, [13] -> Sequencia de fibonnaci. O proximo numero vai ser a soma dos dois valores anteriores -> 5 + 8 = 13.
	
	f) 2,10, 12, 16, 17, 18, 19, [200] -> Sequencia de numeros que começa com a letra D
	
	*/
	
	
	
	return 0;
} 


