#include <stdio.h>
#include<stdlib.h>
void display();//function declaration
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)//function definition to print elements in list
{
  while(ptr!=NULL)//traversing entire list
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
  
struct node *head=NULL;
int main()
{
    struct node *temp1,*temp2,*temp3;
    temp1=(struct node *)malloc(sizeof(struct node));//creating memory of structure on heap and assigning to temp1 pointer
    temp1->data=10;
    temp1->next=NULL; 
    head=temp1;
    
    temp2=(struct node *)malloc(sizeof(struct node));//creating memory of structure on heap and assigning to temp2 pointer
    temp2->data=20;
    temp2->next=NULL;
    temp1->next=temp2;//assigning temp2 address to temp1's next 
    
    temp3=(struct node *)malloc(sizeof(struct node));//creating memory of structure on heap and assigning to temp3 pointer
    temp3->data=30;
    temp3->next=NULL;
    temp2->next=temp3;//assigning temp3 address to temp2's next 
    printf("elements in linked list are:");
    display(head);//function call to display elements
    return 0;
}

