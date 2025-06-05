#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  // Variaveis da primeira carta
  char estadoPrimeiraCarta[2]; 
  char codigoPrimeiraCarta[3]; 
  char nomeCidadePrimeiraCarta[20];
  int populacaoPrimeiraCarta, numeroDePontosTuristicosPrimeiraCarta;
  float areaPrimeiraCarta, pibPrimeiraCarta, pibPerCaptaPrimeiraCarta, densidadePopulacionalPrimeiraCarta;

  // Variaveis da segunda carta
  char estadoSegundaCarta[2]; 
  char codigoSegundaCarta[3]; 
  char nomeCidadeSegundaCarta[20];
  int populacaoSegundaCarta, numeroDePontosTuristicosSegundaCarta;
  float areaSegundaCarta, pibSegundaCarta, pibPerCaptaSegundaCarta, densidadePopulacionalSegundaCarta;

  printf("\n------Super Trunfo!------\n");
  printf("\n---Preencha a primeira carta---\n"); // Preenchimento da primeira carta
  printf("Estado (Letra 'A' a 'H'): ");
  scanf("%s", estadoPrimeiraCarta);
  printf("Codigo da carta (Ex: A01, B03): ");
  scanf("%s", codigoPrimeiraCarta);
  printf("Nome da cidade: ");
  scanf("%s", nomeCidadePrimeiraCarta);
  printf("Populacao: ");
  scanf("%d", &populacaoPrimeiraCarta);
  printf("Area: ");
  scanf("%f", &areaPrimeiraCarta);
  printf("PIB: ");
  scanf("%f", &pibPrimeiraCarta);
  printf("Numero de pontos turisticos: ");
  scanf("%d", &numeroDePontosTuristicosPrimeiraCarta);

  // Realizando calculos da primeira carta
  densidadePopulacionalPrimeiraCarta = populacaoPrimeiraCarta / areaPrimeiraCarta;
  pibPerCaptaPrimeiraCarta = pibPrimeiraCarta / populacaoPrimeiraCarta;

  // Preenchimento da segunda carta
  printf("\n---Preencha a segunda carta---\n"); 
  printf("Estado (Letra 'A' a 'H'): ");
  scanf("%s", estadoSegundaCarta);
  printf("Codigo da carta (Ex: A01, B03): ");
  scanf("%s", codigoSegundaCarta);
  printf("Nome da cidade: ");
  scanf("%s", nomeCidadeSegundaCarta);
  printf("Populacao: ");
  scanf("%d", &populacaoSegundaCarta);
  printf("Area: ");
  scanf("%f", &areaSegundaCarta);
  printf("PIB: ");
  scanf("%f", &pibSegundaCarta);
  printf("Numero de pontos turisticos: ");
  scanf("%d", &numeroDePontosTuristicosSegundaCarta);

  // Realizando calculos da segunda carta 
  densidadePopulacionalSegundaCarta = populacaoSegundaCarta / areaSegundaCarta;
  pibPerCaptaSegundaCarta = pibSegundaCarta / populacaoSegundaCarta;

  // Título da exibição
  printf("\n\n---Cartas---\n\n");
  // Exibição da primeira carta
  printf("Carta 1:\n");
  printf("\nEstado: %s", estadoPrimeiraCarta);
  printf("\nCodigo: %s", codigoPrimeiraCarta);
  printf("\nNome da Cidade: %s", nomeCidadePrimeiraCarta);
  printf("\nPopulacao: %d", populacaoPrimeiraCarta);
  printf("\nArea: %.2f km", areaPrimeiraCarta);
  printf("\nPIB: %.2f bilhoes de reais", pibPrimeiraCarta);
  printf("\nNumero de pontos turisticos: %d", numeroDePontosTuristicosPrimeiraCarta);
  printf("\nDensidade Populacional: %f", densidadePopulacionalPrimeiraCarta);
  printf("\nPIB per Capita: %f", pibPerCaptaPrimeiraCarta);
  printf("\n--------------------------------------\n");

  // Exibição da segunda carta
  printf("Carta 2:\n");
  printf("\nEstado: %s", estadoSegundaCarta);
  printf("\nCodigo: %s", codigoSegundaCarta);
  printf("\nNome da Cidade: %s", nomeCidadeSegundaCarta);
  printf("\nPopulacao: %d", populacaoSegundaCarta);
  printf("\nArea: %.2f km", areaSegundaCarta);
  printf("\nPIB: %.2f bilhoes de reais", pibSegundaCarta);
  printf("\nNumero de pontos turisticos: %d", numeroDePontosTuristicosSegundaCarta);
  printf("\nDensidade Populacional: %f", densidadePopulacionalSegundaCarta);
  printf("\nPIB per Capita: %f", pibPerCaptaSegundaCarta);
  printf("\n--------------------------------------\n");

  // Inicio do menu
  int escolha; // Variavel que vai receber a escolha
  printf("Batalha de cartas!\n");
  printf("Escolha uma opcao:\n");
  printf("1 - Comparar Populacao\n");
  printf("2 - Comparar Area\n");
  printf("3 - Comparar PIB\n");
  printf("4 - Comparar Numero de Pontos Turisticos\n");
  printf("5 - Comparar Densidade Populacional\n");
  printf("6 - Comparar PIB per Capita\n");
  printf("Escolha: ");
  scanf("%d", &escolha);

  // Imprimindo titulo da comparacao
  printf("\n\t---Comparacao---");
  printf("\nCarta 1: \t\t Carta 2:");
  printf("\nNome: %s \t\t Nome: %s", nomeCidadePrimeiraCarta, nomeCidadeSegundaCarta);

  switch (escolha)
  {
    case 1:
      printf("\n\t--Atributo usado: Populacao--");
      printf("\nPopulacao: %d \t\t Populacao: %d", populacaoPrimeiraCarta, populacaoSegundaCarta);

      if (populacaoPrimeiraCarta != populacaoSegundaCarta){
        if(populacaoPrimeiraCarta > populacaoSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }
      
      break;

    case 2:
      printf("\n\t---Atributo usado: Area---");
      printf("\nArea: %.2f \t\t Area: %.2f", areaPrimeiraCarta, areaSegundaCarta);

      if (areaPrimeiraCarta != areaSegundaCarta){
        if(areaPrimeiraCarta > areaSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }

      break;

    case 3:
      printf("\n\t--Atributo usado: PIB--");
      printf("\nPIB: %.2f \t\t PIB: %.2f", pibPrimeiraCarta, pibSegundaCarta);

      if (pibPrimeiraCarta != pibSegundaCarta){
        if(pibPrimeiraCarta > pibSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }

      break;

    case 4:
      printf("\n\t--Atributo usado: Pontos turisticos--");
      printf("\nPontos turisticos: %d \t\t Pontos turisticos: %d", numeroDePontosTuristicosPrimeiraCarta, numeroDePontosTuristicosSegundaCarta);

      if (numeroDePontosTuristicosPrimeiraCarta != numeroDePontosTuristicosSegundaCarta){
        if(numeroDePontosTuristicosPrimeiraCarta > numeroDePontosTuristicosSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }
      
      break;

    case 5:
      printf("\n\t--Atributo usado: Densidade populacional--");
      printf("\nDensidade populacional: %.2f \t\t Densidade populacional: %.2f", densidadePopulacionalPrimeiraCarta, densidadePopulacionalSegundaCarta);

      if (densidadePopulacionalPrimeiraCarta != densidadePopulacionalSegundaCarta){
        if(densidadePopulacionalPrimeiraCarta < densidadePopulacionalSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }

      break;

    case 6:
      printf("\n\t--Atributo usado: PIB per Capita--");
      printf("\nPIB per Capita: %.2f \t\t PIB per Capita: %.2f", pibPerCaptaPrimeiraCarta, pibPerCaptaSegundaCarta);

      if (pibPerCaptaPrimeiraCarta != pibPerCaptaSegundaCarta){
        if(pibPerCaptaPrimeiraCarta > pibPerCaptaSegundaCarta)
          printf("\n\n\t---Carta 1 vence!---");
        else
          printf("\n\n\t---Carta 2 vence!---");
      }else{
        printf("\n\n\t---Empate!---");
      }
      
      break;

    default:
      printf("\n\n\t---Escolha invalida!---");
      break;
  }
  
  return 0;
}