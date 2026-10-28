/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 2: Dobrar um vetor por referencia
 *
 * Objetivo:
 * Multiplicar cada elemento do vetor por 2,
 * modificando o vetor original por meio de um ponteiro.
 *
 * Conceitos: funcoes, ponteiros e passagem de arrays.
 */

#include <stdio.h>

void dobra(int *v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = v[i] * 2;
    }
}

int main(void) {
    int v[5] = {1, 2, 3, 4, 5};

    dobra(v, 5);

    printf("Vetor dobrado: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}