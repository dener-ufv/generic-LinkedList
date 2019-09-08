/*
#include "LinkedList.h"

static LinkedList lastPosition(LinkedList llist) {
  LinkedList iterator = llist;
  while(iterator != NULL && iterator->next != NULL) {
    iterator = iterator->next;
  }
  return iterator;
}

int LinkedListEmpty(LinkedList llist) {
  return llist == NULL;
}

int LinkedListInit(LinkedList *llist) {
  (*llist) = (LinkedList) malloc(sizeof(struct linkedList));
  (*llist)->data = NULL;
  (*llist)->next = NULL;
  return 0;
}

int LinkedListInsert(LinkedList llist, void *item, int size) {
  //LinkedList lastItem = lastPosition(llist);
  lastItem = (LinkedList) malloc(sizeof(LinkedList));
  lastItem->data = (void *) malloc(size);
  memcpy(lastItem->data, item, size);
  lastItem->next = NULL;


  return 0;
}
*/