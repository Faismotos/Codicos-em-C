#include <stdio.h>

int main() {
    int n, i = 0;

    // Pedir um número ao usuário
    printf("Digite um número: ");
    scanf("%d", &n);

    // Enquanto i for menor ou igual a n, mostrar i e aumentar i
    while (i <= n) {
        printf("%d ", i);
        i++;  // Aumenta i de 1 em 1
    }

    printf("\n");  // Nova linha no final
    return 0;
}
