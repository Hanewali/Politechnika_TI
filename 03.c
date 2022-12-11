//
// Created by jakub on 11.12.2022.
//

#include <stdio.h>
#include <ctype.h>

void task1_03(){
    char znak;
    printf("Podaj znak: ");
    fflush(stdout);
    scanf("%c", znak);

    int kodZnaku = (int)znak;

    if(isalpha(kodZnaku)){
        printf("Kod znaku: %i", kodZnaku);
        printf("Mala litera: %c", (char)toupper(kodZnaku));
        printf("Wielka litera: %c", (char)tolower(kodZnaku));
        if(isalpha(kodZnaku -1)){
            printf("POprzednia litera w alfabecie: %c", (char)(kodZnaku - 1));
        }
        if(isalpha(kodZnaku + 1)){
            printf("Nastepna litera w alfabecie: %c", (char)(kodZnaku + 1));
        }
    }
    if(isdigit(kodZnaku)){
        printf("Kod znaku %i", kodZnaku);

    }

}
