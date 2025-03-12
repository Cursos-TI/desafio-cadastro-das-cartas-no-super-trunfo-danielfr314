#include <stdio.h>

int main() {

    char letra_estado; //letra de A a H
    char codigo_carta [10]; //número de 01 a 08 (Ex.: A01, C05)
    char nome_cidade [30];
    unsigned long int populacao_cidade1, populacao_cidade2; //número de habitantes
    float area_cidade1, area_cidade2; //em km2
    float PIB_cidade1, PIB_cidade2; // em bilhões de reais
    int nr_pontos_turisticos1, nr_pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2; // em habitantes por km2
    float PIB_per_capita1, PIB_per_capita2; // em reais por pessoa
    float Super_Poder1, Super_Poder2; // calcula o poder da carta
    int maior_valor;

    char confirmacao[5]; //Variável para o jogador confirmar os dados da carta 1 e voltar ao começo para corrigir, se necessário.

    printf("\nBem vindo ao Super Trunfo Cidades Brasileiras!\n");
    printf("Vamos começar.\n");

    /*Carta 1*/

    printf("\nDigite a letra correspondente ao estado da carta 1 (A, B,..., H.): ");
    scanf(" %c", &letra_estado);

    printf("\nMuito bem.\n");
    printf("Agora digite o código da carta (01, 02,..., 08): ");
    scanf(" %s", &codigo_carta);

    printf("\nOs dados seguintes são relativos a informações sobre a cidade.\n\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("\nDigite a população da cidade (quantidade de habitantes)\n");
    scanf("%lu", &populacao_cidade1);

    printf("\nDigite a área da cidade (em km2)\n");
    scanf("%f", &area_cidade1);

    printf("\nDigite o PIB - Produto interno Bruto - da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB_cidade1);
    
    printf("\nDigite o número de pontos turísticos na cidade:\n");
    scanf("%i", &nr_pontos_turisticos1);

    densidade_populacional1 = (float) populacao_cidade1 / area_cidade1;
    PIB_per_capita1 = (float) PIB_cidade1 / populacao_cidade1;

    printf("\nConfira os dados da Carta 1: \n\n");

    /*
    Os dados têm que sair nesse formato:
    Carta 1
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */

    printf("Carta 1 \n");
    printf("Estado: %c\n", letra_estado);
    printf("Código: %c%s\n", letra_estado, codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População Absoluta: %lu habitantes\n", populacao_cidade1);
    printf("Área da cidade: %.2f km2\n", area_cidade1);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB_cidade1);
    printf("Número de pontos turísticos: %i\n", nr_pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km2", densidade_populacional1);
    printf("\nPIB per capita: R$ %.2f reais por pessoa", PIB_per_capita1);

    Super_Poder1 = populacao_cidade1 + area_cidade1 + PIB_cidade1 + nr_pontos_turisticos1 + (1/densidade_populacional1) + PIB_per_capita1;

    printf("\n\nOs dados conferem? (S ou N)\n");
    printf("Se S, prossiga para a carta 2. Se não, reinicie o jogo e corrija os dados errados.\n");
    printf("S ou N: ");
    scanf(" %s", &confirmacao);

    /*Carta 2*/

    printf("\nÓtimo! Agora vamos para a carta 2.\n");
    
    printf("\nDigite a letra correspondente ao estado da carta 2 (A, B,..., H.): ");
    scanf(" %c", &letra_estado);

    printf("\nMuito bem.\n");
    printf("Agora digite o código da carta (01, 02,..., 08): ");
    scanf(" %s", &codigo_carta);

    printf("\nOs dados seguintes são relativos a informações sobre a cidade.\n\n");

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade);

    printf("\nDigite a população da cidade (quantidade de habitantes):\n");
    scanf("%lu", &populacao_cidade2);

    printf("\nDigite a área da cidade (em km2):\n");
    scanf("%f", &area_cidade2);

    printf("\nDigite o PIB - Produto interno Bruto - da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB_cidade2);

    printf("\nDigite o número de pontos turísticos na cidade:\n");
    scanf("%i", &nr_pontos_turisticos2);

    densidade_populacional2 = (float) populacao_cidade2 / area_cidade2;
    PIB_per_capita2 = (float) PIB_cidade2 / populacao_cidade2;

    printf("\nConfira os dados da Carta 2: \n\n");

    printf("Carta 2 \n");
    printf("Estado: %c\n", letra_estado);
    printf("Código: %c%s\n", letra_estado, codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População Absoluta: %lu habitantes\n", populacao_cidade2);
    printf("Área da cidade: %.2f km2\n", area_cidade2);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB_cidade2);
    printf("Número de pontos turísticos: %i\n", nr_pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km2", densidade_populacional2);
    printf("\nPIB per capita: R$ %.2f reais por pessoa", PIB_per_capita2);

    Super_Poder2 = populacao_cidade2 + area_cidade2 + PIB_cidade2 + nr_pontos_turisticos2 + (1/densidade_populacional2) + PIB_per_capita2;

    /*
    Os dados têm que sair nesse formato:
    Carta 2
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30 */

    printf("\n\nOs dados conferem? (S ou N)\n");
    printf("Se S, prossiga. Se não, reinicie o jogo e corrija o que está errado.\n");
    printf("S ou N: ");
    scanf(" %s", &confirmacao);
    
    printf("\nExcelente!\n");

    printf("\n*****ATENÇÃO*****\n");

    printf("\nPara Carta '1', considere Carta '1'\n");
    printf("Para Carta '0', considere Carta '2'\n");

    printf("\nPressione a tecla 'P' para prosseguir: ");
    scanf(" %s", confirmacao);

    printf("\n\nVeja agora o resultado do jogo: \n\n");

    printf("\nPopulação: Carta %d venceu (%d)", (populacao_cidade1 > populacao_cidade2), (populacao_cidade1 > populacao_cidade2));
    printf("\nÁrea: Carta %d venceu (%d)", (area_cidade1 > area_cidade2), (area_cidade1 > area_cidade2));
    printf("\nPIB: Carta %d venceu (%d)", (PIB_cidade1 > PIB_cidade2), (PIB_cidade1 > PIB_cidade2));
    printf("\nPontos turísticos: Carta %d venceu (%d)", (nr_pontos_turisticos1 > nr_pontos_turisticos2), (nr_pontos_turisticos1 > nr_pontos_turisticos2));
    printf("\nDensidade Populacional: Carta %d venceu (%d)", (densidade_populacional1 < densidade_populacional2), (densidade_populacional1 < densidade_populacional2));
    printf("\nPIB per Capita: Carta %d venceu (%d)", (PIB_per_capita1 > PIB_per_capita2), (PIB_per_capita1 > PIB_per_capita2));
    printf("\nSuper Poder: Carta %d venceu (%d)", (Super_Poder1 > Super_Poder2), (Super_Poder1 > Super_Poder2));

    return 0;

}
