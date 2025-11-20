
#include<stdio.h>

int main() {
    // declaração das variáveis
    char estado; // definindo as opções de estados p
    char codCarta[3], cidade[20];
    int populacao, turisticos;
    float area, pib;

    
    printf("Entre com o Estado de A-H:\n");
    scanf("%c", &estado);

    printf("Qual o código da carta?\n");
    scanf("%s", &codCarta);

    printf("Entre com a cidade:\n");
    scanf("%s", &cidade);

    printf("Entre com a população:\n");
    scanf("%d", &populacao);

    printf("Qual a área?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turisticos);
    
    // saidas da carta 1 para o uruário 
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.1fKm\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);

    // entrada dos dados da carta 2
    printf("Entre com o Estado:\n");
    scanf(" %c", &estado); //espaço antes de %c para o scanf não ler o enter da resposta anterior.

    printf("Qual o código da carta?\n");
    scanf("%s", &codCarta);

    printf("Entre com a cidade:\n");
    scanf("%s", &cidade);

    printf("Entre com a população:\n");
    scanf("%d", &populacao);

    printf("Qual a área?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turisticos);

    // saidas da carta 2 para o uruário 
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %fKm\n", area);
    printf("PIB: %f de reais\n", pib);
    printf("Número de Pontos Turísticos: %d", turisticos);
    

}