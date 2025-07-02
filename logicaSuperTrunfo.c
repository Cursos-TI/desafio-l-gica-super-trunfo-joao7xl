//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //return 0;
}
#include <stdio.h>

int main() {

    char estado;
    char codigoCarta[3];
    char nomeCidade[30];
    int populacao;
    float areaKm;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional1;
    float pibPerCapita;
    float superPoder;

    printf("Insira a Letra Inicial do Estado e o Código: \n");
    scanf(" %c", &estado);
    scanf("%2s", &codigoCarta);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Insira a população: \n");
    scanf("%d", &populacao);

    printf("Qual área em km²: \n");
    scanf("%f", &areaKm);

    printf("Qual o pib do estado: \n");
    scanf("%f", &pib);
    
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional1 = (populacao + areaKm) / 2;
    pibPerCapita = (pib + populacao) / 2;

    superPoder = populacao + areaKm + pib + densidadePopulacional1 + pibPerCapita;

    char estado2;
    char codigoCarta2[3];
    char nomeCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("\nInsira a letra inicial do estado 2 e o codigo: \n");
    scanf(" %c", &estado2);
    scanf("%2s", &codigoCarta2);

    printf("Insira o nome da cidade 2: \n");
    scanf("%s", &nomeCidade2);

    printf("Insira a população 2: \n");
    scanf("%d", &populacao2);
    
    printf("Qual a área em km² do estado 2: \n");
    scanf("%f", &areaKm2);

    printf("Qual pib do estado: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (populacao + areaKm) / 2;
    pibPerCapita2 = (pib + populacao) / 2;

    superPoder2 = populacao2 + areaKm2 + pib2 + densidadePopulacional2 + pibPerCapita2;

    printf("\nInicial do estado 1: %c \nCódigo: %2s \n", estado, codigoCarta);
    printf("Cidade: %s \nPopulação: %d \n", nomeCidade, populacao);
    printf("Área km²: %.2f km²\nPIB: %.2f bilhões de reais\n", areaKm, pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    printf("O super poder da carta 1 é: %f\n", superPoder);

    printf("\nInicial do estado 2: %c \nCódigo 2: %2s \n", estado2, codigoCarta2);
    printf("Cidade 2: %s \nPopulação 2: %d \n", nomeCidade2, populacao2);
    printf("Área km² 2: %.2f km²\nPIB 2: %.2f bilhões de reais\n", areaKm2, pib2);
    printf("Quantidade de pontos turísticos 2: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("O super poder da carta 2 é: %f\n", superPoder2);

    if (populacao > populacao2){
        printf("\nPopulação: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 1 venceu!\n");
    }

    
    if (areaKm > areaKm2){
        printf("Área KM: Carta 1 venceu!\n");
    } else {
        printf("Área KM: Carta 1 venceu!\n");
    }
    
    
    if (pib > pib2){
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 1 venceu!\n");
    }
    
    if (pontosTuristicos > pontosTuristicos2){
        printf("Pontos turistiscos: Carta 1 venceu!\n");
    } else {
        printf("Pontos turistiscos: Carta 1 venceu!\n");
    }


    if (densidadePopulacional1 < densidadePopulacional2){
        printf("Densidade: Carta 1 venceu!\n");
    } else {
        printf("Densidade: Carta 1 venceu!\n");
    }


    if (pibPerCapita > pibPerCapita2){
        printf("PIB per capta: Carta 1 venceu!\n");
    } else {
        printf("PIB per capta: Carta 1 venceu!\n");
    }


    if (superPoder > superPoder2){
        printf("Super poder: Carta 1 venceu!\n");
    } else {
        printf("Super poder: Carta 1 perdeu!\n");
    }
    




    return 0;

}