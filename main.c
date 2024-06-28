

#include <stdio.h>
#include "fib.h"



int main() {
    int n, fib;

    // Solicita que o usuário insira um número inteiro e positivo
    printf("Digite um numero (inteiro e positivo):\n");
    scanf("%i", &n);

    // Verifica se o número fornecido é positivo
    if (n < 1) {
        printf("Por favor, insira um numero inteiro e positivo.\n");
        return 1;  // Retorna código de erro
    }

    // Calcula o n-ésimo termo da sequência de Fibonacci
    fib = fibonacci(n);

    // Imprime o valor do termo na posição n
    printf("O valor do numero na posicao %i e igual a %i\n", n, fib);

    // Adição: Pergunta ao usuário se deseja ver a sequência até o termo fornecido
    char resposta;
    printf("Deseja ver a sequencia ate o valor da posicao que digitou? (s/n): ");
    scanf(" %c", &resposta);  // Espaço antes de %c para consumir a quebra de linha pendente

    if (resposta == 's' || resposta == 'n') {
        // Imprime a sequência até o termo fornecido
        sequencia(n);
    }

    return 0;
}
