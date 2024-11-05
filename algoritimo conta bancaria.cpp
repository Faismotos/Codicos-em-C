//Elabore um algoritmo que solicite o número da conta, saldo, tipo de operação (1 para depósito, 2 para retirada) e valor da operação
//entrada de dados:2 intm 3 float
//procesamento:calcula os valores e da o resultado

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numeroConta;         // Armazena o número da conta
    int tipoOperacao;       // Armazena o tipo de operação (1 ou 2)
    float saldo;            // Armazena o saldo atual da conta
    float valorOperacao;    // Armazena o valor da operação
    float saldoNovo;        // Armazena o saldo após a operação

    // Entrada de dados
    printf("Digite o número da conta: "); // solicita o número da conta
    scanf("%d", &numeroConta);
    
    printf("Digite o saldo da conta: "); // solicita o saldo da conta
    scanf("%f", &saldo);
    
    printf("Digite o tipo (1 para deposito, 2 para retirada): "); // solicita o tipo de operação
    scanf("%d", &tipoOperacao);
    
    printf("Digite o valor da operação: "); // solicita o valor da operação
    scanf("%f", &valorOperacao);

    // Processamento:
    if (tipoOperacao == 1) { // Se for depósito
        saldoNovo = saldo + valorOperacao; // calcula o saldo novo
        printf("\nNúmero da conta: %d", numeroConta);
        printf("\nSaldo anterior: %.2f", saldo);
        printf("\nOperação: Depósito");
        printf("\nValor da operação: %.2f", valorOperacao);
        printf("\nSaldo novo: %.2f", saldoNovo);
    } 
    else if (tipoOperacao == 2) { // Se for retirada
        if (valorOperacao > saldo) { // verifica se a retirada é > que o saldo
            printf("\nNúmero da conta: %d", numeroConta);
            printf("\nSaldo anterior: %.2f", saldo);
            printf("\nOperação: Retirada");
            printf("\nValor da operação: %.2f", valorOperacao);
            printf("\nSaldo insuficiente para a retirada."); // erro
        } else {
            saldoNovo = saldo - valorOperacao; // Calcula o saldo novo
            printf("\nNúmero da conta: %d", numeroConta);
            printf("\nSaldo anterior: %.2f", saldo);
            printf("\nOperação: Retirada");
            printf("\nValor da operação: %.2f", valorOperacao);
            printf("\nSaldo novo: %.2f", saldoNovo);
        }
    } 
    else { // Caso o tipo de operação seja inválido
        printf("Tipo de operação inválido.\n");
    }

    return 0; // Finaliza o programa
}
