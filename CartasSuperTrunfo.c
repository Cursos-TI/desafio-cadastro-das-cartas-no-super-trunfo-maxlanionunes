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

    float pib1 = 0.0; 
    float pib2 = 0.0;

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
    densidade_populacional = populacao / area_km2;

    //calcula o PIB per capita da carta 1
    pib_per_capita = pib / populacao;


    pib1 = pib;
    

    // Exibe os dados cadastrados
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km2: %.2f\n", area_km2);
    printf("Produto Interno Bruto: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos);
    printf("Densidade Populacional (hab/km2): %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);


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

    pib2 = pib;

    // Exibe os dados cadastrados
    printf("\n--- Dados da Carta 02 ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km2: %.2f\n", area_km2);
    printf("Produto Interno Bruto: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos);
    printf("Densidade Populacional (hab/km2): %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);


    /*Comparação de cartas (Atributo: Pib):
    Carta 1 - São Paulo (SP): 500.000.000
    Carta 2 - Rio de Janeiro (RJ): 800.000.00
    Resultado: Carta 1 (São Paulo) venceu!*/

    printf("\n--- Comparacao entre as Cartas ---\n");
    printf("Atributo escolhido: Produto Interno Bruto (PIB)\n");
    printf("Carta 1 - São Paulo (SP): %.2f\n", pib1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", pib2);

    if (pib1 > pib2)
    {
        printf("Carta 1 (Bauru) venceu!\n");
    }
    else if (pib1 < pib2)
    {
        printf("Carta 2 (Niteroi) venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }
    
    return 0;
}
