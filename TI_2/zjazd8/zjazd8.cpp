#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#define SIZE 10

using namespace std;

void menu()
{
	cout << endl;
	cout << "1. Wczytaj wartosci do 10 el.tablicy liczb calkowitych" << endl;
	cout << "2 - Wyswietl zwartosc tablicy" << endl;
	cout << "3 - Zapisz dane do pliku" << endl;
	cout << "4 - Odczytaj dane z pliku" << endl;
	cout << endl;
}

void saveToFile(int *ary) {
	ofstream save("tablica.txt");
	
	for (int i = 0; i < SIZE; i++)
	{
		save << ary[i] << endl;
	}
	save.close();
}

void restoreFromFile(int* ary) {
	int temp = 0;
	
	ifstream read("tablica.txt");

	for (int i = 0; i < SIZE; i++)
	{
		read >> temp;
		ary[i] = temp;
	}

	read.close();
}

int main()
{
	int option = 1;
	int myArray[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	int min = 0;
	int max = 0;

	int sum = 0;
	float average = 0;

	cout << "Jest to aplikacja operujaca na 10-elementowej tablicy!" << endl;

	while (option != 0) {
		menu();

		cout << "Wybierz opcje: " << endl;
		cin >> option;
		cout << "Opcja: " << option << endl;
		
		int temp = 0;

		switch (option)
		{
		case 1:
			cout << "wprowadzenie wartosci" << endl;
			for (int i = 0; i < SIZE; i++)
			{
				cout << "myArray[" << i << "]" << endl;
				cin >> temp;
				myArray[i] = temp;
			}
			break;
		case 2:
			cout << "wyswietalnie tablicy" << endl;
			for (int i = 0; i < SIZE; i++)
			{
				cout << "myArray[" << i << "] = " << myArray[i] << endl;
			}
			break;
		case 3:
			cout << "Zapis do pliku" << endl;
			saveToFile(myArray);
			break;
		case 4:
			cout << "Odczyt z pliku" << endl;
			restoreFromFile(myArray);
			break;
		default:
			cout << "wybierz wlasciwa opcje" << endl;
		}
	}
}