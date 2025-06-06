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
  unsigned int populacaoPrimeiraCarta;
  int numeroDePontosTuristicosPrimeiraCarta;
  float areaPrimeiraCarta, pibPrimeiraCarta, pibPerCaptaPrimeiraCarta, densidadePopulacionalPrimeiraCarta;
  float superPoderPrimeiraCarta, densidadePopulacionalInvertidaPrimeiraCarta;

  // Variaveis da segunda carta
  char estadoSegundaCarta[2]; 
  char codigoSegundaCarta[3]; 
  char nomeCidadeSegundaCarta[20];
  unsigned int populacaoSegundaCarta;
  int numeroDePontosTuristicosSegundaCarta;
  float areaSegundaCarta, pibSegundaCarta, pibPerCaptaSegundaCarta, densidadePopulacionalSegundaCarta;
  float superPoderSegundaCarta, densidadePopulacionalInvertidaSegundaCarta;

  // Flags de controle do menu
  int usadoPop = 0, usadoArea = 0, usadoPIB = 0, usadoPontos = 0;
  int usadoDensidade = 0, usadoPibCapita = 0;
  int escolha1, escolha2;

  // Variavel que armaneza qual carta ganhou a soma (2 para empate, 1 para carta 1, 0 para carta 2)
  int vencedoraSuper;

  // Variavel que vai armazenar a vencedora final (2 para empate, 1 para carta 1, 0 para carta 2)
  int vencedoraFinal;

  // Variaveis que vao armanezar quantas vitorias teve cada carta
  int vitoriasPrimeiraCarta = 0, vitoriasSegundaCarta = 0;

  printf("\n------Super Trunfo!------\n");
  printf("\n---Preencha a primeira carta---\n"); // Preenchimento da primeira carta
  printf("Estado (Letra 'A' a 'H'): ");
  scanf("%s", estadoPrimeiraCarta);
  printf("Codigo da carta (Ex: A01, B03): ");
  scanf("%s", codigoPrimeiraCarta);
  printf("Nome da cidade: ");
  scanf("%s", nomeCidadePrimeiraCarta);
  printf("Populacao: ");
  scanf("%u", &populacaoPrimeiraCarta);
  printf("Area: ");
  scanf("%f", &areaPrimeiraCarta);
  printf("PIB: ");
  scanf("%f", &pibPrimeiraCarta);
  printf("Numero de pontos turisticos: ");
  scanf("%d", &numeroDePontosTuristicosPrimeiraCarta);

  // Realizando calculos da primeira carta
  densidadePopulacionalPrimeiraCarta = populacaoPrimeiraCarta / areaPrimeiraCarta;
  pibPerCaptaPrimeiraCarta = pibPrimeiraCarta / populacaoPrimeiraCarta;
  // Calculando o inverso da densidade populacional para o calculo de super poder.
  densidadePopulacionalInvertidaPrimeiraCarta = 1 / densidadePopulacionalPrimeiraCarta;

  // Preenchimento da segunda carta
  printf("\n---Preencha a segunda carta---\n"); 
  printf("Estado (Letra 'A' a 'H'): ");
  scanf("%s", estadoSegundaCarta);
  printf("Codigo da carta (Ex: A01, B03): ");
  scanf("%s", codigoSegundaCarta);
  printf("Nome da cidade: ");
  scanf("%s", nomeCidadeSegundaCarta);
  printf("Populacao: ");
  scanf("%u", &populacaoSegundaCarta);
  printf("Area: ");
  scanf("%f", &areaSegundaCarta);
  printf("PIB: ");
  scanf("%f", &pibSegundaCarta);
  printf("Numero de pontos turisticos: ");
  scanf("%d", &numeroDePontosTuristicosSegundaCarta);

  // Realizando calculos da segunda carta 
  densidadePopulacionalSegundaCarta = populacaoSegundaCarta / areaSegundaCarta;
  pibPerCaptaSegundaCarta = pibSegundaCarta / populacaoSegundaCarta;
  // Calculando o inverso da densidade populacional para o calculo de super poder.
  densidadePopulacionalInvertidaSegundaCarta = 1 / densidadePopulacionalSegundaCarta;

  // Título da exibição
  printf("\n\n---Cartas---\n\n");
  // Exibição da primeira carta
  printf("Carta 1:\n");
  printf("\nEstado: %s", estadoPrimeiraCarta);
  printf("\nCodigo: %s", codigoPrimeiraCarta);
  printf("\nNome da Cidade: %s", nomeCidadePrimeiraCarta);
  printf("\nPopulacao: %u", populacaoPrimeiraCarta);
  printf("\nArea: %.2f km", areaPrimeiraCarta);
  printf("\nPIB: %.2f bilhoes de reais", pibPrimeiraCarta);
  printf("\nNumero de pontos turisticos: %d", numeroDePontosTuristicosPrimeiraCarta);
  printf("\nDensidade Populacional: %.2f", densidadePopulacionalPrimeiraCarta);
  printf("\nPIB per Capita: %.2f", pibPerCaptaPrimeiraCarta);
  printf("\n--------------------------------------\n");

  // Exibição da segunda carta
  printf("Carta 2:\n");
  printf("\nEstado: %s", estadoSegundaCarta);
  printf("\nCodigo: %s", codigoSegundaCarta);
  printf("\nNome da Cidade: %s", nomeCidadeSegundaCarta);
  printf("\nPopulacao: %u", populacaoSegundaCarta);
  printf("\nArea: %.2f km", areaSegundaCarta);
  printf("\nPIB: %.2f bilhoes de reais", pibSegundaCarta);
  printf("\nNumero de pontos turisticos: %d", numeroDePontosTuristicosSegundaCarta);
  printf("\nDensidade Populacional: %.2f", densidadePopulacionalSegundaCarta);
  printf("\nPIB per Capita: %.2f", pibPerCaptaSegundaCarta);
  printf("\n--------------------------------------\n");

  // Inicio do menu
  printf("Batalha de cartas!\n");
  printf("Escolha uma opcao:\n");
  printf("1 - Comparar Populacao\n");
  printf("2 - Comparar Area\n");
  printf("3 - Comparar PIB\n");
  printf("4 - Comparar Numero de Pontos Turisticos\n");
  printf("5 - Comparar Densidade Populacional\n");
  printf("6 - Comparar PIB per Capita\n");
  printf("Escolha: ");
  scanf("%d", &escolha1);

  switch(escolha1){
    case 1:
      usadoPop = 1;
      break;
    case 2:
      usadoArea = 1;
      break;
    case 3:
      usadoPIB = 1;
      break;
    case 4:
      usadoPontos = 1;
      break;
    case 5:
      usadoDensidade = 1;
      break;
    case 6:
      usadoPibCapita = 1;
      break;
    default:
      printf("\nEscolha invalida!\n");
      return 1;
  }

  printf("\nEscolha outra opcao diferente da anterior:\n");

  if(usadoPop == 0)
    printf("1 - Comparar Populacao\n");

  if(usadoArea == 0)
    printf("2 - Comparar Area\n");

  if(usadoPIB == 0)
    printf("3 - Comparar PIB\n");

  if(usadoPontos == 0)
    printf("4 - Comparar Numero de Pontos Turisticos\n");

  if(usadoDensidade == 0)
    printf("5 - Comparar Densidade Populacional\n");

  if(usadoPibCapita == 0)
    printf("6 - Comparar PIB per Capita\n");

  printf("Escolha: ");
  scanf("%d", &escolha2);

  switch (escolha2)
  {
    case 1:
      if(usadoPop == 1){
        printf("\nOpcao ja usada! --> Populacao\n");
        return 1; // Finaliza o codigo
      }
      else
        usadoPop = 1;
      break;
    case 2:
      if(usadoArea == 1){
        printf("\nOpcao ja usada! --> Area\n");
        return 1; // Finaliza o codigo
      }
      else
        usadoArea = 1;
      break;
    case 3:
      if(usadoPIB == 1){
        printf("\nOpcao ja usada! --> PIB\n");
        return 1; // Finaliza o codigo
      }
      else
        usadoPIB = 1;
      break;
    case 4:
      if(usadoPontos == 1){
        printf("\nOpcao ja usada! --> Numero de Pontos Turisticos\n");
        return 1; // Finaliza o codigo
      }
      else
        usadoPontos = 1;
      break;
    case 5:
      if(usadoDensidade == 1){
        printf("\nOpcao ja usada! --> Densidade Populacional\n");
        return 1; // Finaliza o codigo
      }
      else
        usadoDensidade = 1;
      break;
    case 6:
      if(usadoPibCapita == 1){
        printf("\nOpcao ja usada! --> PIB per Capita\n");
        return 1; // Finaliza o codigo
      }
      else 
        usadoPibCapita = 1;
      break;
    default:
      printf("\nEscolha invalida!\n");
      return 1; // Finaliza o codigo
  }

  // Calculando o super poder e vitoria individual de acordo com as 15 combinações de atributos possíveis
  if(usadoPop == 1 && usadoArea == 1){
    superPoderPrimeiraCarta = populacaoPrimeiraCarta + areaPrimeiraCarta;
    superPoderSegundaCarta = populacaoSegundaCarta + areaSegundaCarta;
  }else if(usadoPop == 1 && usadoPIB == 1){
    superPoderPrimeiraCarta = populacaoPrimeiraCarta + pibPrimeiraCarta;
    superPoderSegundaCarta = populacaoSegundaCarta + pibSegundaCarta;
  }else if(usadoPop == 1 && usadoPontos == 1){
    superPoderPrimeiraCarta = populacaoPrimeiraCarta + numeroDePontosTuristicosPrimeiraCarta;
    superPoderSegundaCarta = populacaoSegundaCarta + numeroDePontosTuristicosSegundaCarta;
  }else if(usadoPop == 1 && usadoDensidade == 1){
    superPoderPrimeiraCarta = populacaoPrimeiraCarta + densidadePopulacionalInvertidaPrimeiraCarta;
    superPoderSegundaCarta = populacaoSegundaCarta + densidadePopulacionalSegundaCarta;
  }else if(usadoPop == 1 && usadoPibCapita == 1){
    superPoderPrimeiraCarta = populacaoPrimeiraCarta + pibPerCaptaPrimeiraCarta;
    superPoderSegundaCarta = populacaoSegundaCarta + pibPerCaptaSegundaCarta;
  }else if(usadoArea == 1 && usadoPIB == 1){
    superPoderPrimeiraCarta = areaPrimeiraCarta + pibPrimeiraCarta;
    superPoderSegundaCarta = areaSegundaCarta + pibSegundaCarta;
  }else if(usadoArea == 1 && usadoPontos == 1){
    superPoderPrimeiraCarta = areaPrimeiraCarta + numeroDePontosTuristicosPrimeiraCarta;
    superPoderSegundaCarta = areaSegundaCarta + numeroDePontosTuristicosSegundaCarta;
  }else if(usadoArea == 1 && usadoDensidade == 1){
    superPoderPrimeiraCarta = areaPrimeiraCarta + densidadePopulacionalInvertidaPrimeiraCarta;
    superPoderSegundaCarta = areaSegundaCarta + densidadePopulacionalInvertidaSegundaCarta;
  }else if(usadoArea == 1 && usadoPibCapita == 1){
    superPoderPrimeiraCarta = areaPrimeiraCarta + pibPerCaptaPrimeiraCarta;
    superPoderSegundaCarta = areaSegundaCarta + pibPerCaptaSegundaCarta;
  }else if(usadoPIB == 1 && usadoPontos == 1){
    superPoderPrimeiraCarta = pibPrimeiraCarta + numeroDePontosTuristicosPrimeiraCarta;
    superPoderSegundaCarta = pibSegundaCarta + numeroDePontosTuristicosSegundaCarta;
  }else if(usadoPIB == 1 && usadoDensidade == 1){
    superPoderPrimeiraCarta = pibPrimeiraCarta + densidadePopulacionalInvertidaPrimeiraCarta;
    superPoderSegundaCarta = pibSegundaCarta + densidadePopulacionalInvertidaSegundaCarta;
  }else if(usadoPIB == 1 && usadoPibCapita == 1){
    superPoderPrimeiraCarta = pibPrimeiraCarta + pibPerCaptaPrimeiraCarta;
    superPoderSegundaCarta = pibSegundaCarta + pibPerCaptaSegundaCarta;
  }else if(usadoPontos == 1 && usadoDensidade == 1){
    superPoderPrimeiraCarta = numeroDePontosTuristicosPrimeiraCarta + densidadePopulacionalInvertidaPrimeiraCarta;
    superPoderSegundaCarta = numeroDePontosTuristicosSegundaCarta + densidadePopulacionalInvertidaSegundaCarta;
  }else if(usadoPontos == 1 && usadoPibCapita == 1){
    superPoderPrimeiraCarta = numeroDePontosTuristicosPrimeiraCarta + pibPerCaptaPrimeiraCarta;
    superPoderSegundaCarta = numeroDePontosTuristicosSegundaCarta + pibPerCaptaSegundaCarta;
  }else if(usadoDensidade == 1 && usadoPibCapita == 1){
    superPoderPrimeiraCarta = densidadePopulacionalInvertidaPrimeiraCarta + pibPerCaptaPrimeiraCarta;
    superPoderSegundaCarta = densidadePopulacionalInvertidaSegundaCarta + pibPerCaptaSegundaCarta;
  }

  // Imprimindo titulo da comparacao
  printf("\n\t---Comparacao---");
  printf("\nCarta 1: \t\t Carta 2:");
  printf("\nNome: %s \t\t Nome: %s", nomeCidadePrimeiraCarta, nomeCidadeSegundaCarta);
  // Imprimindo só atributos que vão ser usados na comparacao
  if(usadoPop == 1){
    printf("\nPopulacao: %u \t\t Populacao: %u", populacaoPrimeiraCarta, populacaoSegundaCarta);
    if(populacaoPrimeiraCarta > populacaoSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence na Populacao!---\n");
    }else if(populacaoSegundaCarta > populacaoPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence na Populacao!---\n");
    }else{
      printf("\n\t---Empate na Populacao!---\n");
    }
  }
  if(usadoArea == 1){
    printf("\nArea: %.2f \t\t Area: %.2f", areaPrimeiraCarta, areaSegundaCarta);
    if(areaPrimeiraCarta > areaSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence na Area!---\n");
    }else if(areaSegundaCarta > areaPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence na Area!---\n");
    }else{
      printf("\n\t---Empate na Area!---\n");
    }    
  }
  if(usadoPIB == 1){
    printf("\nPIB: %.2f \t\t PIB: %.2f", pibPrimeiraCarta, pibSegundaCarta);
    if(pibPrimeiraCarta > pibSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence no PIB!---\n");
    }else if(pibSegundaCarta > pibPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence no PIB!---\n");
    }else{
      printf("\n\t---Empate no PIB!---\n");
    }    
  }
  if(usadoPontos == 1){
    printf("\nN. pontos Tur.: %d \t\t N. pontos Tur.: %d", numeroDePontosTuristicosPrimeiraCarta, numeroDePontosTuristicosSegundaCarta);
    if(numeroDePontosTuristicosPrimeiraCarta > numeroDePontosTuristicosSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence no N. pontos Tur!---\n");
    }else if(numeroDePontosTuristicosSegundaCarta > numeroDePontosTuristicosPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence no N. pontos Tur!---\n");
    }else{
      printf("\n\t---Empate no N. pontor Tur!---\n");
    }    
  }
  if(usadoDensidade == 1){
    printf("\nDensidade Pop.: %.2f \t\t Densidade Pop.: %.2f", densidadePopulacionalPrimeiraCarta, densidadePopulacionalSegundaCarta);
    if(densidadePopulacionalPrimeiraCarta < densidadePopulacionalSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence na Densidade Pop!---\n");
    }else if(densidadePopulacionalSegundaCarta < densidadePopulacionalPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence na Densidade Pop!---\n");
    }else{
      printf("\n\t---Empate na Densidade Pop!---\n");
    }    
  }
  if(usadoPibCapita == 1){
    printf("\nPIB p. Capita: %.2f \t\t PIB p. Capita: %.2f", pibPerCaptaPrimeiraCarta, pibPerCaptaSegundaCarta);
    if(pibPerCaptaPrimeiraCarta > pibPerCaptaSegundaCarta){
      vitoriasPrimeiraCarta++;
      printf("\n\t---Carta 1 vence no PIB p. Capita!---\n");
    }else if(pibPerCaptaSegundaCarta > pibPerCaptaPrimeiraCarta){
      vitoriasSegundaCarta++;
      printf("\n\t---Carta 2 vence no PIB p. Capita!---\n");
    }else{
      printf("\n\t---Empate no PIB p. Capita!---\n");
    }    
  }

  printf("\nSuper Poder: %.2f \t\t Super Poder: %.2f", superPoderPrimeiraCarta, superPoderSegundaCarta);

  vencedoraSuper = superPoderPrimeiraCarta == superPoderSegundaCarta ? 2 
    : superPoderPrimeiraCarta > superPoderSegundaCarta ? 1 : 0;

  if(vencedoraSuper == 2)
    printf("\n\t---Empate no Super Poder!---\n");
  else if (vencedoraSuper == 1){
    printf("\n\t---Carta 1 vence no Super Poder!---\n");
    vitoriasPrimeiraCarta++;
  }else{
    printf("\n\t---Carta 2 vence no Super Poder!---\n");
    vitoriasSegundaCarta++;
  }

  // Preenchendo vencedora final
  vencedoraFinal = vitoriasPrimeiraCarta == vitoriasSegundaCarta ? 2
  : vitoriasPrimeiraCarta > vitoriasSegundaCarta ? 1
  : 0;

  if(vencedoraFinal == 2)
    printf("\n\t--*Empate no Final!*--\n");
  else if (vencedoraFinal == 1){
    printf("\n\t--*Carta 1 vence no Final!*--\n");
  }else{
    printf("\n\t--*Carta 2 vence no Final!*--\n");
  }

  return 0;
}