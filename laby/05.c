//
// Created by hane on 15.01.23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void t_05_01(){
    #define DLUGOSC 5

    srand(time(NULL));

    int ary[DLUGOSC];

    for(int i = 0; i < DLUGOSC; i++){
        ary[i] = rand() % 11;
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

void t_05_02(){
    int arylen = 10;

    int nums[arylen];

    for(int i = 0; i < arylen; i++){
        printf("Podaj liczbe do komorki %u :", i);
        fflush(stdout);
        scanf("%u", &nums[i]);
    }

    int sum = 0;
    int min = INT_MAX;
    int biggerThanLastCount = 0;
    int last = nums[arylen - 1];

    for(int i = 0; i < arylen; i++){
        int current = nums[i];
        sum += current;

        if(current <  min) min = current;

        if(current > last) biggerThanLastCount++;
    }

    printf("Suma: %i \n", sum);
    printf("Najmniejsza liczba: %i \n", min);
    printf("Ilosc wiekszych niz ostatnia: %i \n", biggerThanLastCount);
}

void t_05_03() {
    int ary[4][4] =
            {
            {1,2, 3, 4},
            {5, 6, 7, 8},
            {9,10,11,12},
            {13,14,15,16}
            };

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%i ", ary[i][j]);
        }
        printf("\n");
    }
}