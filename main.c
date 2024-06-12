#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Itallo de sousa Lima - 2412130020
// Pedro Barbosa Souza - 2412130124

int main() {
  int opcao = 0;
  int nAleatorio;
  char n1[10];
  char retorno;
  int saldo = 0;
  int deposito = 0;
  int vRodada;
  int vitoria;
  int derrota;
  char nome[31];

  system("clear");
  printf("Qual o seu nome? ");
  scanf(" %[^\n]s", nome);

  while (opcao != 4) {
    while (getchar() != '\n')
      ;
    printf("\n");
    system("clear");
    printf("ROLETA CASSINO\n");
    printf("1 - INICIAR\n");
    printf("2 - DEPOSITAR COYNS\n");
    printf("3 - CONSULTAR SALDO\n");
    printf("4 - SAIR\n");
    printf("Escolha uma opção => ");
    if (scanf("%i", &opcao) == 0) {
      opcao = 0;
    }
    printf("\n");
    while (getchar() != '\n')
      ;

    switch (opcao) {
    case 1: {
      system("clear");
      printf("Ola %s!\n", nome);
      printf("Seja Muito bem - vindo!\n");
      printf("Pressione ENTER para iniciar...\n");
      getchar();

      srand(time(NULL));

      do {
        nAleatorio = rand() % 51;

        system("clear");
        printf("RRRRR   OOO   L      EEEEE    TTTTT   A\n");
        printf("R    R O   O  L      E          T    A A\n");
        printf("RRRRR  O   O  L      EEE        T   AAAAA\n");
        printf("R   R  O   O  L      E          T   A   A\n");
        printf("R    R  OOO   LLLLL  EEEEE      T   A   A\n");

        printf("\n");
        printf("Saldo : R$%i\n", saldo);
        printf("_______________\n");
        printf("\n");
        printf("DIGITE (I) - Conjunto Números Impares!\n");
        printf("DIGITE (P) - Conjunto Números Pares!\n");
        printf("\n");
        printf("Temos a opção de entrada com valores únicos\n");
        printf("Escolha uma opção entre 0 e 50.\n");
        printf("\n");
        printf("A rodada irá começar! \n");
        printf("Insira sua entrada nessa Rodada %s!\n", nome);

        scanf("%9s", n1);
        while (getchar() != '\n')
          ;

        n1[0] = toupper(n1[0]);

        printf("Insira o Valor Y$ que irá jogar nessa rodada! Y$\n");
        scanf("%d", &vRodada);
        while (getchar() != '\n')
          ;

        if (saldo >= vRodada) {
          printf("Opção Selecionada %s, valor inserido Y$%i.\n \n", n1,
                 vRodada);

          int n1_num = atoi(n1);
          if (n1[0] == 'I' || n1[0] == 'P' || (n1_num >= 0 && n1_num <= 50)) {
            if (n1[0] == 'I') {
              printf("Você escolheu números ímpares\n");
              printf("O resultado da roleta foi: %d\n \n", nAleatorio);
              if (nAleatorio % 2 == 1) {
                vitoria = vRodada;
                saldo += vitoria;
                printf("Parabéns %s, Você Ganhou Y$%i !!\n", nome, vitoria);
                printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
              } else {
                derrota = vRodada;
                saldo -= derrota;
                printf("Você perdeu Y$%i, tente novamente!\n", vRodada);
                printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
              }
            } else if (n1[0] == 'P') {
              printf("Você escolheu números pares\n");
              printf("O resultado da roleta foi: %d\n \n", nAleatorio);
              if (nAleatorio % 2 == 0) {
                vitoria = vRodada;
                saldo += vitoria;
                printf("Parabéns %s, Você Ganhou Y$%i !!\n", nome, vitoria);
                printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
              } else {
                derrota = vRodada;
                saldo -= derrota;
                printf("Você perdeu Y$%i, tente novamente!\n", vRodada);
                printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
              }
            } else {
              if (n1_num >= 0 && n1_num <= 50) {
                printf("Você selecionou o número: %d\n", n1_num);
                printf("O resultado da roleta foi: %d\n \n", nAleatorio);
                if (nAleatorio == n1_num) {
                  vitoria = vRodada * 5;
                  saldo += vitoria;
                  printf("Parabéns %s, Você Ganhou Y$%i !!\n", nome, vitoria);
                  printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
                } else {
                  derrota = vRodada;
                  saldo -= derrota;
                  printf("Você perdeu Y$%i, tente novamente!\n", vRodada);
                  printf("Seu saldo atual é de Y$%i !!\n \n", saldo);
                }
              } else {
                printf("Número inválido!\n");
              }
            }
          } else {
            printf("Número inválido!\n");
          }
        } else {
          printf("Saldo Insuficiente, Retorne ao menu Principal e realize um "
                 "depósito!!\n");
        }

        printf("Quer continuar? Sim 'S', Não 'N'\n");
        scanf(" %c", &retorno);
        retorno = toupper(retorno);

      } while (retorno == 'S');

      getchar();
      break;
    }

    case 2: {
      system("clear");
      printf("-----REALIZE SEU DEPOSITO-----\n");
      printf("Insira o valor do seu depósito:\n");
      scanf("%i", &deposito);
      saldo += deposito;
      printf("Depósito realizado, seu saldo atual é: %i\n", saldo);
      printf("Pressione ENTER para voltar...");
      getchar();
      break;
    }

    case 3: {
      system("clear");
      printf("SALDO ATUAL de %s: %i\n", nome, saldo);
      printf("-----------------\n");
      printf("Último depósito realizado: Y$ %i\n", deposito);
      printf("Tecle ENTER para retornar...");
      getchar();
      break;
    }

    case 4:
      printf("Até logo %s!\n", nome);
      break;

    default:
      printf("Opção inválida! Pressione ENTER para prosseguir...\n");
      getchar();
    }
  }

  return 0;
}