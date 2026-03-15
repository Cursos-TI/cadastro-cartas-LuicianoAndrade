#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1[2], estado2 [2], cidade1[50], cidade2[50];
  char codigo1[5] , codigo2[5];
  int População1 ,populacao2, turisticos1 , turisticos2;
  float area1 , area2;
  float pib1 ,pib2;

  // Área para entrada de dados da carta 1
  printf ("Insira os dados da carta 1\n");

  printf ("Estado: ", Estado1);
  scanf ("%s" , &Estado1);

  printf ("Código: " , codigo1);
  scanf ("%s" , &codigo1);

  printf ("Nome: " , cidade1);
  scanf ("%s" , &cidade1);

  printf ("População: " , População1);
  scanf ("%d" , &População1);

  printf("Área: " , area1);
  scanf ("%f" , &area1);

  printf("PIB: " , pib1);
  scanf ("%f" , &pib1);

  printf ("Pontos Turísticos: " , turisticos1);
  scanf ("%d" , &turisticos1);

 // Área para entrada de dados da carta 2
  printf ("Insira os dados da carta 2\n");

  printf ("Estado: ", estado2);
  scanf ("%s" , &estado2);

  printf ("Código: " , codigo2);
  scanf ("%s" , &codigo2);

  printf ("Nome: " , cidade2);
  scanf ("%s" , &cidade2);

  printf ("População: " , populacao2);
  scanf ("%d" , &populacao2);

  printf("Área: " , area2);
  scanf ("%f" , &area2);
  
  printf("PIB: ", pib2 );
  scanf ("%f" , &pib2);

  printf ("Pontos Turísticos: " , turisticos2);
  scanf ("%d" , &turisticos2);

  // Área para exibição dos dados da cidade
  printf ("== CARTA 1 ==\n");
  printf ("Estado:%s\n" , Estado1);
  printf ("Código:%s\n" , codigo1);
  printf ("Nome::%s\n" , cidade1);
  printf ("População:%d\n" , População1);
  printf ("Área:%f\n" , area1);
  printf ("PIB:%f\n" , pib1);
  printf ("Pontos Turísticos:%d\n" , turisticos1);

  printf ("== CARTA 2 ==\n");
  printf ("Estado:%s\n" , estado2);
  printf ("Código:%s\n" , codigo2);
  printf ("Nome::%s\n" , cidade2);
  printf ("População:%d\n" , populacao2);
  printf ("Área:%f\n" , area2);
  printf ("PIB:%f\n" , pib2);
  printf ("Pontos Turísticos:%d" , turisticos2);


return 0;
} 
