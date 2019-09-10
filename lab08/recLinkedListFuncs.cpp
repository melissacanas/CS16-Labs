#include "linkedList.h"
#include "linkedListFuncs.h"

int recursiveSum(Node* head){
  if(!head){
    return 0;
  }
	return head->data + recursiveSum(head->next);
}

int recursiveLargestValue(Node* head){
  if(!head->next){
    return head->data;
  }
  if(head->data > recursiveLargestValue(head->next)){
  	return head->data;
  }
	else{
		return recursiveLargestValue(head->next);
	}
}
