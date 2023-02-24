#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#define PRICE_1 100

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->data = x;
  new_node->nextPtr = NULL;
  if(q->headPtr==NULL) q->headPtr = new_node;    
  else (q->tailPtr)->nextPtr =new_node;  
  q->tailPtr = new_node;
  q->size++;
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t/* q->size>0*/){
   int value= t->data;
    q->headPtr=t->nextPtr;
     if(q->headPtr==NULL)
       q->tailPtr=NULL;
     q->size--;
     free(t);
     return value;
    
   return value;
   }
   printf("Empty queue");
   return 0;
}

/* int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->data;
   *head=(*head)->nextPtr;
     if(!(*head)) *tail=NULL;
     free(t);
       
       
   return value;
   }
   printf("Empty queue");
   return 0;
}

*/
