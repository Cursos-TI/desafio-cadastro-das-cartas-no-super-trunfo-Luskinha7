#include <stdio.h>

int main(){

    char estado[3],estado2[3];
    int populacao, populacao2;
    char codigo[3],codigo2[3];
    char cidade[3],cidade2[3];
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;

    printf("Desafio Xadrez! \n");


    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("\nDigite o codigo: \n");
    scanf("%s", codigo);

    printf("\nDigite a cidade:  \n");
    scanf("%s", cidade);

    printf("\nDigite a população:  \n");
    scanf("%d", &populacao);

    printf("\nDigite a área: \n");
    scanf("%f", &area);

    printf("\nDigite o pib:  \n");
    scanf("%f", &pib);

    printf("\nNúmero de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    printf("Carta 01 \n");
    

    printf("estado: %s\nCodigo: %s\nCidade: %s \n", estado, codigo, cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);



    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("\nDigite o codigo: \n");
    scanf("%s", codigo2);

    printf("\nDigite a cidade:  \n");
    scanf("%s", cidade2);

    printf("\nDigite a população:  \n");
    scanf("%d", &populacao2);

    printf("\nDigite a área: \n");
    scanf("%f", &area2);

    printf("\nDigite o pib:  \n");
    scanf("%f", &pib2);

    printf("\nNúmero de Pontos Turísticos: \n");
    scanf("%d", &pontos2);


    printf("Carta 02 \n");

    printf("estado: %s\nCodigo: %s\nCidade: %s \n", estado2, codigo2, cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d", pontos2);

    
}






