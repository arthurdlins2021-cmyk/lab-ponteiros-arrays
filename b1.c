/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 1: Maior e media de um vetor
 *
 * Objetivo:
 * Ler 5 numeros inteiros, identificar o maior valor
 * e calcular a media aritmetica dos elementos.
 *
 * Conceitos: vetores, lacos de repeticao e condicional.
 */
 
#include <stdio.h>

int main(void) {
    int v[5];
    int maior;
    int soma = 0;
    double media;

    printf("Digite 5 inteiros: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    maior = v[0];

    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    media = soma / 5.0;

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", media);

    return 0;
}