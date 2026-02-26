#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[2] , cidade[50];
  char codigo[50];
  int População , turisticos;
  float area , pib;

  // Área para entrada de dados
  printf ("Insira os dados da carta 1\n");

  printf ("Estado: ", Estado);
  scanf ("%s" , &Estado);

  printf ("Código: " , codigo);
  scanf ("%s" , &codigo);

  printf ("Nome: " , cidade);
  scanf ("%s" , &cidade);

  printf ("População: " , População);
  scanf ("%d" , &População);

  printf("Área: " , area);
  scanf ("%f " , &area);

  printf("PIB: " , pib);
  scanf ("%f" , &pib);

  printf ("Pontos Turísticos:\n " , turisticos);
  scanf ("%d" , &turisticos);


  // Área para exibição dos dados da cidade
  printf ("== CARTA 1 ==\n");
  printf ("Estado:%s\n" , Estado);
  printf ("Código:%s\n" , codigo);
  printf ("Nome::%s\n" , cidade);
  printf ("População:%d\n" , População);
  printf ("Área:%f " , area);
  printf ("PIB:%F" , pib);
  printf ("Pontos Turísticos:%d" , turisticos);



return 0;
} 
