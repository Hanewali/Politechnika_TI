#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define FILEPATH "C:\\Users\\student\\Desktop\\sample.txt"
#define SIZE 100

void menu()
{
    printf("1. Input text\n");
    printf("2. Print text\n");
    printf("3. Calculate text length\n");
    printf("4. Print text in small letters\n");
    printf("5. Print text in capital letters\n");
    printf("6. Write to file\n");
    printf("7. Read from file\n");
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

void printTextSmallLetters(char* str, int length) {
    for (int i = 0; i < length; i++)
    {
        char currentCharacter = str[i];
        if (65 <= currentCharacter && currentCharacter <= 90) {
            printf("%c", currentCharacter + 32);
        }
        else if (97 <= currentCharacter && currentCharacter <= 122) {
            printf("%c", currentCharacter);
        }
        else {
            printf("\n");
            break;
        }
    }
}

void printTextCapitalLetters(char* str, int length) {
    for (int i = 0; i < length; i++)
    {
        char currentCharacter = str[i];
        if (65 <= currentCharacter && currentCharacter <= 90) {
            printf("%c", currentCharacter);
        }
        else if (97 <= currentCharacter && currentCharacter <= 122) {
            printf("%c", currentCharacter - 32);
        }
        else {
            printf("\n");
            break;
        }
    }
}

void writeToFile(char *text, FILE *file, const char *filePath) {
    file = fopen(filePath, "w");

    if (file == 0) {
        printf("\nError while opening file!\n");
        return;
    }

    fprintf(file, text);

    fclose(file);
}

void readFromFile(char* text, int length, FILE* file, const char *filePath) {
    file = fopen(filePath, "r");
    if (file != 0)
    {
        fgets(text, 100, file);
    }
    else
    {
        printf("\nError while opening file!\n");
    }

    fclose(file);
}

void clear()
{
    while (getchar() != '\n');
}

int main()
{
    FILE* file = 0;
    int option = 0;
    char str[SIZE] = "Start\0";

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
            printTextSmallLetters(str, SIZE);
            break;
        case 5:
            printTextCapitalLetters(str, SIZE);
            break;
        case 6:
            writeToFile(str, file, FILEPATH);
            break;
        case 7:
            readFromFile(str, SIZE, file, FILEPATH);
            break;
        }
    } while (option != 0);
}


