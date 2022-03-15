#include <stdio.h>
#include<stdlib.h>
void display();
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
void begining(struct node *head,int d)
{
  struct node *ptr=malloc(sizeof(struct node));
  ptr->data=d;
  ptr->next=NULL;
  
  ptr->next=head;
  head=ptr;
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
  
}
  
struct node *head=NULL;
int main()
{
    struct node *temp1,*temp2,*temp3;
    temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=10;
    temp1->next=NULL;
    head=temp1;
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2->data=20;
    temp2->next=NULL;
    temp1->next=temp2;
    temp3=(struct node *)malloc(sizeof(struct node));
    temp3->data=30;
    temp3->next=NULL;
    temp2->next=temp3;
    printf("elements in linked list are:");
    display(head);
    
    int data=100;
    printf("\nafter insertion at beginning:");
    begining(head,data);
    

    return 0;
}

