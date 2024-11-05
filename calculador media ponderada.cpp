//calcular a media ponderada de tres notas de um aluno
//Entrada de dados:3 float e uma variavel com resltado
//Saida de dados: a media das 3 notas
//Processamento: (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3)
//Casos de testes: 
	#include <stdio.h>
	int main(){
		//declarando as variaveis
	 	float nota1, nota2, nota3; // Entrada
   	 	float peso1 = 2, peso2 = 3, peso3 = 5; // Pesos das notas
    	float media;//media
		//Entrada de dados
		printf ("Digite a primeira nota");
		scanf ("%f",&nota1);
		
		
		printf ("Digite a segunda nota");
		scanf ("%f",&nota2);
		
		printf ("Digite a teceira nota");
		scanf ("%f",&nota3);
		
		//procesamento
		media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
		
		//Saida dos dados
		printf("A media ponderada e: %.2f\n", media);
		
		
		
		
		
		
		
		
		
	}