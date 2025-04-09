#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 100

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

Carta cartas[MAX_CARTAS];
int num_cartas = 0;

void adicionar_carta() {
    if (num_cartas >= MAX_CARTAS) {
        printf("Limite de cartas atingido.\n");
        return;
    }

    Carta nova_carta;
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nova_carta.nome);

    printf("Populacao: ");
    scanf("%d", &nova_carta.populacao);

    printf("Area (km²): ");
    scanf("%f", &nova_carta.area);

    printf("PIB (em milhoes): ");
    scanf("%f", &nova_carta.pib);

    nova_carta.densidade_populacional = (float)nova_carta.populacao / nova_carta.area;

    if (nova_carta.populacao != 0) {
        nova_carta.pib_per_capita = nova_carta.pib / nova_carta.populacao;
    } else {
        nova_carta.pib_per_capita = 0;
    }

    cartas[num_cartas++] = nova_carta;
    printf("Carta adicionada com sucesso!\n\n");
}

void exibir_carta(Carta carta) {
    printf("Cidade: %s\n", carta.nome);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f milhoes\n", carta.pib);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta.pib_per_capita);
}

void listar_cartas() {
    if (num_cartas == 0) {
        printf("Nenhuma carta cadastrada.\n");
        return;
    }

    for (int i = 0; i < num_cartas; i++) {
        printf("[%d] %s\n", i, cartas[i].nome);
    }
}

void jogar() {
    if (num_cartas < 2) {
        printf("Numero insuficiente de cartas para jogar.\n");
        return;
    }

    printf("\nCartas disponíveis:\n");
    listar_cartas();

    int escolha1, escolha2;
    printf("\nEscolha o indice da primeira carta: ");
    scanf("%d", &escolha1);

    printf("Escolha o indice da segunda carta: ");
    scanf("%d", &escolha2);

    if (escolha1 >= num_cartas || escolha2 >= num_cartas || escolha1 == escolha2) {
        printf("Escolhas invalidas.\n");
        return;
    }

    Carta carta1 = cartas[escolha1];
    Carta carta2 = cartas[escolha2];

    printf("\nComparando cartas:\n");
    exibir_carta(carta1);
    printf("\nVS\n\n");
    exibir_carta(carta2);

    printf("\nQual criterio deseja comparar?\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per capita\n");

    int criterio;
    printf("Escolha (1-5): ");
    scanf("%d", &criterio);

    float valor1, valor2;

    switch (criterio) {
        case 1:
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            break;
        case 2:
            valor1 = carta1.area;
            valor2 = carta2.area;
            break;
        case 3:
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            break;
        case 4:
            valor1 = carta1.densidade_populacional;
            valor2 = carta2.densidade_populacional;
            break;
        case 5:
            valor1 = carta1.pib_per_capita;
            valor2 = carta2.pib_per_capita;
            break;
        default:
            printf("Criterio invalido.\n");
            return;
    }

    printf("\nResultado da comparacao:\n");
    if (valor1 > valor2) {
        printf("%s venceu!\n", carta1.nome);
    } else if (valor2 > valor1) {
        printf("%s venceu!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    int opcao;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar carta\n");
        printf("2. Jogar\n");
        printf("3. Listar cartas\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionar_carta();
                break;
            case 2:
                jogar();
                break;
            case 3:
                listar_cartas();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);

    return 0;
}
