//algoritmo para obter um valor qualquer e depois perguntar ao usuário se este valor está em dólares ou em reais e converter para dolares em reais ou o inverso
//entrada de dados: 3 floats e 1 char 
//saida de dados:o resultado do algoritimo
//processo:pegar as variaveis e converter
#include <stdio.h>

int main() {
    // Declaração de variáveis
    float valor, cotacao, valorConvertido;
    char moeda;

    // Entrada dos dados
    printf("Digite o valor para converter: ");//pergunta o valor para converter
    scanf("%f", &valor);

    printf("Esse valor está em Dólares (D) ou Reais (R)? Digite 'D' para Dólares ou 'R' para Reais: ");
    scanf(" %c", &moeda); // Pergunta se o valor está em dólares ou Reais

    printf("Digite a cotação atual do dólar: "); // Solicita a cotação do dólar
    scanf("%f", &cotacao);

    // Processo de conversão
    if (moeda == 'D' || moeda == 'd')
        // Conversão de Dólares para Reais
        valorConvertido = valor * cotacao,
        printf("O valor de %.2f dólares em reais é: R$ %.2f\n", valor, valorConvertido);
    else if (moeda == 'R' || moeda == 'r')
        // Conversão de Reais para Dólares
        valorConvertido = valor / cotacao,
        printf("O valor de R$ %.2f em dólares é: $ %.2f\n", valor, valorConvertido);
    else
        // Caso o usuário insira um valor inválido
        printf("Erro: Opção de moeda inválida. Por favor, digite 'D' para Dólares ou 'R' para Reais.\n");

    return 0; // Retorna o fim do algoritmo
}
