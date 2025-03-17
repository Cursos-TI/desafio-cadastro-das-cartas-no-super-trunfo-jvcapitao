#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cartas 1

    printf("\n----CARTA 1----\n");

    printf("Digite o nome do estado de A a H:\n");
    scanf(" %c",&estado1);

    printf("Digite o codigo da carta:\n"); 
    scanf("%s",codigo1);
    
    printf("Digite a sua cidade:\n");
    scanf("%s",&cidade1);
    
    printf("Digite a populaçao:\n");
    scanf("%d",&populacao1);

    printf("Area em km²:\n");
    scanf("%f", &area1);
   
    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);

    //Cartas 2

    printf("\n----CARTA 2----\n");

    printf("Digite o nome do estado de A a H:\n");
    scanf(" %c",&estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%s",codigo2);

    printf("Digite a sua cidade:\n");
    scanf("%s",&cidade2);

    printf("Digite a populaçao:\n");
    scanf("%d", &populacao2);

    printf("Area em km²:\n"); 
    scanf("%f",&area2);

    printf("PIB:\n");
    scanf("%f",&pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);

    //Informações Carta 1

    printf("\n------Carta 1------\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);

    //Informações Carta 2

    printf("\n------Carta 2------\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);


    return 0;
}
