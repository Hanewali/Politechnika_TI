//
// Created by jakub on 18.12.2022.
//

#include <stdio.h>

int isPrime(int num){
    for (int i = 2; i < num; ++i) {
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

void task_04_1(){
    int input;

    while(1){
        printf("Podaj liczbe naturalna (lub 0 zeby zakonczyc): \n");
        fflush(stdout);
        scanf("%i", &input);
        printf("\n");

        if(input == 0){
            break;
        }

        if(input <= 0){
            printf("Wpisana liczba nie jest poprawna \n \n");
            continue;
        }

        int temp = input;

        do{
            if(temp % 7 == 0){
                printf("Najwieksza liczba podzielna przez 7 mniejsza niz %i to %i \n", input, temp);
                break;
            }
            temp--;
        } while(temp > 0);

        temp = input;

        do{
            if(temp % 9 == 0){
                printf("Najwieksza liczba podzielna przez 9 mniejsza niz %i to %i \n", input, temp);
                break;
            }
            temp--;
        } while(temp > 0);

        temp = input;

        do{
            if(isPrime(temp)){
                printf("Najwieksza liczba pierwsza mniejsza niz %i to %i \n", input, temp);
                break;
            }
            temp--;
        } while(temp > 0);

        printf("Koniec programu. \n");
    }
}


void task_04_2(){
    int zakres;
    printf("Wpisz zakres: ");
    fflush(stdout);
    scanf("%i", &zakres);
    printf("\n");

    for (int i = 0; i < zakres; ++i) {

    }
}