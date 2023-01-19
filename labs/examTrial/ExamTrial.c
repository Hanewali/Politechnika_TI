//
// Created by jakub on 18.01.2023.
//

#include <stdio.h>
#include<stdlib.h>


void Plot(int *slope, int *length){

}

void GetSlope(int *slope){
    printf("Podaj nachylenie linii:");


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

void ShowMenu(){
    int *slope;
    int *length;

    //set default values:
    *slope = 3;
    *length = 12;

    while(1){
        int input;

        printf("1. Wyswietl linie\n");
        printf("2. Zmien nachylenie\n");
        printf("3. Zmien dlugosc\n");
        printf("0. Koniec\n");
        printf("Wybierz polecenie: ");

        fflush(stdout);
        scanf("%i", &input);
        printf("\n");

        system("clear");

        switch (input) {
            case 1:
                Plot();
                break;
            case 2:
                GetSlope();
                break;
            case 3:
                GetLength();
                break;
        }

        if(input == 0){
            break; //Can't use it in a switch due to break keyword having different effect;
        }

    }
}