//calcular quadrado de x e o cubo de x
//Entrada de dados: um numero inteiro (variavel x)
//Saida de dados: a numero ao quadrado e o numero ao cubo (variavel qx e cx)
//Processamento: Calcular o quadrado e o cubo utilizando a função pow(base,expoente)
//Casos de testes: enunciado do problema
// Para os números 2 e 3, o quadrado da soma é 25;
// Para os números 7 e 5, o quadrado da soma é 144. 

	#include <stdio.h>
	#include <math.h>
	int main(){
		//Seção de declaração de variaveis
		int x; //um numoero inteiro
		int qx; //quadrado do numero
		int cx; //cuvo do numero
		
		
		//Entradaa de dados
		printf("Digite um numero inteiro");
		scanf("%d",&x);
		
		//procesasamento
		qx = pow(x, 2);
		cx = pow(x, 3);
		
		//Saida de dados 
		 printf("O quadrado de %d é %d e o cubo de %d é %d\n", x, qx, x, cx);
		
		
		
	
	
	
	
	
	
}