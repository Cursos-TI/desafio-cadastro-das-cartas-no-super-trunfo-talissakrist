#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Cadastro de duas Cartas


int main() {

    //Declaração dei variáveis para armazenar os dados das duas cartas!

    char estado1 = 'C';
    char estado2 = 'R';
    char codigo1[4] = "C01";
    char codigo2[4] = "R02";
    char cidade1 [11] = "Fortaleza";
    char cidade2 [7] = "Natal";
    long int populacao1 = 2428708;
    int populacao2 = 751300;
    float area1 = 313.18;
    float area2 = 167.3;
    float pib1 = 27.000 ;
    float pib2 =  24.186;
    int pontot1 = 15;
    int pontot2 = 11;

    //Exibição dos dados da primeira carta!

    printf("Carta 1:\n");
    printf("Estado: %c\n" , estado1);
    printf("Código da cidade: %s\n" , codigo1);
    printf("Cidade: %s\n"  , cidade1);
    printf("População: %d\n"  , populacao1);
    printf("Área: %f Km²\n"  , area1);
    printf("PIB: %f Bilhões de reais\n" , pib1);
    printf("Número de pontos turísticos: %d\n\n\n" , pontot1);

    //Exibição dos dados da segunda carta!
    

    printf("Carta 2:\n");
    printf("Estado: %c\n" , estado2);
    printf("Código da cidade: %s\n" , codigo2);
    printf("Cidade: %s\n"  , cidade2);
    printf("População: %d\n"  , populacao2);
    printf("Área: %f Km²\n"  , area2);
    printf("PIB: %f Bilhões de reais\n" , pib2);
    printf("Número de pontos turísticos: %d\n" , pontot2);

    return 0;
}
