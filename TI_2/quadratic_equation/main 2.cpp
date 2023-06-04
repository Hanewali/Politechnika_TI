#include <iostream>
#include <fstream>

#define SIZE 10

using namespace std;

void menu() {
    cout << endl;
    cout << "MENU" << endl;
    cout << "1 - Wprowadz dane do tablicy" << endl;
    cout << "2 - Wyswietl zwartosc tablicy" << endl;
    cout << "3 - Zapisz dane do pliku" << endl;
    cout << "4 - Odczytaj dane z pliku" << endl;
    cout << "0 - Zakoncz program" << endl;
    cout << endl;
}

void saveToFile(int *arr, int arrSize) {
    ofstream writer("tablica.txt");

    for (int i = 0; i < arrSize; i++) {
        writer.width(4);
        writer << arr[i];
    }
}

int main() {
    int option = 1;
    int myArray[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Jest to aplikacja operujaca na 10-elementowej tablicy!" << endl;

    while (option != 0) {
        menu();

        cout << "Wybierz opcje:" << endl;
        cin >> option;
        cout << "Opcja: " << option << endl;

        switch (option) {
            case 1:
                cout << "wprowadzenie wartosci" << endl;
                for (int i = 0; i < SIZE; i++) {
                    cout << "myArray[" << i << "] = ";
                    cin >> myArray[i];
                }
                break;
            case 2:
                cout << "wyswietlanie wartosci" << endl;
                for (int i = 0; i < SIZE; i++) {
                    cout << "myArray[" << i << "] = " << myArray[i] << endl;
                }
                cout << endl;
                break;
            case 3:
                cout << "zapisywanie do pliku" << endl;
                saveToFile(myArray, SIZE);
                break;
            default:
                cout << "Wybierz wlasciwa opcje" << endl;
        }
    }

    return 0;
}