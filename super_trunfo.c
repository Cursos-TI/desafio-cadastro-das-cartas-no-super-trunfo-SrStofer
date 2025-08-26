#include <stdio.h>
#include <string.h>

int main () {
    char estado1; //Recebe apenas uma letra
    char codigo1[4]; // Três caracteres mais o nulo
    char nome1[50]; // Quarenta e nove caracteres mais o nulo
    int populacao1;
    float area1;
    float pib1;
    int numpontos1;
        //Declaramos todas as variáveis necessárias para a carta 1
    char estado2; //Recebe apenas uma letra
    char codigo2[4]; // Três caracteres mais o nulo
    char nome2[50]; // Quarenta e nove caracteres mais o nulo
    int populacao2;
    float area2;
    float pib2;
    int numpontos2;
        //Declaramos todas as variáveis necessárias para a carta 2
        
    printf("Digite o estado da primeira carta, uma letra de A a H:\n");
        scanf(" %c", &estado1); //Limitando a entrada a um caractere
    printf("Digite o código da primeira carta, composto pela letra do estado mais dois dígitos - de 01 a 04:\n");
        scanf("%3s", codigo1); //Limitando a entrada a três caractere
    printf("Digite o nome da cidade da primeira carta:\n");
        getchar(); //Limpa o buffer do teclado   
        fgets(nome1, 50, stdin); //Limitando a entrada a quarenta e nove caracteres
        nome1[strcspn(nome1, "\n")] = 0; //Removendo o caractere de nova linha do final da string
    printf("Digite a população da primeira carta:\n");
        scanf("%d", &populacao1);
    printf("Digite a área da primeira carta:\n");
        scanf("%f", &area1);
    printf("Digite o PIB da primeira carta:\n");
        scanf("%f", &pib1);
    printf("Digite o número pontos turísticos da primeira carta:\n");
        scanf("%d", &numpontos1);
    printf("\n");
        //Atribuímos a cada entrada a sua respectiva variável da primeira carta

    printf("Digite o estado da segunda carta, uma letra de A a H:\n");
        scanf(" %c", &estado2); //Limitando a entrada a um caractere
    printf("Digite o código da segunda carta, composto pela letra do estado mais dois dígitos - de 01 a 04:\n");
        scanf("%3s", codigo2); //Limitando a entrada a três caractere
    printf("Digite o nome da cidade da segunda carta:\n");
        getchar(); //Limpa o buffer do teclado   
        fgets(nome2, 50, stdin); //Limitando a entrada a quarenta e nove caracteres
        nome2[strcspn(nome2, "\n")] = 0; //Removendo o caractere de nova linha do final da string
    printf("Digite a população da segunda carta:\n");
        scanf("%d", &populacao2);
    printf("Digite a área da segunda carta:\n");
        scanf("%f", &area2);
    printf("Digite o PIB da segunda carta:\n");
        scanf("%f", &pib2);
    printf("Digite o número pontos turísticos da segunda carta:\n");
        scanf("%d", &numpontos2);
    printf("\n");
        //Atribuímos a cada entrada a sua respectiva variável da segunda carta

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numpontos1);
    printf("\n");
        //Mostramos os dados da primeira carta

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontos2);
    printf("\n");
        //Mostramos os dados da segunda carta

    return 0;
}
