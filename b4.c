/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 4: Soma de cada linha de uma matriz 3x3
 *
 * Objetivo:
 * Calcular e imprimir a soma dos elementos de cada
 * linha de uma matriz de inteiros.
 *
 * Conceitos: matrizes e lacos aninhados.
 */

#include <stdio.h>

int main(void) {
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        int soma = 0;

        for (int j = 0; j < 3; j++) {
            soma += m[i][j];
        }

        printf("Linha %d: %d\n", i, soma);
    }

    return 0;
}