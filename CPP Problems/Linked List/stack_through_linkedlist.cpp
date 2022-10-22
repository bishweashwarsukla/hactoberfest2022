#include<iostream>
#include<malloc.h>
using namespace std;
struct Node{
  int data;
  struct Node *next;
  
};

struct Node *head=NULL,*tail=NULL;

void push()
{
  struct Node *newNode;
  newNode=(struct Node*)malloc(sizeof(struct Node));
  cout<<"ENter data:";
  cin>>newNode->data;
  newNode->next=head;
  
  if(head==NULL)
  {
      head=tail=newNode;
  }
  else
  {
    newNode->next=head;
    head=newNode;
  }
}

void pop()
{
  struct Node *temp;
  if(head==NULL)
  {
    head=tail=NULL;
  }
  else
  {
    temp=head;
    head=head->next;
    free(temp);
  }
}

void display()
{
  struct Node *temp;
  if(head==NULL)
  {
    cout<<"Stack is an underflow";
    return;
    
  }
  else
  {
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  }
}
int main()
{ 
   push();
   cout<<"After the first PUSH operation list is :";
   display();
   cout<<"\n";
   push();
   cout<<"After the second PUSH operation list is :";
   display();
   cout<<"\n";
   pop();
   cout<<"After the first POP operation :";
   display();
   cout<<"\n";
     pop();
   cout<<"After the second POP operation :";
   display();
return 0;
}
