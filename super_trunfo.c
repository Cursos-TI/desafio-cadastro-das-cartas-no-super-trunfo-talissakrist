#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro de duas Cartas


int main() {

    //Declaração de variáveis para armazenar os dados das duas cartas!
    printf("Desafio Super Trunfo!\n\n");
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char cidade1 [11];
    char cidade2 [7];
    long int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontot1;
    int pontot2;

    //Exibição dos dados da primeira carta!

    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Código da cidade: ");
    scanf("%s", &codigo1);
    printf("Cidade: ");
    scanf("%s", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot1);
    printf("\n\n");

    //Exibição dos dados da segunda carta!
    

    printf("Carta 2\n");
    printf("Estado:");
    scanf("%c", &estado2);
    printf("Código da cidade: ");
    scanf("%s", &codigo2);
    printf("Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontot2);
    

    return 0;
}
