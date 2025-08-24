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

    // Exibe os dados cadastrados
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km2: %.2f\n", area_km2);
    printf("Produto Interno Bruto: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos);


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

    // Exibe os dados cadastrados
    printf("\n--- Dados da Carta 02 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km2: %.2f\n", area_km2);
    printf("Produto Interno Bruto: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos);

    return 0;
}
