//
// Created by hane on 15.01.23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void t_05_01(){
    #define DLUGOSC 5

    srand(time(NULL));

    int ary[DLUGOSC];

    for(int i = 0; i < DLUGOSC; i++){
        ary[i] = rand() % 10;
    }

    int last = ary[DLUGOSC-1];
    int dividableCounter = 0;

    for(int i = 0; i < DLUGOSC - 1; i++){
        if(ary[i] % last == 0){
            dividableCounter++;
        }
    }

    printf("Ostatnia z wylosowanych: %u \n", last);
    printf("Ilosc liczb podzielnych przez ostatnia: %u \n", dividableCounter);
}