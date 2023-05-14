#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct Node {
	struct Node* nextNode;
	int* value;
};

struct Node *queue;
int numberOfElements;

int initiateQueue(void) {
	numberOfElements = 0;
	return 0;
}

int insertIntoQueue(int newElement) {
	struct Node newNode = { NULL, &newElement };

	struct Node* currentNode = queue;

	while (currentNode->nextNode != NULL)
	{
		currentNode = currentNode->nextNode;
	}

	currentNode->nextNode = &newNode;

	return 0;
}

int deleteFromQueue(void) {
	
	struct Node* newQueue;
	struct Node* currentNode = queue;

	if (queue == NULL) {
		return 0;
	}

	int* firstElementValue = queue->value;
	Node* secondElement = queue->nextNode;

	while (secondElement->nextNode != NULL)
	{
		currentNode = currentNode->nextNode;
	}

	return *firstElementValue;
}

int readFromQueue(void) {
	if (queue) {
		return *queue->value;
	}

	return 0;
}

int printQueue(void) {


	return 0;
}

int isQueueEmpty(void) {
	if (numberOfElements == 0) {
		return 1;
	}

	return 0;
}

int isQueueFull(void) {
	if (numberOfElements == SIZE) {
		return 1;
	}

	return 0;
}