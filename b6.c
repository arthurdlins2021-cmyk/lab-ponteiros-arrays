/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 6: Acesso fora dos limites de um vetor
 *
 * Objetivo:
 * Demonstrar um acesso invalido a um vetor e utilizar
 * o AddressSanitizer para tentar detectar o erro.
 *
 * Conceitos: limites de arrays e seguranca de memoria.
 *
 * Observacao: o acesso invalido e intencional.
 */

#include <stdio.h>

int main(void) {
    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = i;
    }

    printf("Tentando escrever fora dos limites...\n");

    v[10] = 100;  // Acesso invalido intencional

    printf("Valor escrito: %d\n", v[10]);

    return 0;
}