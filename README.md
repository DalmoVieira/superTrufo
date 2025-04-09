# superTrufo
O objetivo deste programa em C é simular uma versão simplificada do jogo de cartas **Super Trunfo** (conhecido como Top Trumps em inglês), utilizando dados de cidades brasileiras como tema.

As funcionalidades principais são:

1.  **Cadastro de Cartas:** Permitir que o usuário insira dados de diferentes cidades. Cada "carta" representa uma cidade e armazena informações como:
    *   Código (ex: A1, B2)
    *   Nome da cidade
    *   População
    *   Área (em alguma unidade, provavelmente km²)
    *   PIB (Produto Interno Bruto)
    *   Número de Pontos Turísticos
    *   O programa calcula automaticamente a **Densidade Populacional** (População / Área) e o **PIB per capita** (PIB / População) para cada carta cadastrada.
    *   Existe um limite máximo de 16 cartas que podem ser cadastradas (`MAX_Cartas`).

2.  **Jogar:** Simular uma rodada do jogo. O usuário:
    *   Escolhe duas cartas do baralho (pelo seu índice no array, de 0 até o número de cartas cadastradas menos 1).
    *   Escolhe um atributo para comparar (População, Área, PIB, PIB per capita, Densidade Populacional ou Pontos Turísticos).
    *   O programa compara o valor do atributo escolhido entre as duas cartas selecionadas.
    *   Declara qual carta "vence" naquela rodada (a que tiver o maior valor no atributo escolhido) ou se houve empate.

3.  **Menu Principal:** Apresenta um menu simples para o usuário escolher entre cadastrar uma nova carta, jogar uma rodada ou sair do programa.

**Em resumo:** É um programa para criar um pequeno conjunto de cartas de Super Trunfo com dados de cidades e depois permitir comparar duas cartas com base em um atributo escolhido pelo usuário.
