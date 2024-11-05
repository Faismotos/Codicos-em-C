//algoritimo apresentar a tabuada do numero inteiro 
//entrada: printf pedindo o numero inteiro
//saida: mostrando o numero
//procesamento:uma estrutura de repetiçao do while	
#include <stdio.h>

int main() {
    int numero, i = 1; // declaração de variáveis
    
    // entrada
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // saída
    printf("Tabuada do %d\n", numero);
    
    // processamento utilizando do...while
       for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}

