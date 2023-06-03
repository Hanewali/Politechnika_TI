#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "stack.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {

    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Top\n");
    printf("0. Exit\n");
}

int main() {

    int option;
    int temp = 0;

    initializeStack();

    do
    {
        menu();

        scanf("%d", &option);

        clear();

        switch (option)
        {
            case 1:
				printf("Push\n");
            	printf("Podaj wartosc: ");  
				scanf("%d", &temp);
                printf("\n");
                push(temp);
                break;
            case 2:
                printf("Pop\n");
				temp = pop();
				temp != NULL ? printf("%d\n", temp) : printf("Stack is empty\n");
                break;
            case 3:
				printf("Top\n");
				temp = top();
				temp != NULL ? printf("%d\n", temp) : printf("Stack is empty\n");
				break;
        }
    } while (option != 0);
    return 0;
}
