# Árvores e Grafos
As estruturas de dados do tipo árvore e grafo são fundamentais para representar relações hierárquicas e conexões entre elementos.
Nesta seção, exploramos especificamente as Árvores Binárias e as Árvores Binárias de Busca (ABP/BST).

As operações comuns em árvores incluem:
- **Inserção**: Adicionar um novo nó mantendo a propriedade da árvore.
- **Busca**: Verificar se um elemento existe na árvore.
- **Percursos**: Visitar todos os nós da árvore em uma ordem específica.

## Percursos em Árvores Binárias
Existem três formas clássicas de percorrer uma árvore binária recursivamente:

### 1. Prefixo (Pre-order)
Visita a raiz, depois a subárvore esquerda e, por fim, a subárvore direita.
```c
void pre_order(Node *root) {
    if (root != NULL) {
        printf("%d ", root->value); // Raiz
        pre_order(root->left);      // Esquerda
        pre_order(root->right);     // Direita
    }
}
```

### 2. Infixo (In-order)
Visita a subárvore esquerda, depois a raiz e, por fim, a subárvore direita. Em uma Árvore Binária de Busca, este percurso resulta nos elementos em ordem crescente.
```c
void in_order(Node *root) {
    if (root != NULL) {
        in_order(root->left);       // Esquerda
        printf("%d ", root->value); // Raiz
        in_order(root->right);      // Direita
    }
}
```

### 3. Posfixo (Post-order)
Visita a subárvore esquerda, depois a subárvore direita e, por fim, a raiz.
```c
void post_order(Node *root) {
    if (root != NULL) {
        post_order(root->left);     // Esquerda
        post_order(root->right);    // Direita
        printf("%d ", root->value); // Raiz
    }
}
```

## Árvore Binária de Busca (ABP / BST)
Uma árvore binária de busca é uma estrutura onde para cada nó, todos os elementos na subárvore esquerda são menores que ele, e todos os elementos na subárvore direita são maiores.

### Exemplo de Inserção em C
```c
Node* insert(Node *root, int value) {
    if (root == NULL) {
        Node *newNode = (Node*) malloc(sizeof(Node));
        newNode->value = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}
```

## Exercícios Resolvidos (Beecrowd)

### [Beecrowd 1191 - Recuperação da Árvore](./bee_1191_recuperacao_arvore.c)
Reconstrução de uma árvore a partir dos percursos prefixo e infixo para gerar o posfixo.

### [Beecrowd 1194 - Prefixa, Infixa e Posfixa](./bee_1194_prefixa_infixa_posfixa.c)
Similar ao 1191, focado na geração do percurso posfixo dados os outros dois.

### [Beecrowd 1195 - Árvore Binária de Busca](./bee_1195_arvore_binaria_busca.c)
Construção de uma BST e exibição dos três percursos clássicos.

### [Beecrowd 1200 - Operações em ABP I](./bee_1200_operacoes_abp_i.c)
Implementação de comandos para inserção, busca e exibição de percursos em uma ABP de caracteres.

### [Beecrowd 1201 - Operações em ABP II](./bee_1201_operacoes_abp_ii.c)
Evolução do problema 1200, agora com números inteiros e operação de remoção de nós.
