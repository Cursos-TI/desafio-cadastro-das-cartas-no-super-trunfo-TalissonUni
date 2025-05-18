#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1 [20], codigo2[20];
    char cidade1 [20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Carta 1\n");
        printf("Estado: ");
        scanf("%c", &estado1);

        printf("Códgio: ");
        scanf("%s", &codigo1);

        printf("Nome da Cidade: ");
        scanf("%s", &cidade1);

        printf("População: ");
        scanf("%d", &populacao1);

        printf("Área: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &pib1);

        printf("Números de Pontos Turísticos: ");
        scanf("%d", &turismo1);

       printf("Carta 2\n");
        printf("Estado: ");
        scanf(" %c", &estado2);

        printf("Códgio: ");
        scanf("%s", &codigo2);

        printf("Nome da Cidade: ");
        scanf("%s", &cidade2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Área: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Números de Pontos Turísticos: ");
        scanf("%d", &turismo2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
            printf("Carta 1\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNumero de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1);
             printf("Carta 2\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNumero de Pontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2);



    return 0;
}
