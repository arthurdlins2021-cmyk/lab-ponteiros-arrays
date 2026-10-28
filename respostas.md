# Lab prático — Ponteiros e Arrays (Unidade 5)

## 1. Por que a função `dobra` consegue alterar o vetor do `main` sem usar `return`?

Porque a função recebe um ponteiro para o primeiro elemento do vetor original. Assim, ela modifica diretamente os elementos na memória, sem precisar retornar outro vetor.

## 2. Qual é a diferença entre dois endereços consecutivos de `int`?

No meu ambiente, cada elemento consecutivo de `int` ocupa 4 bytes. Portanto, a diferença entre os endereços de dois elementos consecutivos é de 4 bytes.

**Observação:** devem ser inseridos aqui os dois endereços reais obtidos na execução do exercício 5.

## 3. O que o AddressSanitizer detectou e por que o erro poderia passar despercebido sem ele?

O AddressSanitizer detectou um `stack-buffer-overflow`, causado pela tentativa de escrever fora dos limites do vetor, em `v[10]`. Sem essa ferramenta, o erro poderia passar despercebido, corromper memória ou provocar um comportamento inesperado.