#include <stdio.h>

int main(){

    //Lista da estrutura 1

    char estado1;
    char cidade1[50];
    char codigo1[10];
    int populacao1;
    float area1;
    float pib1;
    int ptsTur1;


    // Entradas de dados

        printf("Carta 1\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado1);     // Lê até 1 letra

        printf("Código: ");
        scanf("%9s", codigo1);    // Lê até 9 letras

        printf("Cidade: ");
        scanf("%49s", cidade1);   // Lê até 49 letras

        printf("População (hab): ");
        scanf("%d", &populacao1);

        printf("Área (km²): ");
        scanf("%f", &area1);

        printf("PiB (bi): ");
        scanf("%f", &pib1);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur1);

        // Impressão formatada

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d hab\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PiB: %.2f bi\n", pib1);
        printf("Pontos Turísticos: %d\n", ptsTur1);

        
    //Lista da estrutura 2

    char estado2;
    char cidade2[50];
    char codigo2[10];
    int populacao2;
    float area2;
    float pib2;
    int ptsTur2;


       // Entradas de dados
       
       printf("Carta 2\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado2);     // Lê até 1 letra

        printf("Código: ");
        scanf("%9s", codigo2);    // Lê até 9 letras

        printf("Cidade: ");
        scanf("%49s", cidade2);   // Lê até 49 letras

        printf("População (hab): ");
        scanf("%d", &populacao2);

        printf("Área (km²): ");
        scanf("%f", &area2);

        printf("PiB (bi): ");
        scanf("%f", &pib2);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur2);


        // Impressão formatada

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d hab\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PiB: %.2f bi\n", pib2);
        printf("Pontos Turísticos: %d\n", ptsTur2);


        return 0;



    }