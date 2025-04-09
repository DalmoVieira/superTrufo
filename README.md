# 🏙️ Super Trunfo das Cidades — Projeto em C

## 🎯 Objetivo

Este programa simula um jogo no estilo "Super Trunfo", onde cada carta representa uma cidade com atributos como população, área, PIB, densidade demográfica e PIB per capita. Os jogadores podem comparar duas cartas e ver qual vence com base em um critério selecionado.

---

## 🧱 Estrutura do Programa

### 1. Bibliotecas

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
```

- `stdio.h`: entrada e saída padrão.
- `stdlib.h`: para funções auxiliares (como `exit()`).
- `string.h`: permite copiar strings (`strcpy()`).

---

### 2. Constantes e Tipos

```c
#define MAX_CARTAS 100
```

Define o número máximo de cartas que podem ser cadastradas no programa.

```c
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
} Carta;
```

Essa estrutura (`struct`) representa uma carta do jogo.

---

### 3. Variáveis Globais

```c
Carta cartas[MAX_CARTAS];
int num_cartas = 0;
```

- `cartas[]`: vetor de todas as cartas.
- `num_cartas`: quantas cartas já foram cadastradas.

---

## 🔧 Funções

### `void adicionar_carta()`

- Solicita ao usuário os dados da cidade.
- Calcula:
  - Densidade populacional: população ÷ área.
  - PIB per capita: PIB ÷ população.
- Armazena tudo no vetor `cartas`.

---

### `void exibir_carta(Carta carta)`

- Imprime os dados de uma carta de forma formatada.
- É usada dentro da função de jogo e pode ser chamada para debugging.

---

### `void listar_cartas()`

- Mostra os nomes e índices das cartas já cadastradas.

---

### `void jogar()`

1. Pede ao usuário que escolha duas cartas diferentes.
2. Mostra os critérios disponíveis (população, área, PIB etc.).
3. Compara os atributos das cartas escolhidas.
4. Mostra qual cidade venceu, ou se houve empate.

---

### `int main()`

- Apresenta um menu com 4 opções:
  1. Adicionar carta
  2. Jogar
  3. Listar cartas
  4. Sair
- Repete o menu até o usuário escolher sair.

---

## 🧮 Fórmulas Utilizadas

```c
densidade_populacional = populacao / area;
pib_per_capita = pib / populacao;
```

- Conversão para `float` feita para preservar precisão.
- Verificação de divisão por zero incluída.

---

## 💡 Melhorias Sugeridas

- Adicionar **leitura e gravação em arquivos** com `fread()` e `fwrite()`.
- Criar um **ranking de vitórias das cartas**.
- Implementar um **modo torneio** com várias rodadas.
- Usar **biblioteca gráfica (ex: ncurses)** para visual interativo.

---

## 🧠 Conclusão

Este projeto é uma ótima introdução a:
- Estruturas (`struct`)
- Vetores de estruturas
- Manipulação de strings
- Cálculos e comparações
- Interação com o usuário via menu

