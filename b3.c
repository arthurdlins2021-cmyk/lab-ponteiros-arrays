/*
 * Lab Pratico - Ponteiros e Arrays (Unidade 5)
 * Exercicio 3: Inverter uma string sem strlen
 *
 * Objetivo:
 * Ler uma palavra, contar seus caracteres sem strlen
 * e imprimir a palavra de tras para frente.
 *
 * Conceitos: strings, vetores de caracteres e '\0'.
 */

#include <stdio.h>

int main(void) {
    char s[50];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", s);

    while (s[tamanho] != '\0') {
        tamanho++;
    }

    printf("Palavra invertida: ");

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}