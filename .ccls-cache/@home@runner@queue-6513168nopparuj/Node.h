//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef Node_h
#define Node_h

typedef struct node{
   struct node* next;
   int order_number;
   int qty;
}order;

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number = x;
  new_node->next = NULL;
  if(*head==NULL) *head = new_node;    
  else (*tail)->next =new_node;  
  *tail = new_node;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->order_number;
   *head=(*head)->next;
     if(!(*head)) *tail=NULL;
     free(t);
       
       
   return value;
   }
   printf("Empty queue");
   return 0;
}



#endif
