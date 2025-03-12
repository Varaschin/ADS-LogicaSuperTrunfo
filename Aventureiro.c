// Curso: Análise e Desenvolvimento de Sistemas
// Aluno: Rafael Varaschin
// Matrícula: 202501605966 - Polo Centro Curitiba/Pr.
// Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

#include <stdio.h>

int main () {

//Declaração das variáveis da Carta 1
        char pais [50] = "Brasil" ;
        int populacao = 221000000, pontos_turisticos = 200;
        float area = 8510000, pib = 2.174, pib_percapita, densidade_populacional;
        densidade_populacional = (float) populacao / area; // Calculando densidade populacional da Carta 1
        pib_percapita =  (float) (pib*1000000000) / populacao; // Calculando PIB per Capita da Carta 1

// Declaração das variáveis da Carta 2
        char pais2 [50] = "Estados Unidos";
        int populacao2 = 340000000, pontos_turisticos2 = 200;
        float area2 = 9853117, pib2 = 27.720, pib_percapita2, densidade_populacional2;
        densidade_populacional2 = (float) populacao2 / area2; // Calculando densidade populacional da Carta 2
        pib_percapita2 = (float) (pib2*1000000000) / populacao2; // Calculando PIB per Capita da Carta 2

        int escolha;

// Cabeçalho
        printf ("*** DESAFIO SUPER TRUNFO ***\n");
        printf ("*** NIVEL AVENTUREIRO ***\n");
        printf ("COMPARACAO ENTRE AS CARTAS \n\n");

// Imprimindo Menu dos Atributos:

        printf("*** ATRIBUTOS ***\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Digite o Atributo Escolhido: ");
        scanf("%d", &escolha);

        printf("-------------------------\n");

        switch(escolha){
        case 1:
            printf("Cartas: %s x %s\n", pais, pais2);
            printf("Atributo Escolhido: Populacao\n");
            printf("Pais: %s - %d Habitantes\n", pais, populacao);
            printf("Pais: %s - %d Habitantes\n", pais2, populacao2);
            if (populacao > populacao2) {

                printf("A carta 1 Venceu: %s\n", pais);
            }else if (populacao < populacao2) {
                printf ("A carta 2 Venceu: %s\n", pais2);
            }else {
                printf("Empate!!\n");
            }
        break;

        case 2:
            printf("Cartas: %s x %s\n", pais, pais2);
            printf("Atributo Escolhido: Area\n");
            printf("Pais: %s - %.0f km2\n", pais, area);
            printf("Pais: %s - %.0f km2\n", pais2, area2);
            if (area > area2) {
                printf("A carta 1 Venceu: %s\n", pais);
            }else if (area < area2) {
                printf ("A carta 2 Venceu: %s\n", pais2);
            }else {
                printf("Empate!!\n");
            }
        break;

        case 3:
            printf("Cartas: %s x %s\n", pais, pais2);
            printf("Atributo Escolhido: PIB\n");
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais, pib);
            printf("Pais: %s - R$ %.3f Bilhoes\n", pais2, pib2);
            if (pib > pib2) {
                printf("A carta 1 Venceu: %s\n", pais);
            }else if (pib < pib2) {
                printf ("A carta 2 Venceu: %s\n", pais2);
            }else {
                printf("Empate!!\n");
            }
        break;

        case 4:
            printf("Cartas: %s x %s\n", pais, pais2);
            printf("Atributo Escolhido: Pontos Turisticos\n");
            printf("Pais: %s - %d Pontos Turisticos\n", pais, pontos_turisticos);
            printf("Pais: %s - %d Pontos Turisticos\n", pais2, pontos_turisticos2);
            if (pontos_turisticos > pontos_turisticos2) {
                printf("A carta 1 Venceu: %s\n", pais);
            }else if (pontos_turisticos < pontos_turisticos2) {
                printf ("A carta 2 Venceu: %s\n", pais2);
            }else {
                printf("Empate!!\n");
            }
        break;

        case 5:
            printf("Cartas: %s x %s\n", pais, pais2);
            printf("Atributo Escolhido: Densidade Populacional\n");
            printf("Pais: %s - %.2f Hab/km2\n", pais, densidade_populacional);
            printf("Pais: %s - %.2f Hab/km2\n", pais2, densidade_populacional2);
            if (densidade_populacional < densidade_populacional2) {
                printf("A carta 1 Venceu: %s\n", pais);
            }else if (densidade_populacional > densidade_populacional2) {
                printf ("A carta 2 Venceu: %s\n", pais2);
            }else {
                printf("Empate!!\n");
            }
        break;
        default:
            printf("Opcao Invalida\n");
        }

        printf("-------------------------\n");

        return 0;
}
