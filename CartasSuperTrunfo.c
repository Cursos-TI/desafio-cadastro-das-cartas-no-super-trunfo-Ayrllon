#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     char pais[25];
    char estado;
    int cidade, pontosTuristicos;
    float populacao, area, pib, perCapita, densidadePopu;

    printf("Qual será seu pais?\n");
    scanf("%s", &pais);

    printf("Qual será o seu estado de A a H\n");
    scanf(" %c", &estado);


    printf("Qual será a sua cidade de 1 a 4\n");
    scanf("%d", &cidade);

    printf("Quanto é a população é a área da cidade?\n");
    scanf("%f %f", &populacao, &area);

    printf("Quanto é o PIB é os pontos turisticos da cidade?\n");
    scanf("%f %d", &pib, &pontosTuristicos);

    perCapita = (pib / populacao);
    densidadePopu = (populacao / area);

    printf("**** RESULTADO ****\n");
    printf("Pais escolhido foi o %s\n", pais);

    printf("Sua carta é a %c0%d\n",estado, cidade);

    printf("Com a população de: %.4f Milhões - Área de: %.4f km²\n", populacao, area);

    printf("PIB: %.4f Milhões - Número de pontos turísticos: %d\n", pib, pontosTuristicos);

    printf("Com PIB per Capita de: %.4f\n", perCapita);
    printf("Com dencidade populacional de: %.4f\n", densidadePopu);




    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
