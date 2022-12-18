/* 
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void task1(){
      int liczba;
      printf("Podaj liczbe: ");
      fflush(stdout);
      scanf("%i", &liczba);
      printf("\n");

      for(int i = 0; i < 5; i++){
            printf("%i^%i = %.0f \n", liczba, i, pow(liczba, i));
      }
}

void task2(){
      int liczba, silnia;
      printf("Podaj liczbe: ");
      fflush(stdout);
      scanf("%i", &liczba);
      printf("\n");

      silnia = liczba;

      for(int i = 1; i < liczba; i++){
            silnia = silnia * i;
      }

      printf("Silnia: %i", silnia);
}

void task3(){
      printf("x/y");
      for(int i = 0; i < 15; i++){
            printf("%i  ", i);
      }
      printf("\n");
      for(int x = 0; x < 15; x++){
            printf("%i  ", x);
            for(int y = 0; y < 15; y++){
                  printf("%i  ", x ^ y);
            }
            printf("\n");
      }
}

char *GetTool(int choice){
      switch (choice) {
            case 0:
                  return "papier";
                  break;
            case 1:
                  return "nozyce";
                  break;
            case 2:
                  return "kamien";
                  break;
      }
}

void task4(){
      srand(time(NULL));
      int computerChoice = rand()%3;
      int input, userScore, computerScore;

      userScore = 0;
      computerScore = 0;

      while(1)
      {
            printf("Wpisz:  0-papier, 1-nozyce, 2-kamien, -1-koniec gry \n");
            fflush(stdout);
            scanf("%i", &input);
            printf("\n");
            if(input != -1){
                  printf("Wybrales: %s, ja wybralem: %s. ", GetTool(input), GetTool(computerChoice));
                  if((input == 0 && computerChoice == 1) || (input == 1 && computerChoice == 2) || (input == 2 && computerChoice == 0)) {
                        printf("Ja wygralem. \n");
                        computerScore++;
                  }
                  else if(computerChoice == input){
                        printf("Wybralismy to samo - jeszcze raz \n");
                        continue;
                  }
                  else{
                        printf("Ty wygrales. \n");
                        userScore++;
                  }

                  if(userScore > computerScore){
                        printf("Wynik: %i:%i dla ciebie. \n", userScore, computerScore);
                  }
                  else if(userScore < computerScore){
                        printf("Wynik: %i:%i dla mnie. \n", computerScore, userScore);
                  }
                  else{
                        printf("Wynik %i:%i, remis\n");
                  }

            }
            else{
                  break;
            }
      }
}



int main(void) {
      //task1();
      //task2();
      //task3();
      task4();
}
