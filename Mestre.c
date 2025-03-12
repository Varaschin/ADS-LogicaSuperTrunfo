// Curso: Análise e Desenvolvimento de Sistemas
// Aluno: Rafael Varaschin
// Matrícula: 202501605966 - Polo Centro Curitiba/Pr.
// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

#include <stdio.h>

int main () {

//Declaração das variáveis da Carta 1
        char pais [50] = "Brasil" ;
        int populacao = 221000000, pontos_turisticos = 300;
        float area = 8510000, pib = 2.174, pib_percapita, densidade_populacional;
        densidade_populacional = (float) populacao / area; // Calculando densidade populacional da Carta 1
        pib_percapita =  (float) (pib*1000000000) / populacao; // Calculando PIB per Capita da Carta 1

// Declaração das variáveis da Carta 2
        char pais2 [50] = "Estados Unidos";
        int populacao2 = 340000000, pontos_turisticos2 = 200;
        float area2 = 9853117, pib2 = 27.720, pib_percapita2, densidade_populacional2;
        densidade_populacional2 = (float) populacao2 / area2; // Calculando densidade populacional da Carta 2
        pib_percapita2 = (float) (pib2*1000000000) / populacao2; // Calculando PIB per Capita da Carta 2

        int escolha, escolha2, resultado1, resultado2;

// Cabeçalho
        printf ("*** DESAFIO SUPER TRUNFO ***\n");
        printf ("*** NIVEL MESTRE ***\n");
        printf ("COMPARACAO ENTRE AS CARTAS \n\n");


// Imprimindo Menu de Atributos:

        printf("*** ATRIBUTOS ***\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &escolha);

        printf("-------------------------\n");

        switch(escolha){
        case 1:
            printf("Primeiro Atributo Escolhido: Populacao\n");
            printf("Pais: %s - %d Habitantes\n", pais, populacao);
            printf("Pais: %s - %d Habitantes\n", pais2, populacao2);
            resultado1 = populacao > populacao2 ? 1 : 0;
        break;

        case 2:
            printf("Primeiro Atributo Escolhido: Area\n");
            printf("Pais: %s - %.0f km2\n", pais, area);
            printf("Pais: %s - %.0f km2\n", pais2, area2);
            resultado1 = area > area2 ? 1 : 0;
        break;

        case 3:
            printf("Primeiro Atributo Escolhido: PIB\n");
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais, pib);
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais2, pib2);
            resultado1 = pib > pib2 ? 1 : 0;
        break;

        case 4:
            printf("Primeiro Atributo Escolhido: Pontos Turisticos\n");
            printf("Pais: %s - %d Pontos Turisticos\n", pais, pontos_turisticos);
            printf("Pais: %s - %d Pontos Turisticos\n", pais2, pontos_turisticos2);
            resultado1 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
        break;

        case 5:
            printf("Primeiro Atributo Escolhido: Densidade Populacional\n");
            printf("Pais: %s - %.2f Hab/km2\n", pais, densidade_populacional);
            printf("Pais: %s - %.2f Hab/km2\n", pais2, densidade_populacional2);
            resultado1 = densidade_populacional < densidade_populacional2 ? 1 : 0;
        break;
        default:
            printf("Opcao Invalida\n");
            return 0;
        }

        printf("Escolha o segundo atributo.\n");
        printf("ATENCAO! Escolha um atributo diferente do primeiro.\n");
        printf("*** ATRIBUTOS ***\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        if (escolha == escolha2){
            printf("Voce escolheu o mesmo atributo.\n");
            return 0;
        }else {
            switch(escolha2){
        case 1:
            printf("Segundo Atributo Escolhido: Populacao\n");
            printf("Pais: %s - %d Habitantes\n", pais, populacao);
            printf("Pais: %s - %d Habitantes\n", pais2, populacao2);
            resultado2 = populacao > populacao2 ? 1 : 0;
        break;

        case 2:
            printf("Segundo Atributo Escolhido: Area\n");
            printf("Pais: %s - %.0f km2\n", pais, area);
            printf("Pais: %s - %.0f km2\n", pais2, area2);
            resultado2 = area > area2 ? 1 : 0;
        break;

        case 3:
            printf("Segundo Atributo Escolhido: PIB\n");
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais, pib);
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais2, pib2);
            resultado2 = pib > pib2 ? 1 : 0;
        break;

        case 4:
            printf("Segundo Atributo Escolhido: Pontos Turisticos\n");
            printf("Pais: %s - %d Pontos Turisticos\n", pais, pontos_turisticos);
            printf("Pais: %s - %d Pontos Turisticos\n", pais2, pontos_turisticos2);
            resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
        break;

        case 5:
            printf("Segundo Atributo Escolhido: Densidade Populacional\n");
            printf("Pais: %s - %.2f Hab/km2\n", pais, densidade_populacional);
            printf("Pais: %s - %.2f Hab/km2\n", pais2, densidade_populacional2);
            resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 0;
        break;
        default:
            printf("Opcao Invalida\n");
            return 0;
        }

        }

        printf("-------------------------\n");
        printf("Cartas: %s x %s\n", pais, pais2);
        if (resultado1 && resultado2){
            printf("Carta 1 Venceu - %s\n", pais);
        } else if (resultado1 != resultado2){
            printf("Empatou!\n");
        } else {
            printf("Carta 2 Venceu - %s\n", pais2);
        }
        printf("-------------------------\n");

        return 0;
}