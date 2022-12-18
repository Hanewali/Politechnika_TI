//
// Created by jakub on 11.12.2022.
//

#include <stdio.h>
#include <ctype.h>

void task_03_1(){
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

void task_03_2(){
    float liczba;

    printf("Podaj liczbe dziesietna od 1 do 3999: ");
    fflush(stdout);
    scanf("%f", &liczba);
    printf("\n");

    if(!(1 <= liczba <= 3999)){
        printf("Wpisana liczba jest poza zakresem!");
    }

    int t,s,d,j;

    t = (int)(liczba / 1000);
    s = ((int)liczba / 100) % 10;
    d = ((int)liczba / 10) % 10;
    j = (int)(liczba - (t * 1000) - (s * 100) - (d * 10));

    switch (t) {
        case 0:
            break;
        case 1:
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MMM");
            break;
    }

    switch (s) {
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }

    switch (d) {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
    }


    switch (j) {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }

};