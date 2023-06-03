#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

typedef struct node {
    int val;
    struct node * previous;
} node_t;

int size = 5;
int numberOfElements = 0;
int position = 0;

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

int push(int element){
    node_t * new_node = (node_t*) malloc(sizeof(node_t));
    new_node->val = element;
    new_node->previous = NULL;
    if(numberOfElements == 0){
        collection = new_node;
        numberOfElements++;
        return 0;
    }
    new_node->previous = collection;
    collection = new_node;
    numberOfElements++;
    return 0;
}

int pop(){
    if(numberOfElements == 0){
        return 1;
    }
    node_t * temp = collection;
    collection = collection->previous;
    free(temp);
    numberOfElements--;
    return 0;
}

int top(){
    if(numberOfElements == 0){
        return 1;
    }
    return collection->val;
}