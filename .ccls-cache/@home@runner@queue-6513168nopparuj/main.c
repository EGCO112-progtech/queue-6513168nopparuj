#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
/* For struct Queue */
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,cash=0,cus = 1;

  for (i = 1; i < argc; i++) {
    if (strcmp(argv[i], "x") == 0) {
      printf("Customer No.%d\n",cus);
      cus++;
      x=dequeue_struct(&q);
      if(x>0){
        printf("You have to pay %d\n",x);
      while(cash<x){
        printf("Cash: ");
        scanf("%d",&cash);
      }
      if(cash==x)
        printf("Thank you\n");
      else if (cash>x)
        printf("Thank you\nChange is : %d\n",cash-x);
        printf("===============================\n");
      cash=0;
      }
      else printf("Thank you\n");
    } 
    else {
      enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
      printf("My order is: %d\n",atoi(argv[i]));
      i++;
    }
  }
   if (q.size > 1)
        printf("There are %d ppl left in the queue\n", q.size);
      else if(q.size == 1)
        printf("There is %d ppl left in the queue\n", q.size);
      else
        printf("There is %d ppl left in the queue\n", q.size);
    return 0;
}
