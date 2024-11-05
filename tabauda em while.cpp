//algoritimo apresentar a tabuada do numero inteiro 
//entrada: printf pedindo o numero inteiro
//saida: mostrando o numero
//procesamento:uma estrutura de repetiçao while	
#include <stdio.h>

int main() {
    int numero, i = 1; //declaraçao de vairavel
    
    // entrada
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // saida
    printf("Tabuada do %d\n", numero);
    
    // procesamento
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;  // Incrementa + 1
    }
    
    return 0;
}
