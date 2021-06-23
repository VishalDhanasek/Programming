/*
Write a C program to add a node at the beginning of the Linked List.

Input:

Enter the number of nodes:

4

10 17 11 28

Output:

The elements in the linked list are 28->11->17->10->NULL

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* creat your structure as Node*/
struct Node{
  int data;
  struct Node *next;
};
void insertAtBegining(struct Node**,int);
void display(struct Node*);

int main() {
struct Node *head=NULL;
int n,data;
printf("Enter the number of nodes:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
   scanf("%d",&data);
   insertAtBegining(&head,data);
}
display(head);
	return 0;
}


void insertAtBegining( struct Node **head, int data )
{
  struct Node *newNode=(struct Node *)malloc(sizeof(struct Node*));
	newNode->data=data;
  newNode->next=NULL;
	if(*head==NULL){
    *head=newNode;
	}
  else{
	    newNode->next=*head;
      *head=newNode;
	}
}
void display ( struct Node *head )
{
  printf("The elements in the linked list are ");
	if(head==NULL)
  {
	    printf("NULL");
  }
  else
	{
     while(head!=NULL)
	    {
       
        printf("%d->",head->data);
	      head=head->next;
     }
    printf("NULL");
  }
}  
  
     
