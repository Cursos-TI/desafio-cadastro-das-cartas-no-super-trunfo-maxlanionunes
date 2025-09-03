#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[3] = "";
    char codigodacarta[4] = "";
    char nomecidade[30] = "";
    int populacao = 0;
    float area_km2 = 0.0;
    float pib = 0.0;
    int pt_turisticos = 0;
    float densidade_populacional = 0.0;
    float pib_per_capita = 0.0;

    int opcao = 0;

    // Variáveis separadas para os atributos da carta 1 e carta 2
    float pib1 = 0.0, pib2 = 0.0;
    int populacao1 = 0, populacao2 = 0;
    float area_km2_1 = 0.0, area_km2_2 = 0.0;
    int pt_turisticos_1 = 0, pt_turisticos_2 = 0;
    float densidade_populacional_1 = 0.0, densidade_populacional_2 = 0.0;
    float pib_per_capita_1 = 0.0, pib_per_capita_2 = 0.0;


    // Limpa a tela
    system("clear");

    printf("Bem vindo ao Super Trunfo \n");
    printf("\n");

    printf("Digite os dados da Carta 1 \n");
    
    printf("Estado (sigla, ex: SP): ");
    scanf("%2s", estado);

    printf("Codigo da Carta com 3 caracteres, sendo o primeiro a letra do Estado: ");
    scanf("%3s", codigodacarta);

    printf("Nome da Cidade: ");
    scanf("%29s", nomecidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area em Km2: ");
    scanf("%f", &area_km2);

    printf("Produto Interno Bruto: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pt_turisticos);

    //calcula a densidade populacional da carta 1
    densidade_populacional = (populacao / area_km2) / 1;

    //calcula o PIB per capita da carta 1
    pib_per_capita = pib / populacao;

    // Salva os dados da carta 1
    pib1 = pib;
    populacao1 = populacao;
    area_km2_1 = area_km2;
    pt_turisticos_1 = pt_turisticos;
    densidade_populacional_1 = densidade_populacional;
    pib_per_capita_1 = pib_per_capita;


    printf("\n Digite os dados da Carta 2 \n");
    
    printf("Estado (sigla, ex: SP): ");
    scanf("%2s", estado);

    printf("Codigo da Carta com 3 caracteres, sendo o primeiro a letra do Estado: ");
    scanf("%3s", codigodacarta);

    printf("Nome da Cidade: ");
    scanf("%29s", nomecidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area em Km2: ");
    scanf("%f", &area_km2);

    printf("Produto Interno Bruto: ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pt_turisticos);

    //calcula a densidade populacional da carta 1
    densidade_populacional = populacao / area_km2;

    //calcula o PIB per capita da carta 1
    pib_per_capita = pib / populacao;


    // Salva os dados da carta 2
    populacao2 = populacao;
    area_km2_2 = area_km2;
    pt_turisticos_2 = pt_turisticos;
    densidade_populacional_2 = densidade_populacional;
    pib_per_capita_2 = pib_per_capita;
    pib2 = pib;

    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area em Km2\n");
    printf("3 - Produto Interno Bruto (PIB)\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Comparacao entre as Cartas ---\n");
    switch (opcao) {
        case 1:
            printf("Populacao:\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n");
            else if (populacao1 < populacao2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Area em Km2:\n");
            printf("Carta 1: %.2f\n", area_km2_1);
            printf("Carta 2: %.2f\n", area_km2_2);
            if (area_km2_1 > area_km2_2)
                printf("Carta 1 venceu!\n");
            else if (area_km2_1 < area_km2_2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Produto Interno Bruto (PIB):\n");
            printf("Carta 1: %.2f\n", pib1);
            printf("Carta 2: %.2f\n", pib2);
            if (pib1 > pib2)
                printf("Carta 1 venceu!\n");
            else if (pib1 < pib2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Numero de Pontos Turisticos:\n");
            printf("Carta 1: %d\n", pt_turisticos_1);
            printf("Carta 2: %d\n", pt_turisticos_2);
            if (pt_turisticos_1 > pt_turisticos_2)
                printf("Carta 1 venceu!\n");
            else if (pt_turisticos_1 < pt_turisticos_2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Populacional:\n");
            printf("Carta 1: %.2f\n", densidade_populacional_1);
            printf("Carta 2: %.2f\n", densidade_populacional_2);
            if (densidade_populacional_1 > densidade_populacional_2)
                printf("Carta 1 venceu!\n");
            else if (densidade_populacional_1 < densidade_populacional_2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB per capita:\n");
            printf("Carta 1: %.2f\n", pib_per_capita_1);
            printf("Carta 2: %.2f\n", pib_per_capita_2);
            if (pib_per_capita_1 > pib_per_capita_2)
                printf("Carta 1 venceu!\n");
            else if (pib_per_capita_1 < pib_per_capita_2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
 
    return 0;
}
