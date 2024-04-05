# Análise de Algoritmos

Prever recursos utilizados por um algoritmo escrito em uma pseudo-linguagem utilizando um modelo de computação para resolver um problema computacional.

## Modelo Random Acess Machine (RAM)

- Hierarquia de memória desprezada;
- Sequêncial
- Único Processador
- Operações Aritméticas +, -, *, /; relacionais < <= >= >
- Estruturas de controle: se, então, enquanto, for

## Problema da contagem

**Entrada:** uma sequência de n números A = <a1, a2, ..., an>

**Saída:** o número de valores iguais a zero. 

    1    couting(A, n)
    2        cont <- 0
    3        Para i <- 1 até n faca
    4            Se A[i] == 0 então
    5                cont <- cont + 1
    6        retorne cont

| Linha       | Custo       | #           |
|-------------|-------------|-------------|
| 2           | c1          | 1           |
| 3           | c2          | n + 1       |
| 4           | c3          | n           |
| 5           | c4          | t           |
| 6           | c5          | 1           |

T(n) = *custo de tempo do algoritmo com entrada n*

T(n) = c1 + c2 (n + 1) + c3 * n + c4 * t + c3

**Melhor caso:** t = 0, T(n) = c1 + c2 (n + 1) + c3 * n + c5

**Pior caso:** t = n, T(n) = c1 + c2 (n + 1) + c2 * n + c4 * n + c4

## Problema

**Entrada:** uma sequência de n números A = <a1, a2, ..., an> e um inteiro x.

**Saída:** primeiro indice i tal que A[i] == x se x aparecer no vetor, -1 caso contrário.

         busca(A, n, x)
    1    Para i <- 1 até n faca
    2        Se A[i] == x então
    3            retorne i
    4    retorne -1

| Custo       | Melhor caso | Pior caso   |
|-------------|-------------|-------------|
| c1          | 1           | n + 1       |
| c2          | 1           | n           |
| c3          | 1           | 0           |
| c4          | 0           | 1           |

**Melhor caso:** T(n) = c1 + c2 + c3    (**constante**)

**Pior caso:** T(n) = c1(n + 1) + c2 * n + c4   (**linear**)

## Ordenação

    insertion-sort(A, n)
    
        Para j <- 2 até n faca
            x <- A[j]
            i <- j - 1
            Enquanto i >= 1 e A[i] > x faca
                A[i + 1] <- A[i]
                i <- i - 1
            A[i + 1] <- x