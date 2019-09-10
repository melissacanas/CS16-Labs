#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

void addIntToEndOfList(LinkedList *list, int value) {

  assert(list!=NULL);

  Node *p;
  p = new Node;
  p->data = value;
  p->next = NULL;
  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } else {
    list->tail->next = p;
    list->tail = p;
  }
}

void addIntToStartOfList(LinkedList *list, int value) {

  assert(list!=NULL);

  Node *p;
  p = new Node;
  p->data = value;
  p->next = list->head;
  if (list->head == NULL) {
    list->head = p;
    list->tail = p;
  } else {
    list->head = p;
  }
}

Node * pointerToMax(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = list->head;
  int max = p->data;
  Node* maxP = p;
  while(p != NULL){
    if(p->data > max){
    	max = p->data;
	maxP = p;
    }
    p = p->next;
  }

  return maxP;
}

Node * pointerToMin(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = list->head;
  int min = p->data;
  Node* minP = p;
  while(p != NULL){
    if(p->data < min){
    	min = p->data;
	minP = p;
    }
    p = p->next;
  }

  return minP;
}

int largestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = list->head;
  int max = p->data;
  while(p != NULL){
    if(p->data > max){
    	max = p->data;
    }
    p = p->next;
  }

  return max;
}

int smallestValue(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);

  Node* p = list->head;
  int min = p->data;
  while(p != NULL){
    if(p->data < min){
    	min = p->data;
    }
    p = p->next;
  }

  return min;
}

int sum(LinkedList * list) {

  assert(list!=NULL);

  Node* p = list->head;
  int sum = 0;
  while(p != NULL){
    sum += p->data;
    p = p->next;
  }
  return sum;
}
