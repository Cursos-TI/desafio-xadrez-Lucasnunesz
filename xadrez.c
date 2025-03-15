#include <stdio.h>

int main() {
    
    const int MOV_TORRE = 5;    
    const int MOV_BISPO = 5;   
    const int MOV_RAINHA = 8;   
    int contador;              

    
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (contador = 1; contador <= MOV_TORRE; contador++) {
        printf("Direita\n");    
    }
    printf("\n");              

    
    printf("Movimento do Bispo (5 casas diagonal cima-direita):\n");
    contador = 0;
    while (contador < MOV_BISPO) {
        printf("Cima, Direita\n");  
        contador++;
    }
    printf("\n");              

    
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    contador = 0;
    do {
        printf("Esquerda\n");   
        contador++;
    } while (contador < MOV_RAINHA);

    return 0;
}
