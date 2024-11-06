//um algoritmo para obter n valores do usuário e exibir a quantidade de valores negativos (menores que zero), a quantidade de valores positivos (maiores que zero) e a quantidade de valores iguais a zero. A quantidade n de valores deve ser informada pelo usuário.
//entrada de dados: 3 int 
//saida de dados:print f saida dedados
//procesamento:um for 

#include <stdio.h>

int main() {//declaraçao de variaveis
    int n, i;        
    int negativos = 0, positivos = 0, zeros = 0;  
    int valor;         

    //entrada de dados
    printf("Digite a quantidade de valores a serem analisados: ");
    scanf("%d", &n);

    //procesamento
    for (i = 1; i <= n; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        
        if (valor < 0) {
            negativos++;  
        } else if (valor > 0) {
            positivos++;  
        } else {
            zeros++;    
        }
    }

    //saida de dados
    printf("\nResumo dos valores informados:\n");
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Quantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores iguais a zero: %d\n", zeros);

    return 0;
}
