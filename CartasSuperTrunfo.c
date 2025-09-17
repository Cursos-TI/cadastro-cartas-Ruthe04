#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

/* cada carta deve ter:
 Estado: nome e uma letra de 'A' a 'H' para representação
 Código da Carta: A letra do estado seguida de um número de 01 a 04 
 Nome da Cidade
 População
 Área (em km²)
 PIB
 Número de Pontos Turísticos
*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_carta1[40];
  char estado_carta2[40];

  char cidade_carta1[40];
  char cidade_carta2[40];

  char id_carta1[5];
  char id_carta2[5];

  int populacao_carta1; 
  int populacao_carta2;

  float area_carta1;
  float area_carta2;

  float pib_carta1;
  float pib_carta2;

  int turismo_carta1;
  int turismo_carta2;

  // Área para entrada de dados 
  printf("Insira o estado da carta 1, e uma letra de A a H para representação:");
  // "Leia do teclado até 39 caracteres e guarde no array estado_carta1, e no final coloque o caractere \0 que marca o fim da string."
  fgets(estado_carta1, sizeof(estado_carta1), stdin);
  // remove o \n que o fgets pode deixar
  estado_carta1[strcspn(estado_carta1, "\n")] = 0;
  
  printf("Insira o estado da carta 2, e uma letra de A a H para representação:");
  fgets(estado_carta2, sizeof(estado_carta2), stdin);
  estado_carta2[strcspn(estado_carta2, "\n")] = 0;

  printf("Insira o nome da cidade da carta 1:");
  fgets(cidade_carta1, sizeof(cidade_carta1), stdin);
  cidade_carta1[strcspn(cidade_carta1, "\n")] = 0;

  printf("Insira o nome da cidade da carta 2:");
  fgets(cidade_carta2, sizeof(cidade_carta2), stdin);
  cidade_carta2[strcspn(cidade_carta2, "\n")] = 0;

  printf("Insira o código da carta 1, que é a letra que representa o estado + um número de 01 a 04:");
  fgets(id_carta1, sizeof(id_carta1), stdin);
  id_carta1[strcspn(id_carta1, "\n")] = 0;

  printf("Insira o código da carta 2, que é a letra que representa o estado + um número de 01 a 04:");
  fgets(id_carta2, sizeof(id_carta2), stdin);
  id_carta2[strcspn(id_carta2, "\n")] = 0;

  printf("Insira a população total da carta 1:");
  scanf("%d", &populacao_carta1);
  while (getchar() != '\n');

  printf("Insira a população total da carta 2:");
  scanf("%d", &populacao_carta2);
  while (getchar() != '\n');

  printf("Insira a área total em Km² da carta 1:");
  scanf("%f", &area_carta1);
  while (getchar() != '\n');

  printf("Insira a área total em Km² da carta 2:");
  scanf("%f", &area_carta2);
  while (getchar() != '\n');

  printf("Insira o PIB da carta 1:");
  scanf("%f", &pib_carta1);
  while (getchar() != '\n');

  printf("Insira o PIB da carta 2:");
  scanf("%f", &pib_carta2);
  while (getchar() != '\n');

  printf("Insira o número de pontos turísticos da carta 1:");
  scanf("%d", &turismo_carta1);
  while (getchar() != '\n');

  printf("Insira o número de pontos turísticos da carta 2:");
  scanf("%d", &turismo_carta2);
  while (getchar() != '\n');

  // Área para exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado_carta1);
  printf("Cidade: %s\n", cidade_carta1);
  printf("Código da carta: %d\n", id_carta1);
  printf("População: %d\n", populacao_carta1);
  printf("Área em Km²: %.2f\n", area_carta1);
  printf("PIB: %.2f\n", pib_carta1);
  printf("Pontos Turísticos: %d\n", turismo_carta1);

  //printf("Carta 2: \n, Estado: %s\n, Cidade: %s\n, Código da carta: %d\n, População: %d\n, Área em Km²: %f\n, PIB: %f\n, Pontos Turísticos: %d\n", 
  //estado_carta2, cidade_carta2, id_carta2, populacao_carta2, area_carta2, pib_carta2, turismo_carta2);

return 0;
} 
