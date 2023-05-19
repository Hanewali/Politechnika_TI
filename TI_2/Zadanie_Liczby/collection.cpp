//
// Created by Rafal Nowak on 19/04/2023.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int size = 5;
int numberOfElements = 0;
int *collection = NULL;

int initializeCollection() {
    if(!collection) {
        collection = (int*) malloc(size * sizeof(int));
        if(!collection)
            return 1;
        return 0;
    }
    return 2;
}

int initializeCollection(int initialSize) {
    if(!collection) {
        size = initialSize;
        return initializeCollection();
    }
    return 2;
}

void deinitializeCollection() {
    free(collection);
    size = 5;
    numberOfElements = 0;
    collection = NULL;
}

int getCollectionSize() {
    return numberOfElements;
}

int getAmountOfAllocatedMemory() {
    return size;
}

int addElementToCollection(int element) {
    int *newCollection = NULL;
    if(numberOfElements < size) {
        collection[numberOfElements] = element;
        numberOfElements++;
        return 0;
    } else {
        size *= 2;
        newCollection = (int*) realloc(collection, size * sizeof(int));
        if(!newCollection)
            return 1;
        collection = newCollection;
        collection[numberOfElements] = element;
        numberOfElements++;
        return 0;
    }
}

int removeElementFromCollection(int index) {
    if(index > numberOfElements - 1 || index < 0)
        return 1;
    for(int i = index; i < numberOfElements; i++) {
        collection[i] = collection[i+1];
    }
    numberOfElements--;
    if(numberOfElements <= size / 2) {
        size /= 2;
        collection = (int*) realloc(collection, size * sizeof(int));
    }
    return 0;
}

void printCollection() {
    printf("\n");
    printf("index: value\n");
    for(int i = 0; i < numberOfElements; i++) {
        printf("%d: %d\n", i, collection[i]);
    }
    printf("\n");
}

int saveCollection() {
    FILE *fptr = fopen("collection.txt", "w");
    if(!fptr) return 1;
    for (int i = 0; i < numberOfElements; ++i) {
        fprintf(fptr, "%d\n", collection[i]);
    }
    fclose(fptr);
    return 0;
}

int restoreCollection() {
    char ch = 0;
    int number = 0;
    int numberOfLines = 0;
    int arraySize = 5;
    FILE *fptr = fopen("collection.txt", "r");
    if(!fptr) return 1;
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == '\n') {
            numberOfLines++;
        }
    }
    while(arraySize < numberOfLines) {
        arraySize *= 2;
    }
    deinitializeCollection();
    if ( initializeCollection(arraySize) ) return 2;
    fseek(fptr, 0, SEEK_SET);
    while (fscanf(fptr, "%d", &number) == 1) {
        addElementToCollection(number);
    }

    return 0;
}

int getBiggest()
{
		int biggest = collection[0];
	for(int i = 1; i < numberOfElements; i++)
	{
				if(collection[i] > biggest)
				{
								biggest = collection[i];
		}
	}
	return biggest;
}

int getSmallest()
{
			int smallest = collection[0];
	for(int i = 1; i < numberOfElements; i++)
	{
						if(collection[i] < smallest)
						{
															smallest = collection[i];
		}
	}
	return smallest;
}

float getAverage()
{
			float average = 0;
	for(int i = 0; i < numberOfElements; i++)
	{
						average += collection[i];
	}
	average /= numberOfElements;
	return average;
}

float getMedian()
{
    int *tempCollection = (int*) malloc(numberOfElements * sizeof(int));
    tempCollection = collection;

    int temp = 0;
    for (int i = 0; i < numberOfElements; i++)
    {
        for (int j = 0; j < numberOfElements - 1; j++)
        {
            if (tempCollection[j] > tempCollection[j + 1])
            {
                temp = tempCollection[j];
                tempCollection[j] = tempCollection[j + 1];
                tempCollection[j + 1] = temp;
            }
        }
    }

	float median = 0;
	if(numberOfElements % 2 == 0)
	{
								median = (tempCollection[numberOfElements / 2] + tempCollection[numberOfElements / 2 - 1]) / 2.0;
	}
	else
	{
								median = tempCollection[numberOfElements / 2];
	}
	return median;
}
