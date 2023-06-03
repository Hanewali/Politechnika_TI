#include <stdio.h>
#include <stdlib.h>

#include "utils.c"

int main() {
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
                Plot(slope, length);
                break;
            case 2:
                GetSlope(slope, length);
                break;
            case 3:
                GetLength(length, slope);
                break;
        }

        if(input == 0){
            break; //Can't use it in a switch due to break keyword having different effect;
        }

    }
}
