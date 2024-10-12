
/*
	5) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. 
	Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. 
	Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?  

*/


/*
	3 interruptores (intA, intB, intC ) -> 3 lampadas (sala1, sala2, sala3).
	
	PASSOS:
	
	1) Ligar o intA;
	2) Esperar por bastante tempo, com o intuito de aquecer a lampada;
	3) Desligar o intA;
	4) Ligar o intB;
	5) Ir até a sala1; 
	6) Verificar a situação da lampada)
	
	7) Se estiver acessa {
		7.1) intB -> lampada da sala1;
		7.2) Voltar para a sala dos interruptores.
		7.2) Desligar o intB;
		7.3) Ligar o intA;
		7.4) Ir para a sala2; 
		7.5) Verificar a situação da lampada;
		
		7.6) Se estiver acessa {
			7.6.1) intA -> lampada da sala2;
			7.6.1) intC -> lampada da sala3;
		}
		
		7.7) Se nao {
			7.7.1) intA -> lampada da sala3;
			7.7.1) intC -> lampada da sala2;
		}
		
	}
	
	8) Se a lampada estiver apagada e quente {
		8.1) intA -> lampada da sala1;
		8.2) Ir para a sala2; // intB está ligado ainda.
		8.5) Verificar a situação da lampada;
		
		8.6) Se estiver acessa {
			8.6.1) intB -> lampada da sala2;
			8.6.1) intC -> lampada da sala3;
		}
		
		8.7) Se nao {
			8.7.1) intB -> lampada da sala2;
			8.7.1) intC -> lampada da sala3;
		}
	}
		
		
	9) Se a lampada estiver apagada e fria {
		9.1) intC -> lampada da sala1;
		9.2) Ir para a sala2; // intB está ligado ainda
		9.3) Verificar a situação da lampada;
		
		9.6) Se estiver acessa {
			8.6.1) intB -> lampada da sala2;
			8.6.1) intA -> lampada da sala3;
		}
		
		9.7) Se nao {
			9.7.1) intB -> lampada da sala2;
			9.7.1) intA -> lampada da sala3;
		}
		
	}
		
	*/
