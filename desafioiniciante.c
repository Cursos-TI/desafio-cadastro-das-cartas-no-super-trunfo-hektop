#include <stdio.h>
    struct Carta{
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;

    };

        int main(){
            struct Carta carta1, carta2;

            //DADOS DA CARTA 1
            
                    printf("Digite os dados da carta\n");
            
                    printf("Populaçao: ");
                    scanf("%d", &carta1.populacao);
                    
                    printf("Área em km²: ");
                    scanf("%f", &carta1.area);
                    
                    printf("PIB da carta: ");
                    scanf("%f", &carta1.pib);
            
                    printf("Quantidade de pontos turisticos: ");
                    scanf("%d", &carta1.pontos_turisticos);
            
            //DADOS DA CARTA 2 
            
                printf("Digite os dados da segunda carta\n");
                printf("População: ");
                scanf("%d", &carta2.populacao);
            
                printf("Área em km²: ");
                scanf("%f", &carta2.area);
            
                printf("PIB da carta: ");
                scanf("%f", &carta2.pib);
            
                printf("Quantidade de pontos turisticos: ");
                scanf("%d", &carta2.pontos_turisticos);
            
                // EXIBIÇÃO DOS DADOS //
            
                printf("\nDados da primeira carta:\n");
                printf("Populacao: %d\n", carta1.populacao);
                printf("Area: %.2f km²\n", carta1.area);
                printf("PIB: R$ %.2f\n", carta1.pib);
                printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
            
                // EXIBIÇÃO DOS DADOS 2 //
            
                printf("\nDados da segunda carta:\n");
                printf("Populacao: %d\n", carta2.populacao);
                printf("Area: %.2f km²\n", carta2.area);
                printf("PIB: R$ %.2f\n", carta2.pib);
                printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
            
                return 0;
            
            
        }