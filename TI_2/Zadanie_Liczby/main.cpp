
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "collection.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("1. Dodaj element do kolekcji\n");
    printf("2. Usun element z kolekcji\n");
    printf("3. Wyswietl kolekcje\n");
    printf("4. Eksportuj kolekcje do pliku\n");
    printf("5. Wczytaj kolekcje z pliku\n");
    printf("6. Statystyki\n");
    printf("7. Największy element\n");
    printf("8. Najmniejszy element\n");
    printf("9. Srednia\n");
    printf("10. Mediana\n");
    printf("0. Zakoncz\n\n");
    printf("Wybierz opcje: ");
}

int main() {
    int option = 0;
    int value = 0;
    int index = 0;

    if ( initializeCollection() )
        exit(1);


    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Dodawanie elementu do kolekcji\n");
                printf("Podaj wartosc: \n");
                scanf("%d", &value);
                addElementToCollection(value);
                printf("\n\n");
                break;

            case 2:
                printf("Usuwanie elementu z kolekcji\n");
                printf("Podaj indeks elementu do usuniecia: \n");
                scanf("%d", &index);
                removeElementFromCollection(index);
                printf("\n\n");
                break;

            case 3:
                printf("Wyswietlanie kolekcji\n");
                printCollection();
                printf("\n\n");
                break;

            case 4:
                printf("Eksportowanie kolekcji do pliku\n");
                saveCollection();
                printf("\n\n");
                break;

            case 5:
                printf("Wczytywanie kolekcji z pliku\n");
                restoreCollection();
                printf("\n\n");
                break;

            case 6:
                printf("Statystyki\n");
                printf("Rozmiar kolekcji: %d\n", getCollectionSize());
                printf("Rozmiar tablicy: %d\n", getAmountOfAllocatedMemory());
                printf("\n\n");
                break;

	        case 7:
	            printf("Najwiekszy element: %d\n", getBiggest());
            break;

	        case 8:
	            printf("Najmniejszy element: %d\n", getSmallest());
            break;

            case 9:
				printf("Srednia: %f\n", getAverage());
				break;

            case 10:
                printf("Mediana: %f\n", getMedian());
                break;

            case 0:
                break;

            default:
                printf("Wybierz wlasciwa opcje\n");
                printf("\n\n");
        }
    } while (option != 0);
    deinitializeCollection();
    return 0;
}
