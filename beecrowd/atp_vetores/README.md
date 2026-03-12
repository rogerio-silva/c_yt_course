# Soluções Beecrowd - Pasta atp_vetores

## 📋 Resumo das Soluções

### 1. Beecrowd 3306 - Consulta e Alteração
**Arquivo:** `bee_3306_consulta_alteracao.cpp`

**Problema:**
- Manipular um vetor com duas operações:
  - Tipo 1: Somar um valor V em todas as posições de um intervalo [A, B]
  - Tipo 2: Retornar o MDC de todos os elementos em um intervalo [A, B]

**Solução:**
- Usa função `gcd()` (Algoritmo de Euclides) para calcular MDC
- Função `calcularMDC()` para aplicar MDC em um intervalo
- Simula múltiplos casos de teste com operações sequenciais

**Complexidade:**
- Query tipo 1: O(B - A)
- Query tipo 2: O((B - A) * log(max_valor))

**Testes:**
- ✅ Exemplo 1: Saída correta (4, 1, 7)
- ✅ Exemplo 2: Saída correta (2)

---

### 2. Beecrowd 3255 - A Vez do Primo
**Arquivo:** `bee_3255_solution.cpp`

**Problema:**
- Três jogadores (Odd, Even, Ingmariay) em um jogo onde:
  - Começam com número N
  - Cada turno: adicionar 1 OU dividir por um primo
  - Objetivo: chegar a 1
  - Pontuação: menor número reivindicado por cada jogador
  - Todos jogam otimamente (minimizam própria pontuação)

**Solução:**
- **Abordagem:** Minimax recursiva
- **Funções principais:**
  - `getDivisoresPrimos()`: Fatora um número e retorna divisores primos
  - `jogar()`: Recursão com memoização para simular o jogo
  
**Estratégia:**
- Cada jogador explora TODAS as possibilidades futuras
- Escolhe a ação que minimiza sua pontuação final
- Em caso de empate, prefere o menor número (critério de desempate)
- Limite de profundidade: 25 (para evitar ciclos infinitos)

**Complexidade:**
- Tempo: O(branches^depth) com profundidade máxima 25
- Espaço: O(depth) para stack + memoização

**Testes:**
- ✅ Exemplo 1: O 4 → (2, 1, 4)
- ✅ Exemplo 2: O 13, I 14, E 15 → (6, 29, 16)

---

## 📁 Estrutura de Arquivos
```
atp_vetores/
├── bee_3306_consulta_alteracao.cpp  (Manipulação de vetor + MDC)
├── bee_3255_solution.cpp             (Jogo minimax com 3 jogadores)
├── BEE_3255_EXPLICACAO.md            (Documentação detalhada)
├── CMakeLists.txt
└── cmake-build-debug/
```

## 🚀 Como Compilar e Executar

### Beecrowd 3306
```bash
g++ -o bee_3306 bee_3306_consulta_alteracao.cpp
./bee_3306 < input.txt
```

### Beecrowd 3255
```bash
g++ -std=c++17 -O2 -o bee_3255 bee_3255_solution.cpp
./bee_3255 < input.txt
```

## ✨ Pontos-chave das Soluções

**3306:**
- Simples, O(N*Q) com otimizações
- Sem estruturas avançadas (apenas array)
- Foco em corretude do MDC

**3255:**
- Problema complexo requer minimax
- Controle cuidadoso de profundidade
- Exploração de ambas as ações (dividir e somar)
- Escolha determinística baseada em otimização individual

