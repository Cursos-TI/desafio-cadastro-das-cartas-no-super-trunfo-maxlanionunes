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

    char estado;
    char codigo_da_carta[3];
    char nome_cidade[30];
    int populacao;
    float area_km2;
    float pib;
    int pt_turisticos;

    estado = "";
    codigo_da_carta = "";
    nome_cidade = "";
    populacao = 0;
    area_km2 = 0.0;
    pib = 0.0;
    pt_turisticos = 0;

    system("cls");

    prinf("Bem vindo ao Super Trunfo \n");
    print("\n");

    print("Digite os dados da Carta 1 \n");
    
    print("Estado: ");
    scanf("%s", &estado);

    print("Codigo da Carta com 3 caracteres, sendo o primeiro a leitra do Estado: ");
    scanf("%s", &codigo_da_carta);

    print("Nome da Cidade: ");
    scanf("%s", &nome_cidade);

    print("Area em Km2: ");
    scanf("%f", &area_km2);

    print("Produto Interno Bruto: ");
    scanf("%f", &pib);

    print("Produto Interno Bruto: ");
    scanf("%f", &pt_turisticos);

    return 0;
}
