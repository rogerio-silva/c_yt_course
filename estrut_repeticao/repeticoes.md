# Estruturas de repetição
As estruturas de repetição são responsáveis por executar um bloco de código várias vezes, 
enquanto uma condição for verdadeira. 

Existem três tipos de estruturas de repetição em C: `for`, `while` e `do while`.
  * Laços contados
  * Laços com interrupção no início
  * Laços com interrupção no final

## Estrutura de repetição `for` 
Repetição por laços contados. Sao aquelas que iteram um número fixo e pré-determinado de vezes.

```c
for (inicialização; condição; incremento) {
    // Bloco de código
}
```
Neste exemplo, a inicialização é executada uma única vez, após iniciar o laço, a condição é verificada para 
garantir que o bloco de código possa ser executado, caso seja verdadeira, o bloco de código é executado e
em seguida o incremento é executado. Em seguida a condição é verificada novamente e o processo se repete 
até que a condição seja falsa, ou seja, a contagem alcance o valor final.

## Estrutura de repetição `while`
Repetição com interrupção no início. São aquelas que iteram um número indeterminado de vezes.

```c
while (condição) {
    // Bloco de código
}
```
Neste exemplo, a condição é verificada antes de executar o bloco de código. Caso a condição seja verdadeira,
o bloco de código é executado. Após a execução do bloco de código, a condição é verificada novamente e o
processo se repete até que a condição seja falsa.

## Estrutura de repetição `do while`
Repetição com interrupção no final. São aquelas que também iteram um número indeterminado de vezes.

```c
do {
    // Bloco de código
} while (condição);
```
Neste exemplo, o bloco de código é executado uma vez antes de verificar a condição. Caso a condição seja
verdadeira, o bloco de código é executado novamente e o processo se repete até que a condição seja falsa.

As execuçãos dos laços de repetição podem ser controladas por comandos de interrupção, como `break` e `continue`.
* `break`: interrompe a execução do laço de repetição.
* `continue`: interrompe a execução do bloco de código atual e passa para a próxima iteração.

As principais diferenças entre as estruturas de repetição são:
* A estrutura `for` é utilizada quando se sabe o número de iterações que o laço deve executar.
* A estrutura `while` e `do while` são utilizadas quando o número de iterações é desconhecido.
* A estrutura `while` é utilizada quando se deseja que o bloco de código **somente** seja executado no caso 
em que enquanto a condição seja verdadeira, isto pode implicar em **nenhuma** iteração.
* A estrutura `do while` é utilizada quando se deseja que o bloco de código seja executado **pelo menos uma vez**.

## Exemplos

### Exemplo `for`
```c
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```
Neste exemplo, o programa imprime os números de 0 a 4, observe que a variável i é inicializada com o valor 0,
que a condição garante que `i<5` e a contagem é realizada de um em um.

### Exemplo `while`
```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```
Aqui, o algoritmo realiza a mesma operação do exemplo anterior, porém utilizando a estrutura de repetição `while`.
Observe que as etapas de inicialização e o incremento são realizadas de forma independente do comando `while`.
O resultado é o mesmo do exemplo anterior.

### Exemplo `do while`
```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
```
Neste exemplo, o programa imprime os números de 0 a 4, assim como nos exemplos anteriores. 
A diferença é que o bloco de código é executado pelo menos uma vez antes da verificação da
condição, que só é verificada após a execução do bloco de código.
O resultado é o mesmo dos exemplos anteriores.
