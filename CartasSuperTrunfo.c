#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 setbuf(stdout, NULL); // Desabilita o buffer da saída para mostrar cada prompt imediatamente

    char buf[256];

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int  pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontos2;

    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H) — digite UMA letra e pressione Enter (ex: A):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %c", &estado1);

    printf("Codigo da Carta — 3 caracteres e Enter (ex: A01):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %3s", codigo1);

    printf("Nome da Cidade — digite o nome completo e Enter (ex: Sao Paulo):\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao — apenas numeros e Enter (ex: 12325000):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %d", &populacao1);

    printf("Area em km2 — use PONTO como separador decimal e Enter (ex: 1521.11):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %f", &area1);

    printf("PIB em bilhoes — use PONTO como decimal e Enter (ex: 699.28):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %f", &pib1);

    printf("Numero de Pontos Turisticos — numeros e Enter (ex: 50):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %d", &pontos1);

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H) — UMA letra (ex: B):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %c", &estado2);

    printf("Codigo da Carta — 3 caracteres (ex: B02):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %3s", codigo2);

    printf("Nome da Cidade — nome completo (ex: Rio de Janeiro):\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao — numeros (ex: 6748000):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %d", &populacao2);

    printf("Area em km2 — use PONTO (ex: 1200.25):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %f", &area2);

    printf("PIB em bilhoes — use PONTO (ex: 300.50):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %f", &pib2);

    printf("Numero de Pontos Turisticos — numeros (ex: 30):\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, " %d", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
} 
