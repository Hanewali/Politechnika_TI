#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 100

void menu() 
{
    printf("1. Input text\n");
    printf("2. Print text\n");
    printf("3. Calculate text length\n");
    printf("4. Print text in small letters\n");
    printf("5. Print text in capital letters\n");
}

void inputText(char* str, int length) {
    gets_s(str, length);
}

void printText(char* str) {
    printf("%s\n", str);
}

void calculateTextLength(char* str) {
    int counter = 0;
    
    while (*str) {
        str++;
        counter++;
    }

    printf("Character count: %d\n", counter);
}

void printTextSmallLetters(char* str) {
    while (*str) {
        str++;
        if (97 <= *str <= 122) {
            printf("%c", *str);
        }
        else if (65 <= *str <= 90) {
            printf("%c", *str - 32);
        }
    }
}

void printTextCapitalLetters(char* str) {

}

void clear()
{
    while (getchar() != '\n');
}

int main()
{
    int option = 0;
    char str[SIZE] = "start";

    do {
        menu();
        scanf("%d", &option);
        clear();

        switch (option)
        {
            case 1:
                inputText(str, SIZE);
                break;
            case 2:
                printText(str);
                break;
            case 3:
                calculateTextLength(str);
                break;
            case 4:
                printTextSmallLetters(str);
                break;
            case 5:
                break;
        }
    } while (option != 0);
}
