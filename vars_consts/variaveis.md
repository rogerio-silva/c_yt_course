# Tipos de dados na Linguagem C
A linguagem C possui 5 tipos de dados básicos:
`char`, `int`, `float`, `double` e `void`.
Os tipos básicos representam os formatos de dados fundamentais que podem ser representados pela linguagem.

| **Tipo de dado** | **Descrição** | **Tamanho em bytes** |
| --- | --- | --- |
| `char` | representa os caracteres alfanuméricos | 1 byte |
| `int` | representa os números inteiros | 4 bytes |
| `float` | representa os números reais | 4 bytes |
| `double` | representa os números reais com maior precisão | 8 bytes |
| `void` | representa a ausência de tipo, ou o tipo nulo | 0 bytes |

Além dos tipos básicos, a linguagem C possui modificadores de tipo que alteram o tamanho e o comportamento dos tipos básicos. Os modificadores de tipo são `short`, `long`, `signed` e `unsigned`.

| **Modificador** | **Função** | Exemplo               |
| --- | --- |-----------------------|
| `short` | reduz pela metade o tamanho do tipo básico | `short int`: 2 bytes  |
| `long` | dobra o tamanho do tipo básico | `long int`: 8 bytes     |
| `signed` | torna o tipo básico com sinal | `signed int`: 4 bytes   |
| `unsigned` | torna o tipo básico sem sinal | `unsigned int`: 4 bytes |   

## Tipos escalares
Os tipos escalares são os tipos de dados que representam um único valor. Os tipos escalares são divididos em dois grupos: tipos aritméticos e tipos ponteiros.
### Tipos aritméticos
Os tipos aritméticos são os tipos de dados que representam números. Os tipos aritméticos são divididos em três grupos: inteiros, reais e complexos.
#### Números Inteiros
Os inteiros representam o conjunto dos números inteiros. Na linguagem C, os inteiros são divididos em dois grupos: inteiros com sinal e inteiros sem sinal. O tipo base dos inteiros é o `int`
+ int - 4 bytes
O tipo inteiro de base ocupa 4 bytes de memória para ser armazenados, o que significa que ele pode armazenar valores inteiros de -2.147.483.648 a 2.147.483.647.

Porque isso ocorre? O tipo básico `int` é um tipo de dados com sinal, o que significa que ele pode armazenar valores positivos e negativos. 
Os dados a serem armazenados em uma variável do tipo `int` são aqueles correspondentes às combinações de bits que podem ser representados.
Para descobrir os valores que podem ser armazenados em um tipo inteiro, é necessário entender como os números inteiros são representados em binário.

Por exemplo, considere que um tipo hipotético possa armazenar 4 bits de dados., neste caso quais seriam os valores possíveis:

| Decimal | Binário | Decimal | Binário |
| --- | --- | --- | --- | 
| 0 | 0000 | 8 | 1000 |
| 1 | 0001 | 9 | 1001 |
| 2 | 0010 | 10 | 1010 |
| 3 | 0011 | 11 | 1011 |
| 4 | 0100 | 12 | 1100 |
| 5 | 0101 | 13 | 1101 |
| 6 | 0110 | 14 | 1110 |
| 7 | 0111 | 15 | 1111 |

Dessa forma, o tipo de dados hipotético com 4 bits poderia armazenar valores de 0 a 15, ou seja 2^4 = 16 possíveis valores.

Mas considerando que o tipo de dados é com sinal, o primeiro bit é utilizado para representar o sinal do número, sendo 0 para positivo e 1 para negativo.
Dessa forma, o tipo de dados hipotético com 4 bits poderia armazenar valores de -8 a 7, ou seja 2^3 = 8 possíveis valores negativos e oito possíveis valores positivos.

Todavia, o tipo `int` é um tipo de dados de 4 bytes, ou seja de 32 bits, o que significa que ele pode armazenar 2e31 = 2.147.483.648 valores negativos e 2.147.483.647 valores positivos.

O tipo de dados `unsigned int` é um tipo de dados sem sinal, o que significa que ele pode armazenar apenas valores positivos. Dessa forma, o tipo de dados `unsigned int` pode armazenar valores de 0 a 4.294.967.295.

##### Modificadores do tipo inteiro
Os modificadores do tipo inteiro são os modificadores que alteram o tamanho do tipo inteiro. Os modificadores do tipo inteiro são `short`, `long` e `long long`.
+ `short int` - 2 bytes
+ `long int` - 8 bytes
+ `signed short int` - 2 bytes
+ `signed long int` - 8 bytes
+ `unsigned short int` - 2 bytes
+ `unsigned long int` - 8 bytes

### O tipo especial `char`
O tipo char é usado para armazenar caracteres. Um caracter é um símbolo (uma letra do alfabeto,
um dígito, um símbolo de pontuação, etc). Um char é armazenado em 1 byte de memória. Cada caracter é
associado com um valor entre 0 e 255. 

O compilador C faz a tradução para você, portanto você não precisa saber estes números. Em C , um caracter é representado entre apóstrofes (’). Por exemplo, ’C’, ’a’, ’5’, ’$’.
Note que ’5’ é um caracter, e não o inteiro 5.


### Números Reais
Os tipos de dados reais representam o conjunto de números reais .
Na linguagem C, os números reais são armazenados em duas partes: a mantissa e o expoente. Os números reais são armazenados de uma forma semelhante à notação exponencial.

Por exemplo, o número ``6.023 × 10e23`` é escrito como ``6.023e23``. Neste caso, a mantissa é ``6.023`` e o expoente ``23``.
Estes números são armazenados de uma forma padrão, tal que a mantissa tem apenas um dígito para
a esquerda do ponto decimal. Desta forma, ``3634.1`` é escrito como ``3.6341e3``, e ``0.0000341`` é escrito ``3.41e-5``. Note também que a precisão é limitada pela mantissa. Somente os 6 dígitos mais significativos são
armazenados

Os reais são representados pelos tipos de dados `float` e suas variações.
+ `float` - 4 bytes
+ `double` - 8 bytes
+ `long double` - 16 bytes
+ `float _Complex` - 8 bytes
+ `double _Complex` - 16 bytes
+ `long double _Complex` - 32 bytes
+ `float _Imaginary` - 4 bytes
+ `double _Imaginary` - 8 bytes
+ `long double _Imaginary` - 16 bytes

#### Números Complexos
Os números complexos complementam os tipos reais e são representados em linguagem C pelos tipos de dados `float _Complex`, `double _Complex` e `long double _Complex`. 
Os números complexos são representados por dois números reais, onde o primeiro número representa a parte real e o segundo número representa a parte imaginária.
Exemplo: 

```C
#include <complex.h>
#include <stdio.h>

int main() {
    // Declaração de números complexos
    float _Complex z1 = 1.0 + 3.0 * I;
    double _Complex z2 = 1.0 + 3.0 * I;
    long double _Complex z3 = 1.0 + 3.0 * I;
    
    // Impressão dos números complexos
    printf("Z1 = %.2f %+.2fi\n", creal(z1), cimag(z1));
    printf("Z2 = %.2f %+.2fi\n", creal(z2), cimag(z2));
    printf("Z3 = %.2f %+.2fi\n", creal(z3), cimag(z3));
    
    // Tamanho dos números complexos
    printf("Tamanho de Z1 = %lu bytes\n", sizeof(z1));
    printf("Tamanho de Z2 = %lu bytes\n", sizeof(z2));
    printf("Tamanho de Z3 = %lu bytes\n", sizeof(z3));
}
```
##### Número Complexo Conjugado
Dado um número complexo $z = a + bi$ (em que $a, b ∈ \real$), chama-se 
conjugado de $z$ ao número complexo $\overline{z}$ tal que  $\overline{z} = a - bi$. 
Assim, $z$ e $\overline{z}$ são complexos conjugados se têm partes reais iguais e 
partes imaginárias simétricas.
Em C, o conjugado de um número complexo é representado pela função `conj()`.
```C
#include <complex.h>
#include <stdio.h>

int main() {

    double complex z1 = 1.0 + 3.0 * I;
    double complex conjugado = conj(z1);
    printf("O conjugado de Z1 = %.2f %+.2fi\n", creal(conjugado), cimag(conjugado));

    return 0;
}
```
### Tipo de dados lógico
O tipo de dados lógico é um tipo de dados que representa os valores lógicos verdadeiro e falso.
O tipo de dados lógico é representado na linguagem C através do tipo de dados inteiro.
O valor 0 representa o valor lógico falso e qualquer outro valor inteiro representa o valor lógico verdadeiro.
    
```C
#include <stdio.h>
int main(){
    int opcao1 = 10;
    int opcao2 = 0;
    int opcao3 = -10;
    if (opcao1) {
        printf("Valor de opção 1 é Verdadeiro\n");
    } else {
        printf("Valor de opção 1 é Falso\n");
    }
    if (opcao2) {
        printf("Valor de opção 2 é Verdadeiro\n");
    } else {
        printf("Valor de opção 2 é Falso\n");
    }
    if (opcao3) {
        printf("Valor de opção 3 é Verdadeiro\n");
    } else {
        printf("Valor de opção 3 é Falso\n");
    }
    return 0;
}
```
** Obs.:
* O tipo de dados `bool` é um tipo de dados exclusivo do C++ e não é suportado pela linguagem C.
* A linguagem C na versão 'C99' introduziu o tipo de dados 'bool' na biblioteca 'stdbool.h'.

---

# Definição de _VARIÁVEIS_ em linguagem C
As variáveis são os elementos fundamentais de um programa em C. As variáveis são utilizadas para armazenar valores que podem ser utilizados em operações matemáticas, comparações, atribuições, etc.

Para declarar uma variável em C, é necessário especificar o tipo de dado que será armazenado na variável, o nome da variável e opcionalmete o valor inicial da variável.

Sintaxe: 
``tipo_dado nome_variavel [= valor_inicial];``


```C
unsigned short int idade;
unsigned short int outra_idade = 20;

idade = 36;
```

O nome da variável representa o identificador da variável, ou seja, **o nome que será utilizado para acessar o dado na memória**. (guarde bem essa informação, ela será bastante útil no futuro quando tratarmos dos ponteiros).

O nome da variável deve seguir as seguintes regras:
+ O nome da variável deve começar com uma letra ou um sublinhado.
+ O nome da variável pode conter letras, números e sublinhados.
+ O nome da variável não pode conter espaços em branco.
+ O nome da variável não pode ser uma palavra reservada da linguagem C.

---

# Definição de _CONSTANTES_ em linguagem C
As constantes são valores que não podem ser alterados durante a execução do programa. As constantes são utilizadas para armazenar valores que são conhecidos durante a compilação do programa.

A definição de uma constante declarada em C é feita utilizando a diretiva `#define` ou a palavra-chave `const`.

Sintaxe:
``#define nome_constante valor_constante``

```C
#define PI 3.14159
const int MAX = 100;
``` 

Obs.: Os valores representados no corpo do programa pelos numeros são considerados como constantes numéricas, pelos caracteres delimitados por aspas simples e pelas strings delimitadas por aspas duplas são considerados constantes literais.

Exemplos: 
Os valores ``33, 3.14159, 'A', "Olá mundo!"`` nas expressões abaixo são considerados constantes.
```C
if (a > 33) ...
b = 3.14159;
c = 'A';
printf("Olá mundo!");
```
Para enfatizar o óbvio, as constantes são valores que não podem ser alterados durante a execução do programa, no exemplo os valores de a, b e c podem mudar, porém os valores 33, 3.14159 e 'A' não podem ser alterados durante a execução do programa.