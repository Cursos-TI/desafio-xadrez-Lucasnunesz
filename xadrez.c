#include <stdio.h>

int main() {
    // Definindo as constantes para o movimento do cavalo
    const int MOVIMENTO_BAIXO = 2;    // Duas casas para baixo
    const int MOVIMENTO_ESQUERDA = 1; // Uma casa para esquerda
    
    // Variáveis para controle dos loops
    int contador_baixo = 0;
    int contador_esquerda = 0;

    // Movimento para baixo usando loop for
    for (contador_baixo = 0; contador_baixo < MOVIMENTO_BAIXO; contador_baixo++) {
        printf("Baixo\n");  // Imprime a direção do movimento
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // Movimento para esquerda usando loop while
    while (contador_esquerda < MOVIMENTO_ESQUERDA) {
        printf("Esquerda\n");  // Imprime a direção do movimento
        contador_esquerda++;
    }

    return 0;
}