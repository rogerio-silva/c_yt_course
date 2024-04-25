# Operadores e Expressoes
## Valores e tipos de dados
Os valores são representações de dados, como números, textos, etc.

Os tipos de dados são classificações de valores, como inteiros, reais, caracteres, etc.

### Valores inteiros (constantes inteiras)
Os valores inteiros são números inteiros, como -1, 0, 1, 2, 3, etc.
### Valores reais (constantes reais)
Os valores reais são números com parte decimal, como -1.0, 0.0, 1.0, 2.0, 3.0, etc.
### Valores lógicos (constantes lógicas)
Os valores lógicos são verdadeiro (1) ou falso (0).
Notem que em C, o valor 0 é considerado falso e qualquer outro valor é considerado verdadeiro.
### Valores de caracteres (constantes de caracteres)
Os valores de caracteres são letras, números, símbolos, etc.
Os valores de caracteres são representados entre aspas simples, como 'a', 'b', 'c', etc.
### Valores de cadeias de caracteres (constantes de cadeias de caracteres)
Os valores de cadeias de caracteres são sequências de caracteres, como "Hello, World!".


## Operadores

Operadores são símbolos que representam operações sobre variáveis e valores. 
Eles são usados para realizar operações matemáticas, lógicas e de comparação.

### Operadores Aritméticos
Os operadores aritméticos são usados para realizar operações matemáticas em variáveis e valores.
Os operadores aritméticos são:
- Adição (+)
- Subtração (-)
- Multiplicação (*)
- Divisão (/)
- Módulo (%)

Note que o operador de módulo (%) retorna o resto da divisão entre dois números, 
e que a divisão (/) entre dois números inteiros resulta em um número inteiro, 
enquanto caso um dos operandos seja um número real, o resultado será um número real.

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float c = 10.0, d = 3.0;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    printf("c / d = %f\n", c / d);

    return 0;
}
```
### Operadores Lógicos
Os operadores lógicos são usados para realizar operações lógicas em variáveis e valores.
Os operadores lógicos são:
- E lógico (&&)
- OU lógico (||)
- Negação lógica (!)

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 1, b = 0;

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);

    return 0;
}
```

### Operadores relacionais
Os operadores relacionais são usados para comparar valores.
Os operadores relacionais são:
- Igual a (==)
- Diferente de (!=)
- Maior que (>)
- Menor que (<)
- Maior ou igual a (>=)
- Menor ou igual a (<=)

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}
```

### Operador de atribuição
O operador de atribuição é usado para atribuir um valor a uma variável.
O operador de atribuição é o sinal de igual (=).

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10;

    printf("a = %d\n", a);

    return 0;
}
```

### Operadores de incremento e decremento (unários)
Os operadores de incremento e decremento são usados para incrementar e decrementar variáveis em uma unidade.
Os operadores de incremento e decremento são:
- Incremento (++): O operador de incremento (++) incrementa a variável em uma unidade.
- Decremento (--): O operador de decremento (--) decrementa a variável em uma unidade.
- Pós-incremento (a++): O pós-incremento incrementa a variável após a execução da instrução.
- Pós-decremento (a--): O pós-decremento decrementa a variável após a execução da instrução.
- Pré-incremento (++a): O pré-incremento incrementa a variável antes da execução da instrução.
- Pré-decremento (--a): O pré-decremento decrementa a variável antes da execução da instrução. 
Nota: O operador de incremento e decremento só pode ser aplicado a variáveis.

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10;

    printf("a = %d\n", a);
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);
    printf("a-- = %d\n", a--);
    printf("a = %d\n", a);
    printf("--a = %d\n", --a);
    printf("a = %d\n", a);

    return 0;
}
```

### Operadores de atribuição composta
Os operadores de atribuição composta são usados para realizar operações aritméticas e atribuir o resultado a uma variável.
Os operadores de atribuição composta são:
- Adição e atribuição (+=): a += b é equivalente a a = a + b.
- Subtração e atribuição (-=): a -= b é equivalente a a = a - b.
- Multiplicação e atribuição (*=): a *= b é equivalente a a = a * b.
- Divisão e atribuição (/=): a /= b é equivalente a a = a / b.
- Módulo e atribuição (%=): a %= b é equivalente a a = a % b.

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a = %d\n", a);
    a += b;
    printf("a += b: %d\n", a);
    a -= b;
    printf("a -= b: %d\n", a);
    a *= b;
    printf("a *= b: %d\n", a);
    a /= b;
    printf("a /= b: %d\n", a);
    a %= b;
    printf("a %%= b: %d\n", a);

    return 0;
}
```

### Precedência de operadores
A precedência de operadores determina a ordem em que as operações são realizadas.
Os operadores com maior precedência são avaliados primeiro.

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    printf("a + b * c = %d\n", a + b * c);
    printf("(a + b) * c = %d\n", (a + b) * c);

    return 0;
}
```

A lista de precedência de operadores em C é a seguinte:
1. Parênteses ()
2. Incremento (++) e Decremento (--)
3. Multiplicação (*), Divisão (/) e Módulo (%)
4. Adição (+) e Subtração (-)
5. Relacionais (==, !=, >, <, >=, <=)
6. Lógico E (&&)
7. Lógico OU (||)
8. Atribuição (=)

## Expressões
Uma expressão é uma combinação de valores, variáveis e operadores que são avaliados para produzir um resultado.

### Expressões aritméticas
As expressões aritméticas são combinações de valores, variáveis e operadores aritméticos que são avaliados para produzir um resultado numérico.

### Expressões lógicas
As expressões lógicas são combinações de valores, variáveis e operadores lógicos que são avaliados para produzir um resultado lógico (verdadeiro ou falso).

### Expressões relacionais
As expressões relacionais são combinações de valores, variáveis e operadores relacionais que são avaliados para produzir um resultado lógico (verdadeiro ou falso).

#### Exemplos
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    // Exemplos de expressões aritméticas
    printf("a + b * c = %d\n", a + b * c);
    printf("(a + b) * c = %d\n", (a + b) * c);
    // Exemplos de expressões lógicas
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
    // Exemplos de expressões relacionais
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);

    return 0;
}
```

### Operação de curto-circuito em expressões lógicas e relacionais
A operação de curto-circuito é uma técnica usada para melhorar a eficiência de expressões lógicas e relacionais.
Quando uma expressão lógica ou relacional é avaliada, o resultado é conhecido assim que um dos operandos determina o resultado final.
Por exemplo, na expressão a && b, se a for falso, o resultado da expressão será falso, independentemente do valor de b.

#### Exemplo
```c
#include <stdio.h>

int main() {
    int a = 0, b = 10;

    if (a && b) {
        printf("a && b: Verdadeiro\n");
    } else {
        printf("a && b: Falso\n");
    }

    if (a || b) {
        printf("a || b: Verdadeiro\n");
    } else {
        printf("a || b: Falso\n");
    }

    return 0;
}
```

