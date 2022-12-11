//
// Created by jakub on 11.12.2022.
//

#include <stdio.h>
#include <ctype.h>

void task_1_03(){
    char znak;
    printf("Podaj znak: ");
    fflush(stdout);
    scanf("%c", &znak);
    printf("\n");
    int kodZnaku = (int)znak;

    if (isalpha(kodZnaku)){
        printf("Kod znaku: %i \n", kodZnaku);
        printf("Mala litera: %c \n", (char)tolower(kodZnaku));
        printf("Wielka litera: %c \n", (char)toupper(kodZnaku));
        if(isalpha(kodZnaku -1)){
            printf("Poprzednia litera w alfabecie: %c \n", (char)(toupper(kodZnaku - 1)));
        }
        if(isalpha(kodZnaku + 1)){
            printf("Nastepna litera w alfabecie: %c \n", (char)(toupper(kodZnaku + 1)));
        }
    }
    else if (isdigit(kodZnaku)){
        printf("Kod znaku %i \n", kodZnaku);
        int liczba = znak - '0';
        printf("Cyfra o jeden mniejsza: %i \n", liczba - 1);
        printf("Cyfra o jeden wieksza: %i \n", liczba + 1);
    }
    else if (isspace(kodZnaku)){
        printf("Kod znaku %i \n", kodZnaku);
        printf("\"%c\"", znak);
    }
}
