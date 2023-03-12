// zadanie1JR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 10

void menu() 
{
    printf("\n");
    printf("1 - Wczytaj wartosci do 10 el. tablicy liczb calkowitych\n");
    printf("2 - Wyswietl zwartosc tablicy\n");
    printf("3 - zamien w. max z w.min\n");
    printf("4 - Oblicz srednia\n");
    printf("\n");
}

void displayAverage(float average) {
    printf("Srednia wynosi %f", average);
}

void insertNumbersIntoArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("myArray[%d] = ", i);
        scanf("%d", (arr + i));
    }
}

void showArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("myArray[%d] = %d\n", i, *(arr + i));
    }
}

void swapMinMax(int *arr, int size) {
    int min = *arr;
    int max = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == min) {
            *(arr + i) = max;
        }
        else if (*(arr + i) == max) {
            *(arr + i) = min;
        }
    }
}

float calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return (float)sum / SIZE;
}

int main()
{
    int option = 1;
    int myArray[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

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
            insertNumbersIntoArray(myArray, SIZE);
            break;
        case 2:
            printf("wyswietalnie tablicy\n");
            showArray(myArray, SIZE);
            break;
        case 3:
            printf("zamiana min max\n");
            swapMinMax(myArray, SIZE);
            break;
        case 4:
            printf("obliczanie sredniej\n");
            average = calculateAverage(myArray, SIZE);
            displayAverage(average);
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
