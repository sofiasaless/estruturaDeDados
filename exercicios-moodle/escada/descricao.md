# Escada

Ao subir a escada de seu prédio, José às vezes sobe três degraus de uma vez e às vezes sobe um de cada vez. Dado uma escada com n degraus de quantas maneiras diferentes José pode subir essa escada. Para resolver esse problema, vamos pensar nos casos menores:

- Uma escada de 1 degrau, podemos subir as escadas de 1 maneira (1).
- Uma escada de 2 degrau, podemos subir as escadas de 1 maneiras ((1,1)).
- Uma escada de 3 degraus, podemos subir as escadas de 2 maneiras ((1,1,1),(3)).

Seja x_n número de maneira de subir uma escada de n degraus. O primeiro passo para subir uma escada de n degraus pode ser dado de duas maneiras:

- Se você subir apenas um degrau, então teremos x_{n-1} maneiras de subir o restante da escada.
- Se você subir três degraus, então teremos x_{n-3} maneiras de subir o restante da escada.

A recorrência para x_n será:

![Imagem](https://latex.codecogs.com/png.latex?%5Cdisplaystyle%20%0Ax_n%20%3D%20%5Cbegin%7Bcases%7D%0A1%20%26%20n%20%3D%201%5C%5C%0A1%20%26%20n%20%3D%202%5C%5C%20%0A2%20%26%20n%20%3D%203%5C%5C%0Ax_%7Bn-1%7D%20%2B%20x_%7Bn-3%7D%20%26%20n%20%3E%203%5C%5C%0A%5Cend%7Bcases%7D%0A)


**Entrada**

A entrada é composta por uma única linha contendo um inteiro n representando o número de degraus da escada

**Saída**

A saída é composta por uma única linha contendo o número de maneiras que uma escada com n degraus pode ser subida saltando 1 ou 3 degraus por vez.

**Exemplo de Entrada**

    4

**Exemplo de Saída**

    3