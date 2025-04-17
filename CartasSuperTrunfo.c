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

    char pais1[25];
    char estado1;
    int cidade1, pontosTuristicos1;
    float populacao1, area1, pib1, perCapta1, densidadePopu1;
    long int superPoder1;

    char pais2[25];
    char estado2;
    int cidade2, pontosTuristicos2;
    float populacao2, area2, pib2, perCapta2, densidadePopu2;
    long int superPoder2;

    printf("***************QUE COMEÇE O JOGO***************\n");
    // carta 1
    printf("Me diga qual o pais da carta 1\n");
    scanf("%s", &pais1);

    printf("Qual será o seu estado de A a H para a carta 1\n");
    scanf(" %c", &estado1);

    printf("Qual será a cidade de 1 a 4 para a carta 1\n");
    scanf("%d", &cidade1);

    printf("Quanto é a população é a área da cidade da carta 1\n");
    scanf("%f %f", &populacao1, &area1);

    printf("Quanto é o PIB e os pontos túristicos da cidade da carta 1\n");
    scanf("%f %d", &pib1, &pontosTuristicos1);

    perCapta1 = (pib1 / populacao1);
    densidadePopu1 = (populacao1 / area1);
    superPoder1 = (area1 + pib1 + pontosTuristicos1);

    // carta 2
    printf("Me diga qual o pais da carta 2\n");
    scanf("%s", &pais2);

    printf("Qual será o seu estado de A a H para a carta 2\n");
    scanf(" %c", &estado2);

    printf("Qual será a cidade de 1 a 4 para a carta 2\n");
    scanf("%d", &cidade2);

    printf("Quanto é a população é a área da cidade da carta 2\n");
    scanf("%f %f", &populacao2, &area2);

    printf("Quanto é o PIB e os pontos túristicos da cidade da carta 2\n");
    scanf("%f %d", &pib2, &pontosTuristicos2);

    perCapta2 = (pib2 / populacao2);
    densidadePopu2 = (populacao2 / area2);
    superPoder2 = (area2 + pib2 + pontosTuristicos2);


    // cartas
    printf("********* RESULTADO *************\n");
    // carta 1
    printf("Pais escolhido para carta 1 foi %s\n", pais1);

    printf("A carta 1 é a %c0%d\n", estado1, cidade1);

    printf("Com população de: %.4f milhões - Área de: %.4f km²\n", populacao1, area1);

    printf("PIB: %.4f Milhões - Número de pontos turísticos: %d\n", pib1, pontosTuristicos1);

    printf("Com PIB per capita de: %.4f\n", perCapta1);
    printf("Com densidade populacional de: %.4f\n", densidadePopu1);

    printf("Com super poder de: %ld\n", superPoder1);

    // carta 2
    printf("Pais escolhido para carta 2 foi %s\n", pais2);

    printf("A carta 2 é a %c0%d\n", estado2, cidade2);

    printf("Com população de: %.4f milhões - Área de: %.4f km²\n", populacao2, area2);

    printf("PIB: %.4f Milhões - Número de pontos turísticos: %d\n", pib2, pontosTuristicos2);

    printf("Com PIB per capita de: %.4f\n", perCapta2);
    printf("Com densidade populacional de: %.4f\n", densidadePopu2);

    printf("Com super poder de: %ld\n", superPoder2);

    // resultado final
    printf("************* RESULTADO FINAL****************\n");
    printf("1 sendo %c0%d e 0 sendo a %c0%d\n", estado1, cidade1, estado2, cidade2);
    printf("Qual das cartas tem mais pontos turisticos? %d\n",pontosTuristicos1 > pontosTuristicos2);
    printf("Qual das cartas tem a maior população? %d\n",populacao1 > populacao2);
    printf("Qual das cartas tem o PIB maior? %d\n", pib1 > pib2 );
    printf("Qual das cartas tem o maior Super Poder? %d\n",superPoder1 > superPoder2);





    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
