# Estruturas de controle
As estruturas de controle são responsáveis por controlar o fluxo de execução de um programa. 
Elas permitem que um programa execute diferentes ações dependendo de certas condições.

As estruturas de controle são divididas em três categorias:
- **Sequenciais**: são executadas uma após a outra, na ordem em que foram escritas.
- **Condicionais**: permitem que um programa execute diferentes ações dependendo de certas condições.
- **Repetitivas**: permitem que um programa execute a mesma ação várias vezes.

Além de outras estruturas de controle complementares, como:
- **De controle de exceções**: permitem que um programa trate situações excepcionais.

E podem ser observadas como:
- **Estruturas de controle de sequência**: são responsáveis por executar um bloco de código sequencialmente.
- **Estruturas de controle de fluxo**: são responsáveis por controlar o fluxo de execução de um programa.
- **Estruturas de controle de repetição**: são responsáveis por repetir a execução de um bloco de código.
- **Estruturas de controle de seleção**: são responsáveis por executar um bloco de código dependendo de uma condição.

Em linguagem C, as estruturas de controle são implementadas através de comandos específicos.

## Estutura de controle de sequência (modo básico de operação)
A estrutura de controle de sequência é responsável por executar um bloco de código sequencialmente, ou seja, um comando após o outro, na ordem em que foram escritos.
Nesta estrutura, o fluxo de execução do programa segue a ordem dos comandos, seguindo da esquerda para a direita e de cima para baixo.

### Esturutura básica de um programa em linguagem C
```c
// Cláusulas de inclusão de bibliotecas
#include <stdio.h>

// Cláusulas para definição de constantes
#define PI 3.14159

// Função principal
int main() {
    // Declaração de variáveis
    float raio, area;

    // Entrada de dados
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Processamento
    area = PI * raio * raio;

    // Saída de dados
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
```
Neste exemplo, o programa calcula a área de um círculo a partir do raio informado pelo usuário. O fluxo de execução do programa segue a ordem dos comandos, executando um após o outro.

## Estruturas de controle de fluxo
As estruturas de controle de fluxo são responsáveis por controlar o fluxo de execução de um programa, permitindo que um programa execute diferentes ações dependendo de certas condições.

### Estrutura condicional simples
A estrutura condicional simples é responsável por executar um bloco de código caso uma condição seja verdadeira.
```c
if (condicao) {
    // Bloco de código
}
```
Neste exemplo, o bloco de código é executado caso a condição seja verdadeira.

### Estrutura condicional composta
A estrutura condicional composta é responsável por executar um bloco de código caso uma condição seja verdadeira e outro bloco caso a condição seja falsa.
```c
if (condicao) {
    // Bloco de código 1
} else {
    // Bloco de código 2
}
```
Neste exemplo, o bloco de código 1 é executado caso a condição seja verdadeira, e o bloco de código 2 é executado caso a condição seja falsa.

### Estrutura condicional encadeada (aninhadas)
A estrutura condicional encadeada é responsável por executar um bloco de código caso uma condição seja verdadeira, outro bloco caso a primeira condição seja falsa e assim por diante.
```c
if (condicao1) {
    // Bloco de código 1
} else if (condicao2) {
    // Bloco de código 2
} else {
    // Bloco de código 3
}
```
Neste exemplo, o bloco de código 1 é executado caso a condição 1 seja verdadeira, o bloco de código 2 é executado caso a condição 1 seja falsa e a condição 2 seja verdadeira, e o bloco de código 3 é executado caso as condições anteriores sejam falsas.

## Estruturas de controle de seleção
As estruturas de controle de seleção são responsáveis por escolher qual bloco de código deverá ser executado dependendo de uma escolha de caso.
As seleções de casos são feitas através de uma expressão que é avaliada e comparada com os valores de cada caso. Em linguagem C, somente as expressões com resultados inteiros são permitidas.

```c
switch (expressao) {
    case valor1:
        // Bloco de código 1
        break;
    case valor2:
        // Bloco de código 2
        break;
    default:
        // Bloco de código 3
}
```
Neste exemplo, a expressão é avaliada e comparada com os valores de cada caso. Caso a expressão seja igual a um dos valores, o bloco de código correspondente é executado. Caso contrário, o bloco de código do caso padrão (default) é executado. Note que cada bloco é terminado com a instrução `break`.

Caso se deseje aninhar um caso para obrigatóriamente após a execução do seu anterior, basta não colocar o `break` no final do bloco de código.

## Exercícios de fixação

### Compare os algoritmos [algoritmo 1](./ex_resolvido_if.c) e  [algoritmo 2](./ex_resolvido_switch.c) e responda:

> Qual a diferença entre os dois algoritmos?

> Porque o mesmo problema pode ser resolvido de duas formas diferentes?

> Você consegue elaborar outra solução para o problema?

### Analise o exercício resolvido [aqui](./ex_resolvido_switch.c) e responda:

> Porque a condição do switch-case usa uma variável char ao inves de inteiro (como havia sido falado na aula)?

> RESPOSTA: Veja na página 58 do livro: [Linguagem C Completa e Descomplicada](../_books/pt-br/andré-backes-linguagem-c-completa-e-descomplicada-2022.pdf)