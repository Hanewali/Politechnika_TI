#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "queue.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("\n");
    printf("1. Dodaj liczbe do kolejki\n");
    printf("2. Odczytaj liczbe z poczatku kolejki\n");
    printf("3. Usun liczbe z poczatku kolejki\n");
    printf("4. Wyswietl dane kolejki\n");
    printf("0. Wyjdz\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;

    printf("KOLEJKA - implementacja w tablicy statycznej\n");
    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("To nie liczba! Podaj liczbe: ");
            clear();
        }
        switch (option) {
            case 1:
                system("cls");
                if (!isQueueFull()) {
                    printf("Podaj wartosc: ");
                    while (!scanf("%d", &temp)) {
                        printf("To nie liczba! Podaj liczbe: ");
                        clear();
                    }
                    insertIntoQueue(temp);
                }
                else {
                    printf("Kolejka pelna!\n");
                }
                break;

            case 2:
                system("cls");
                !isQueueEmpty() ? printf("Odczytana wartosc: %d\n", readFromQueue()) : printf("Kolejka pusta!\n");
                break;

            case 3:
                system("cls");
                !isQueueEmpty() ? printf("Usunieta wartosc: %d\n", deleteFromQueue()) : printf("Kolejka pusta!\n");
                break;

            case 4:
                system("cls");
                printf("Kolejka:\n");
                printQueue();
                printf("\n");
                if (isQueueFull()) printf("Kolejka jest pelna!\n");
                if (isQueueEmpty()) printf("Kolejka jest pusta!\n");
                break;

            case 0:
                return 0;

            default:
                system("cls");
                printf("Wybierz wlasciwa opcje.\n");
                break;
        }
    }

    return 0;
}