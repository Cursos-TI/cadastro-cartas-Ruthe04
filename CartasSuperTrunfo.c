#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

/* cada carta deve ter:
 Estado
 Nome da Cidade
 Código da Carta
 População
 Área (em km²)
 PIB
 Número de Pontos Turísticos
 nível intermediario: feito

 nível mestre:
 "Super Poder" somando todos os atributos numéricos 
 inverso da densidade populacional – quanto menor a densidade, maior o "poder"               
 Compare as duas cartas atributo por atributo (exceto estado, código e nome),
 incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence
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


  //nivel intermediario, calculos abaixo, após pegar o valor da densidade e do pib do usuário
  

  // Área para entrada de dados 
  printf("Insira o estado da carta 1, e uma letra de A a H para representação: ");
  // "Leia do teclado até 39 caracteres e guarde no array estado_carta1, e no final coloque o caractere \0 que marca o fim da string."
  fgets(estado_carta1, sizeof(estado_carta1), stdin);
  // remove o \n que o fgets pode deixar
  estado_carta1[strcspn(estado_carta1, "\n")] = 0;
  
  printf("Insira o estado da carta 2, e uma letra de A a H para representação:");
  fgets(estado_carta2, sizeof(estado_carta2), stdin);
  estado_carta2[strcspn(estado_carta2, "\n")] = 0;

  printf("\n");

  printf("Insira o nome da cidade da carta 1:");
  fgets(cidade_carta1, sizeof(cidade_carta1), stdin);
  cidade_carta1[strcspn(cidade_carta1, "\n")] = 0;

  printf("Insira o nome da cidade da carta 2:");
  fgets(cidade_carta2, sizeof(cidade_carta2), stdin);
  cidade_carta2[strcspn(cidade_carta2, "\n")] = 0;

  printf("\n");

  printf("Insira o código da carta 1, que é a letra que representa o estado + um número de 01 a 04:");
  fgets(id_carta1, sizeof(id_carta1), stdin);
  id_carta1[strcspn(id_carta1, "\n")] = 0;

  printf("Insira o código da carta 2, que é a letra que representa o estado + um número de 01 a 04:");
  fgets(id_carta2, sizeof(id_carta2), stdin);
  id_carta2[strcspn(id_carta2, "\n")] = 0;

  printf("\n");

  printf("Insira a população total da carta 1:");
  scanf("%d", &populacao_carta1);
  while (getchar() != '\n'); //limpa o buffer 

  printf("Insira a população total da carta 2:");
  scanf("%d", &populacao_carta2);
  while (getchar() != '\n');

  printf("\n");

  printf("Insira a área total em Km² da carta 1:");
  scanf("%f", &area_carta1);
  while (getchar() != '\n');

  printf("Insira a área total em Km² da carta 2:");
  scanf("%f", &area_carta2);
  while (getchar() != '\n');

  printf("\n");

  printf("Insira o PIB da carta 1:");
  scanf("%f", &pib_carta1);
  while (getchar() != '\n');

  printf("Insira o PIB da carta 2:");
  scanf("%f", &pib_carta2);
  while (getchar() != '\n');

  printf("\n");

  printf("Insira o número de pontos turísticos da carta 1:");
  scanf("%d", &turismo_carta1);
  while (getchar() != '\n');

  printf("Insira o número de pontos turísticos da carta 2:");
  scanf("%d", &turismo_carta2);
  while (getchar() != '\n');


  //nivel intermediario
  //calculo densidade populacional 
  float densidade_carta1 = populacao_carta1 / area_carta1;
  float densidade_carta2 = populacao_carta2 / area_carta2;
  //calculo do pib per capita
  float pibCapita_carta1 = pib_carta1 / populacao_carta1;
  float pibCapita_carta2 = pib_carta2 / populacao_carta2;
  //populacao é tipo int, area e pib sao tipo float, aqui ocorre uma conversão de dados implicita

  //nivel mestre
  float inversoDensidade1 = 1.0 / densidade_carta1;
  float inversoDensidade2 = 1.0 / densidade_carta2;

  float superPoder1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + pibCapita_carta1 
  + (float)turismo_carta1 + inversoDensidade1;
  float superPoder2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + pibCapita_carta2 
  + (float)turismo_carta2 + inversoDensidade2;


  //comparações
  int venceuPopulacao = populacao_carta1 > populacao_carta2;
  int venceuArea = area_carta1 > area_carta2;
  int venceuPib = pib_carta1 > pib_carta2;
  int venceuPibCapita = pibCapita_carta1 > pibCapita_carta2;
  int venceuTurismo = turismo_carta1 > turismo_carta2;
  int venceuDensidade = densidade_carta1 < densidade_carta2;
  int venceuPoder = superPoder1 > superPoder2;


  // Área para exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado_carta1);
  printf("Cidade: %s\n", cidade_carta1);
  printf("Código da carta: %s\n", id_carta1);
  printf("População: %d\n", populacao_carta1);
  printf("Área em Km²: %.2f\n", area_carta1);
  printf("PIB: %.2f\n", pib_carta1);
  printf("Pontos Turísticos: %d\n", turismo_carta1);
  //nivel intermediario
  printf("Densidade populacional: %.2f\n", densidade_carta1);
  printf("PIB per capita: %.2f\n", pibCapita_carta1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %s\n", estado_carta2);
  printf("Cidade: %s\n", cidade_carta2);
  printf("Código da carta: %s\n", id_carta2);
  printf("População: %d\n", populacao_carta2);
  printf("Área em Km²: %.2f\n", area_carta2);
  printf("PIB: %.2f\n", pib_carta2);
  printf("Pontos Turísticos: %d\n", turismo_carta2);
  //nivel intermediario
  printf("Densidade populacional: %.2f\n", densidade_carta2);
  printf("PIB per capita: %.2f\n", pibCapita_carta2);


  //nivel mestre 
  printf("\n===Vencedor===\n");
  printf("1 para verdadeiro, 0 para falso \n");

  printf("Carta 1 venceu população? %d\n", venceuPopulacao);
  printf("Carta 1 venceu Área? %d\n", venceuArea);
  printf("Carta 1 venceu PIB? %d\n", venceuPib);
  printf("Carta 1 venceu PIB Per Capita? %d\n", venceuPibCapita);
  printf("Carta 1 venceu Pontos Turísticos? %d\n", venceuTurismo);
  printf("Carta 1 venceu Densidade? %d\n", venceuDensidade);
  printf("Carta 1 venceu Super Poder? %d\n", venceuPoder);

  printf("\n");


  printf("Obrigada pelos dados, fase final! Difícil sem usar estruturas condicionais :(");

return 0;
} 

//por padrão o %f tem 6 casas decimaiss