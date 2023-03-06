//
// Created by jakub on 19.01.2023.
//

#include <stdio.h>


void Plot(int *slope, int *length){
    int rows = *length / *slope;
    for (int row = 0; row < rows; ++row) {
        for (int j = 0; j < (row * *slope); ++j) {
            printf(" ");
        }
        for (int x = 0; x < *slope; ++x) {
            printf("-");
        }
        printf("\n");
    }
}

void GetSlope(int *slope, int *length){
    int input;

    printf("Podaj nachylenie linii (musi byc mniejsze od długosci: %i) :", &length);
    fflush(stdout);
    scanf("%i", &input);
    printf("\n");


    if(*slope < *length){
        *slope = input;
        printf("Zmieniono nachylenie: %i", &slope);
    }
    else {
        printf("Nachylenie poza zakresem!");
    }
}

void GetLength(int *length, int *slope){
    while(1){
        printf("Podaj dlugosc linii (od 1 do 40): ");
        fflush(stdout);
        scanf("%i", &length);
        printf("\n");

        if(!(1 <= *length <= 40)){
            printf("Nachylenie poza zakresem! Spróbuj ponownie.\n");
        }

        if(*length < *slope){
            printf("Dlugosc mniejsza od nachylenia! Nachylenie obnizone do polowy podanej dlugosci. \n");
            if(*slope == 0){
                *length = 0;
            } else {
                *slope = *length / 2;
            }
        }
    }
}