#include <stdio.h>
    struct Carta{
        int populacao;
        float area;
        float pib;
        int pontos_turisticos;

    };

        int main(){
            struct Carta carta1, carta2;
            float densidade1, densidade2, superpoder1, superpoder2;
            int vitorias1 = 1, vitorias2 = 0;

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

                // DENSIDADE

                densidade1 = (carta1.area > 0) ? (carta1.populacao / carta1.area) : 0;
                densidade2 = (carta2.area > 0) ? (carta2.populacao / carta2.area) : 0;

                // SUPERPODER

                superpoder1 = carta1.populacao + carta1.pib + carta1.area + carta1.pontos_turisticos + ((densidade1 > 0) ? (1 / densidade1) : 0);
                superpoder2 = carta2.populacao + carta2.pib + carta2.area + carta2.pontos_turisticos + ((densidade2 > 0) ? (1 / densidade2) : 0);
            
                // EXIBIÇÃO DOS DADOS //
            
                printf("\nDados da primeira carta:\n");
                printf("Populacao: %d\n", carta1.populacao);
                printf("Area: %.2f km²\n", carta1.area);
                printf("PIB: R$ %.2f\n", carta1.pib);
                printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
                printf("Densidade Populacional: %.2f\n", carta1.populacao / carta1.area);
                printf("PIB per Capita: %.2f\n", carta1.pib / carta1.populacao);
            
                // EXIBIÇÃO DOS DADOS 2 //
            
                printf("\nDados da segunda carta:\n");
                printf("Populacao: %d\n", carta2.populacao);
                printf("Area: %.2f km²\n", carta2.area);
                printf("PIB: R$ %.2f\n", carta2.pib);
                printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
                printf("Densidade Populacional: %.2f\n", carta2.populacao / carta2.area);
                printf("PIB per Capita: %.2f\n", carta2.pib / carta2.populacao);

                // COMPARAÇÃO DOS ATRIBUTOS

                printf("\nComparação de Atributos:\n");

                printf("População: %d\n", (carta1.populacao > carta2.populacao) ? 1 : 0);
                printf("Área: %.2f\n", (carta1.area > carta2.area) ? 1 : 0);
                printf("PIB: %.2f\n", (carta1.pib > carta2.pib) ? 1 : 0);
                printf("Pontos turisticos: %d\n", (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);
                printf("Densidade populacional: %.2f", (densidade1 > densidade2) ? 1 : 0);
                printf("Superpoder: %.2f", (superpoder1 > superpoder2) ? 1 : 0);

            
                
            
                return 0;
            
            
        }