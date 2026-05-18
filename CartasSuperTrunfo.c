#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1[2], estado2 [2], cidade1[50], cidade2[50];
  char codigo1[5] , codigo2[5];
  unsigned int População1 ,populacao2;
  int turisticos1 , turisticos2 , opcao;
  float area1 , area2;
  float pib1 ,pib2;
  float densidade1 , densidade2 , percapita1 , percapita2;
  float superpoder1 , superpoder2;
   

  // Área para entrada de dados da carta 1
  printf ("Insira os dados da carta 1\n");

  printf ("Estado: ", Estado1);
  scanf ("%s" , &Estado1);

  printf ("Código: " , codigo1);
  scanf ("%s" , &codigo1);

  printf ("Nome: " , cidade1);
  scanf ("%s" , &cidade1);

  printf ("População: " , População1);
  scanf ("%u" , &População1);

  printf("Área(km²): " , area1);
  scanf ("%f" , &area1);

  printf("PIB: " , pib1);
  scanf ("%f" , &pib1);

  printf ("Pontos Turísticos: " , turisticos1);
  scanf ("%d" , &turisticos1);

  // CALCULO DENSIDADE E PER CAPITA 1
  densidade1 = População1 / area1;
 
  percapita1 = pib1 / População1;

  // SUPER PODER 1

  superpoder1 = ((float)População1 + area1 + pib1 + percapita1 +(float)turisticos1 +(1/densidade1));

 // Área para entrada de dados da carta 2
  printf ("Insira os dados da carta 2\n");

  printf ("Estado: ", estado2);
  scanf ("%s" , &estado2);

  printf ("Código: " , codigo2);
  scanf ("%s" , &codigo2);

  printf ("Nome: " , cidade2);
  scanf ("%s" , &cidade2);

  printf ("População: " , populacao2);
  scanf ("%u" , &populacao2);

  printf("Área(km²): " , area2);
  scanf ("%f" , &area2);
  
  printf("PIB: ", pib2 );
  scanf ("%f" , &pib2);

  printf ("Pontos Turísticos: " , turisticos2);
  scanf ("%d" , &turisticos2);

  // CALCULO DENSIDADE E PER CAPITA 2

  densidade2 = populacao2 / area2;
 
  percapita2 = pib2 / populacao2;

  // SUPER PODER 2

  superpoder2 = ((float)populacao2 + area2 + pib2 + percapita2 + (float)turisticos2 +(1/densidade2));

  // Área para exibição dos dados da cidade 1
  printf ("== CARTA 1 ==\n");
  printf ("Estado:%s\n" , Estado1);
  printf ("Código:%s\n" , codigo1);
  printf ("Nome::%s\n" , cidade1);
  printf ("População:%u\n" , População1);
  printf ("Área:%f\n" , area1);
  printf ("PIB:%f\n" , pib1);
  printf ("Pontos Turísticos:%d\n" , turisticos1);
  printf ("Densidade Populacional:%2f\n" , densidade1);
  printf ("PIB per CAPITA:%f\n" , percapita1);
  printf ("Super Poder 1:%2.f\n" , superpoder1); 

  // Área para exibição dos dados da cidade 2
  printf ("== CARTA 2 ==\n");
  printf ("Estado:%s\n" , estado2);
  printf ("Código:%s\n" , codigo2);
  printf ("Nome::%s\n" , cidade2);
  printf ("População:%u\n" , populacao2);
  printf ("Área:%f\n" , area2);
  printf ("PIB:%f\n" , pib2);
  printf ("Pontos Turísticos:%d\n" , turisticos2);
  printf ("Densidade Populacional:%2f\n" , densidade2);
  printf ("PIB per CAPITA:%f\n" , percapita2);
  printf ("Super Poder 2:%2.f\n" , superpoder2); 
  
  // comparação das cartas
  printf ("========COMPARAÇÃO DAS CARTAS========\n");
   
  printf("ESCOLHA UM ATRIBUTO PARA SER COMPARADO");
  printf("1. POPULAÇÃO");
  printf("2. ÁREA");
  printf("3. POPULAÇÃO");
  printf("4. PONTOS TURÍSTICOS");
  printf("5. DENSIDADE POPULACIONAL");
  printf("6. PIB PER CAPITA");
  printf("7. SUPER PODER");
  printf("ESCOLHA UMA DAS OPÇÕES ACIMA:" , opcao);
  scanf ("%d" , &opcao);


  switch (opcao)
  {
    case 1:
      printf("ATRIBUTO POPULÇÃO");
      if (População1 > populacao2){

       printf("CARTA 1 VENCEU")

      } else if (População1 < populacao2)

       printf ("CARTA 2 VENCEU")

      {
        else:
       printf ("EMPATE")
      }
      
      

     break;

    case 2:

     break;
    case 3:

     break;
    case 4:

     break;
    case 5:

     break;
    case 6:

     break;
    case 7:

   break;

  default:
    printf("OPÇÃO INVÁLIDA");
    break;
  }


   // COMPARAÇÃO DAS CARTAS ESCOLHIDAS  
   



return 0;
} 