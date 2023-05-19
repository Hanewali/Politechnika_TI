//
// Created by Rafal Nowak on 19/04/2023.
//

#ifndef DYNAMICCOLLECTION_COLLECTION_H
#define DYNAMICCOLLECTION_COLLECTION_H

int initializeCollection();
void deinitializeCollection();
int getCollectionSize();
int getAmountOfAllocatedMemory();
int addElementToCollection(int element);
int removeElementFromCollection(int index);
void printCollection();
int saveCollection();
int restoreCollection();
int getBiggest();
int getSmallest();
float getAverage();
float getMedian();

#endif //DYNAMICCOLLECTION_COLLECTION_H
