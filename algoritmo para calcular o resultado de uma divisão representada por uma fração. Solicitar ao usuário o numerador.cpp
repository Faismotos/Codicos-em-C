//algoritmo para calcular o resultado de uma divisão representada por uma fração. Solicitar ao usuário o numerador (termo superior da fração) e o denominador (termo inferior da fração) e, se o denominador for igual a zero, mostrar a mensagem “Erro: divisão por zero” e solicitar novamente somente o denominador. A divisão somente será realizada quando o usuário entrar com um denominador diferente de zero.
//entrada de dados:int,float um print e scanf
//saida de dados:print f mostrando resultado
//procesamento:dowhile
#include <stdio.h>

int main() {
    // declaração de variáveis
    int numerador, denominador;  
    float resultado;            

    //entrada de Dados
    printf("Digite o numerador (termo superior da fração): ");
    scanf("%d", &numerador);

    //solicita o denominador e verifica se é zero
    do {
        printf("Digite o denominador (termo inferior da fração): ");
        scanf("%d", &denominador);

        //verificar se o denominador é zero
        if (denominador == 0) {
            printf("Erro: divisão por zero! Tente novamente.\n");
        }
    } while (denominador == 0); //o loop continua enquanto o denominador for zero

    //processamento
    resultado = (float) numerador / denominador;

    // saída de Dados
    printf("O resultado da divisão %d / %d é: %.2f\n", numerador, denominador, resultado);

    return 0;
}
