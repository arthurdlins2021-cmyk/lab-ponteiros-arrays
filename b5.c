/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 5: Aritmetica de ponteiros
 *
 * Objetivo:
 * Imprimir os enderecos dos elementos de vetores
 * de int e double e observar o espacamento entre eles.
 *
 * Conceitos: enderecos, ponteiros, sizeof e %p.
 */

#include <stdio.h>

int main(void) {
    int v[4] = {10, 20, 30, 40};
    double d[4] = {1.1, 2.2, 3.3, 4.4};

    printf("Enderecos dos elementos de int:\n");

    for (int i = 0; i < 4; i++) {
        printf("v[%d]: %p\n", i, (void *)&v[i]);
    }

    printf("\nEnderecos dos elementos de double:\n");

    for (int i = 0; i < 4; i++) {
        printf("d[%d]: %p\n", i, (void *)&d[i]);
    }

    printf("\nTamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));

    return 0;
}