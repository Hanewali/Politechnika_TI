#include <iostream>


void menu() 
{
    printf("Input text");
    printf("Print text");
    printf("Calculate text length");
    printf("Print text in small letters");
    printf("Print text in capital letters");
}

void inputText(char str) {

}

void printText(char str) {

}

void calculateTextLength(char str) {

}

void printTextSmallLetters(char str) {

}

void printTextCapitalLetters(char str) {

}

void clear()
{
    while (getchar() != '\n');
}

int main()
{
    int* option = 0;

    menu();
    scanf("%d", &option);
    clear();

}
