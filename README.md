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

Como usar:
Compile e execute o seu programa C.
Escolha a opção "1. Cadastrar carta" no menu.
Para cada cidade abaixo, insira os dados conforme solicitado pelo programa.
Repita o processo para cadastrar todas as 5 cidades.
Depois, escolha a opção "2. Jogar" e use os índices de 0 a 4 para testar as comparações.

Conjunto de Dados para Teste (5 Cartas):
Carta 1 (Índice 0)
insira um codigo para cidade: ex A1,B2... -> SP1
Digite um nome para a cidade: -> Sao Paulo
digite a população dessa cidade: -> 12396372
Digite a area da cidade: -> 1521.1
qual PIB desta cidade: -> 763800000000.0 (Aprox. 763.8 Bilhões)
quantos pontos turisticos existem nessa cidade: -> 25
Carta 2 (Índice 1)
insira um codigo para cidade: ex A1,B2... -> RJ1
Digite um nome para a cidade: -> Rio de Janeiro
digite a população dessa cidade: -> 6775561
Digite a area da cidade: -> 1200.3
qual PIB desta cidade: -> 354600000000.0 (Aprox. 354.6 Bilhões)
quantos pontos turisticos existem nessa cidade: -> 30
Carta 3 (Índice 2)
insira um codigo para cidade: ex A1,B2... -> DF1
Digite um nome para a cidade: -> Brasilia
digite a população dessa cidade: -> 3094325
Digite a area da cidade: -> 5760.8
qual PIB desta cidade: -> 286900000000.0 (Aprox. 286.9 Bilhões)
quantos pontos turisticos existem nessa cidade: -> 15
Carta 4 (Índice 3)
insira um codigo para cidade: ex A1,B2... -> BA1
Digite um nome para a cidade: -> Salvador
digite a população dessa cidade: -> 2900319
Digite a area da cidade: -> 693.4
qual PIB desta cidade: -> 63500000000.0 (Aprox. 63.5 Bilhões)
quantos pontos turisticos existem nessa cidade: -> 20
Carta 5 (Índice 4)
insira um codigo para cidade: ex A1,B2... -> PR1
Digite um nome para a cidade: -> Curitiba
digite a população dessa cidade: -> 1963726
Digite a area da cidade: -> 434.9
qual PIB desta cidade: -> 98000000000.0 (Aprox. 98 Bilhões)
quantos pontos turisticos existem nessa cidade: -> 12

Exemplo de Teste (Jogar):
Escolha a opção "2. Jogar".
Índice da primeira carta (0 a 4): -> 0 (São Paulo)
Índice da segunda carta (0 a 4): -> 1 (Rio de Janeiro)
Escolha o atributo para comparar:
1. População -> Deverá indicar que São Paulo vence.
2. Área -> Deverá indicar que São Paulo vence.
3. PIB -> Deverá indicar que São Paulo vence.
6. Pontos turisticos -> Deverá indicar que Rio de Janeiro vence.


Experimente comparar outras cidades e outros atributos para verificar se os cálculos de densidade e PIB per capita estão funcionando e se as comparações no switch estão corretas (lembre-se dos bugs apontados na explicação anterior, especialmente o scanf sem & e os printf com formato errado, que precisam ser corrigidos para o teste funcionar perfeitamente).

