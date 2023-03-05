// zadanie1JR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void menu() 
{
    printf("\n");
    printf("1 - Wczytaj wartosci do 10 el. tablicy liczb calkowitych\n");
    printf("2 - Wyswietl zwartosc tablicy\n");
    printf("3 - zamien w. max z w.min\n");
    printf("4 - Oblicz srednia\n");
    printf("\n");
}

int main()
{
    int option = 1;
    int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

    int min = 0;
    int max = 0;

    int sum = 0;
    float average = 0;

    printf("Jest to aplikacja operujaca na 10-elementowej tablicy!\n");
        
    while (option != 0) {
        menu();

        printf("Wybierz opcje: \n");
        scanf("%d", &option);
        printf("Opcja: %d\n", option);

        switch (option)
        {
        case 1:
            printf("wprowadzenie wartosci\n");
            for (int i = 0; i < 10; i++)
            {
                printf("myArray[%d] = ", i);
                scanf("%d", &myArray[i]);
            }
            break;
        case 2:
            printf("wyswietalnie tablicy\n");
            for (int i = 0; i < 10; i++)
            {
                printf("myArray[%d] = %d\n", i, myArray[i]);
            }
            break;
        case 3:
            printf("zamiana min max\n");
            min = myArray[0];
            max = myArray[0];
            for (int i = 1; i < 10; i++)
            {
                if (myArray[i] > max) {
                    max = myArray[i];
                }
                if (myArray[i] < min) {
                    min = myArray[i];
                }
            }
            for (int i = 0; i < 10; i++)
            {
                if (myArray[i] == min) {
                    myArray[i] = max;
                }
                else if (myArray[i] == max) {
                    myArray[i] = min;
                }
            }
            break;
        case 4:
            printf("obliczanie sredniej\n");
            sum = 0;
            for (int i = 0; i < 10; i++)
            {
                sum += myArray[i];
            }
            average = (float) sum / 10;
            printf("Srednia: %f\n", average);
            break;
        default:
            printf("wybierz wlasciwa opcje\n");
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
