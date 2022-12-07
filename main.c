#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task_1(){
    int fourDigitNumber;
    printf("Wpisz liczbe czterocyfrowa: ");
    fflush(stdout);
    scanf("%4d", &fourDigitNumber);
    printf("\n");
    int thousands = fourDigitNumber / 1000;
    printf("Cyfra tysiecy: %1d \n", thousands);
    int hundreds = (fourDigitNumber / 100) % 10;
    printf("Cyfra setek: %1d \n", hundreds);
    int tens = ((fourDigitNumber / 10) % 100) % 10;
    printf("Cyfra dziesiatek: %1d \n", tens);
    int ones = fourDigitNumber - (thousands * 1000) - (hundreds * 100) - (tens * 10);
    printf("Cyfra jednosci: %1d \n", ones);
    printf("Suma cyfr: %u", thousands + hundreds + tens + ones);
}

void task_2(){
    signed int a, b, c, d;
    float x;
    a = 1;
    b = 2;
    c = 0;
    d = -1;
    x = -1;

//    printf("Wpisz a:");
//    fflush(stdout);
//    scanf(" %i", &a);
//    printf("Wpisz b:");
//    fflush(stdout);
//    scanf(" %i", &b);
//    printf("Wpisz c:");
//    fflush(stdout);
//    scanf(" %i", &c);
//    printf("Wpisz d:");
//    fflush(stdout);
//    scanf(" %i", &d);
//    printf("Wpisz x:");
//    fflush(stdout);
//    scanf(" %f", &x);
    float value = (a*pow(x, 3) + (b * pow(x, 2)) + (c * pow(x, 1)) + d);
    printf("Wynik: %u \n", value);
    if(abs(value) < pow(10, -7))
    {
        printf("Liczba %.0f jest pierwiastkiem wielomianu %ix^3", x, a);
        printf("x^2");
        if(b < 0){
            printf("%i", b);
        }
        else{
            printf("+%i", b);
        }
        printf("x^2");
        if(c < 0){
            printf("%i", c);
        }
        else{
            printf("+%i", c);
        }
        printf("x");
        if(d < 0){
            printf("%i", d);
        }
        else{
            printf("+%i", d);
        }
    }
};

int main() {
//    task_1();
    task_2();
}

