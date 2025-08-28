#include <stdio.h>
#include <string.h>

int main () {
    char estado1; //Recebe apenas uma letra
    char codigo1[4]; // Três caracteres mais o nulo
    char nome1[50]; // Quarenta e nove caracteres mais o nulo
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numpontos1;
        //Declaramos todas as variáveis necessárias para a carta 1
    char estado2; //Recebe apenas uma letra
    char codigo2[4]; // Três caracteres mais o nulo
    char nome2[50]; // Quarenta e nove caracteres mais o nulo
    unsigned long int populacao2;
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
    printf("Digite a área da primeira carta, em km²:\n");
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
    printf("Digite a área da segunda carta, em km²:\n");
        scanf("%f", &area2);
    printf("Digite o PIB da segunda carta:\n");
        scanf("%f", &pib2);
    printf("Digite o número pontos turísticos da segunda carta:\n");
        scanf("%d", &numpontos2);
    printf("\n");
        //Atribuímos a cada entrada a sua respectiva variável da segunda carta
    float densidade1 = (float) populacao1 / area1; //Densidade Populacional da primeira carta
    float pibpercapita1 = pib1 / (float) populacao1; //PIB per Capita da primeira carta
    float densidade2 = (float) populacao2 / area2; //Densidade Populacional da segunda carta
    float pibpercapita2 = pib2 / (float) populacao2; //PIB per Capita da segunda carta
        //Calculamos a densidade populacional e o PIB per capita de ambas as cartas
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numpontos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("\n");
        //Mostramos os dados da primeira carta
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("\n");
        //Mostramos os dados da segunda carta
   /*/ printf("Comparação entre as cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s: %d\n", nome1, numpontos1); 
    printf("Carta 2 - %s: %d\n", nome2, numpontos2);
    if (numpontos1 > numpontos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (numpontos2 > numpontos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }
        //Comparamos o número de pontos turísticos e mostramos o resultado*/
 printf("Escolha o atributo para comparar entre as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("\n");
    int escolha;
    scanf("%d", &escolha);      
 switch (escolha) {
        case 1:
            printf("Comparação entre as cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d\n", nome1, populacao1); 
            printf("Carta 2 - %s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Comparação entre as cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", nome1, area1); 
            printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("Comparação entre as cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nome1, pib1); 
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Comparação entre as cartas (Atributo: Número de Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d\n", nome1, numpontos1); 
            printf("Carta 2 - %s: %d\n", nome2, numpontos2);
            if (numpontos1 > numpontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (numpontos2 > numpontos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("Comparação entre as cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s: %.2f hab/Km²\n", nome1, densidade1); 
            printf("Carta 2 - %s: %.2f hab/Km²\n", nome2, densidade2);
            if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else if (densidade2 > densidade1) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6:
            printf("Comparação entre as cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s: %.2f reais\n", nome1, pibpercapita1); 
            printf("Carta 2 - %s: %.2f reais\n", nome2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 6.\n");
            break;
    }
        //Comparamos o atributo escolhido e mostramos o resultado
        return 0;
}
