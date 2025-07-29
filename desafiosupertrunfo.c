#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    //Estrutura carta 1
    
    int ptsTur1;
    unsigned long int populacao1;
    char estado1; 
    char cidade1[50], codigo1[10];
    float area1, pib1, densidade1, percapita1, superpoder1;
    
  
   //Estrutura carta 2

    int ptsTur2;
    unsigned long int populacao2;
    char estado2;
    char cidade2[50], codigo2[10];
    float pib2, area2, densidade2, percapita2, superpoder2;
    
    
    int opcao;
       
       printf("##### Bem Vindo ao Jogo de Cartas Super Trunfo #####\n\n");

    // Dados da Carta 1
        
        printf("###Carta 1###\n\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado1);     // Lê até 1 letra

        printf("Código: "); 
        scanf("%9s", codigo1);    // Lê até 9 letras

        printf("Cidade: ");
        getchar();                             
        fgets(cidade1, sizeof(cidade1), stdin);    // Limpa o buffer do teclado
        cidade1 [strcspn(cidade1, "\n")] = 0;   
        
        printf("População (hab): ");
        scanf("%lu", &populacao1);

        printf("Área (km²): ");
        scanf("%f", &area1);

        printf("PIB (bi): ");
        scanf("%f", &pib1);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur1);

               //Cálculos carta 1
       
       densidade1 = (area1 == 0) ? 0.0f : (float)populacao1 / area1;
       float pib1_reais = pib1 * 1000000000.0f;
       float inverso_densidade1 = (densidade1 == 0) ? 0.0f : 1.0f / densidade1;
       percapita1 = (populacao1 == 0) ? 0.0f : (pib1 * 1000000000.0f) / populacao1;
       superpoder1 = (float)populacao1 + area1 + pib1_reais + ptsTur1 + percapita1 + inverso_densidade1;

       

               // Impressão formatada carta 1

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %lu hab\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PiB: %.2f bi\n", pib1);
        printf("Pontos Turísticos: %d\n", ptsTur1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);    // calculado a densidade populacional
        printf("PIB per Capita: %.2f Reais\n", percapita1);     // calculado o Pib per capito
        printf("Super Poder: %.2f\n\n", superpoder1);

         
    


       // Dados carta 2

        printf("**Carta 2**\n\n");
        printf("Preencha as informações abaixo: \n");

        printf("Estado (uma letra): ");
        scanf(" %c", &estado2);     // Lê até 1 letra

        printf("Código: ");
        scanf("%9s", codigo2);    // Lê até 9 letras

        printf("Cidade: ");
        getchar();           
        fgets(cidade2, sizeof(cidade2), stdin);  // Limpa o buffer do teclado 
        cidade2 [strcspn(cidade2, "\n")] = 0;   

        printf("População (hab): ");
        scanf("%lu", &populacao2);

        printf("Área (km²): ");
        scanf("%f", &area2);

        printf("PIB (bi): ");
        scanf("%f", &pib2);

        printf("Pontos Turísticos: ");
        scanf("%d", &ptsTur2);

                 //Cálculos carta 2

       densidade2 = (area2 == 0) ? 0.0f : (float)populacao2 / area2;
       float pib2_reais = pib2 * 1000000000.0f;
       float inverso_densidade2 = (densidade2 == 0) ? 0.0f : 1.0f / densidade2;
       percapita2 = (populacao2 == 0) ? 0.0f : (pib2 * 1000000000.0f) / populacao2;
       superpoder2 = (float)populacao2 + area2 + pib2_reais + ptsTur2 + percapita2 + inverso_densidade2;



                // Impressão formatada carta 2

        printf("\n--- Dados Informados ---\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu hab\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PiB: %.2f bi\n", pib2);
        printf("Pontos Turísticos: %d\n", ptsTur2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);    // calculado a densidade populacional
        printf("PIB per Capita: %.2f reais\n", percapita2);     // calculado o Pib per capito
        printf("Super Poder: %.2f\n\n", superpoder2);


        //Comparação entre atributos das cartas, aqui informará com (1) Verdadeiro e (0) Falso
       
        printf("Definição para o vencedor: o atributo ficará com (1) para verdadeiro e (0) para falso.\n\n");
        printf("População: Resultado para Carta1 vencer: (%d)\n", populacao1 > populacao2);
        printf("Área: Carta1 venceu (%d)\n", area1 > area2);
        printf("PIB: Carta1 venceu (%d)\n", pib1 > pib2);
        printf("Pontos Turísitcos: Carta1 venceu (%d)\n", ptsTur1 > ptsTur2);
        printf("Densidade Populacional: Carta2 venceu (%d)\n", densidade1 < densidade2);
        printf("PIB per Capita: Carta1 venceu (%d)\n", percapita1 > percapita2);
        printf("Super Poder: Carta1 venceu (%d)\n\n", superpoder1 > superpoder2);





        return 0;
}
