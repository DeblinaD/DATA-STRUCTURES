//counting the no. of nodes
#include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
   struct Node *Start;
};
int main()
{  
   //creating a linked list first
    struct Node* Start = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    Start= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));

    Start->data=1;
    Start->next= second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    
    /*now counting the no. of nodes*/
    int count=0;
    if(Start==NULL)
    {
       cout<<"List is empty"<<endl;
    }
    else
    {
       while(Start!= NULL)
       {
          Start=Start->next;
          count++;
       }
    }
    cout<<"No. of nodes in the linked list is: "<<count;
    return 0;
}
