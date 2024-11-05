	//obter o tempo de duração de um evento expresso em segundos e mostrá-lo expresso em horas minutos e segundos
	//Entrada de dados:o valor dos segundos 
	//Saida de dados: resultado dos 3 vairiaveis
	//Processamento: a conversao de segundos para horas,minutos e segundos
	//Casos de testes: 
		#include <stdio.h>

		int main() {
   			 // Declarando as variáveis
    		int segundos, horas, minutos, resto;

		    // Entrada de dados
		    printf("Digite o número total de segundos: ");
		    scanf("%d", &segundos);
		
		    // Processamento: 
		    horas = segundos / 3600;            // Calcula o número de horas
		    resto = segundos % 3600;            // Obtém o restante dos segundos após subtrair as horas
		    minutos = resto / 60;               // Calcula o número de minutos
		    segundos = resto % 60;              // O que sobra são os segundos
		
		    // Saída de dados
		    printf("O tempo total é: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
		
		    
}

		