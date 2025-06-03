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
  float areaPrimeiraCarta, pibPrimeiraCarta;

  // Variaveis da segunda carta
  char estadoSegundaCarta[2]; 
  char codigoSegundaCarta[3]; 
  char nomeCidadeSegundaCarta[20];
  int populacaoSegundaCarta, numeroDePontosTuristicosSegundaCarta;
  float areaSegundaCarta, pibSegundaCarta;

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
  printf("\n--------------------------------------\n");
  
  return 0;
}
