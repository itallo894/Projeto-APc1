#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao = 0;
  int na;
  int n1;

  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("ROLETA CASSINO\n");
    printf("1 - INICIAR\n");
    printf("2 - VER SALDO\n");
    printf("3 - AJUDA\n");
    printf("4 - SAIR\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%i", &opcao);
    printf("\n");
    while (getchar() != '\n')
      ;
    if (!deu_certo) {
      opcao = 0;
    }
    switch (opcao) {
    case 1: {
      char nome[31];
      deu_certo = system("clear");
      printf("Qual o seu nome? ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n')
        ;
      printf("Ola %s!\n", nome);
      printf("pressione ENTER para iniciar...\n");
      getchar();


      srand(time(NULL));

      na = rand() % 50;

      int deu_certo = system("clear");
      printf("BEM VINDO A ROLETA DO MILHAO!! \n");
      printf("EU SOU O PEDRO, O APRESENTADOR DO PROGRAMA \n");
      printf("E AGORA TE PASSAREI AS INSTRUÇÕES... \n");
      printf("NESSA ROLETA VOCE PODE: \n");
      printf("DIGITE (-1) - P/ APOSTAR EM NUMEROS IMPARES VALENDO 1 MILHAO\n");
      printf("DIGITE (-2) - P/ APOSTAR EM NUMEROS PARES VALENDO 1 MILHAO\n");
      printf(
          "DIGITE UM NUMERO ENTRE 0 E 50 - P/ APOSTAR EM NUMEROS  ESPECIFICOS\n");
      printf("SE VOCE ACERTAO O NUMERO ESPECÍFICO GANHA 100 MILHOES DE REAIS\n");
      printf("CASO NÃO ACERTE NADA VOCE PERDE TUDO!!\n");
      printf("ENTÃO VAMOS COMEÇAR!! \n");
      printf("DIGITE (-1), (-2), ou um numero entre 0 e 50: ");
      deu_certo = scanf("%d", &n1);

      if ((n1 == -1) || (n1 == -2) || (n1 >= -2 && n1 <= 50)) {
        if (n1 == -1) {
          printf("voce escolheu numeros impares\n");
          printf("O resultado da roleta foi: %d\n", na);
          if (na % 2 == 1) {
            printf("parabens voce ganhou 1 milhao de reais!!\n");
          } else {
            printf("voce perdeu todo seu dinheiro, tente novamente! \n");
          }
        }
        if (n1 == -2) {
          printf("voce escolheu numeros pares\n");
          printf("O resultado da roleta foi: %d\n", na);
          if (na % 2 == 0) {
            printf("parabens voce ganhou 1 milhao de reais!!\n");
          } else {
            printf("voce perdeu todo seu dinheiro, tente novamente! \n");
          }
        }
        if (na == n1) {
          printf("voce escolheu o numero: %i \n", n1);
          printf("O resultado da roleta foi: %d\n", na);
          printf("parabens voce ganhou 100 milhoes de reais!!\n");
        }
        if ((n1 != -1) && (n1 != -2) && (na != n1)) {
          printf("voce escolheu o numero: %i \n", n1);
          printf("O resultado da roleta foi: %d\n", na);
          printf("voce perdeu todo seu dinheiro, tente novamente! \n");
        }
      } else {
        printf("numero invalido!\n ");
      }
    } break;
    case 2: {
      deu_certo = system("clear");
      printf("-----SALDO DE COINS-----\n");
      printf("Seu saldo é de 1000 coins\n");
      printf("pressione ENTER para voltar...");
      getchar();
    }
      break;
    case 3: {

    }
      break;
    case 4:
      printf("até logo!\n");
      break;
    default:
      printf("Opcao invalida! Precione ENTER para prosseguir...\n");
      getchar();
    }
  }

  return 0;
}