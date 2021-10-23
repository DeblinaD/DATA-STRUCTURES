//inserting a node in the beginning of a linked list
#include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
   struct Node *Start;
   struct Node *NewNode;
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

    //now adding an extra node for adding in the beginning
   struct Node *NewNode= NULL;
   NewNode= (struct Node*)malloc(sizeof(struct Node));

   NewNode->next=Start;
   NewNode->data= 0;

   while(NewNode!=NULL)
   {
      cout<<NewNode->data<<" ";
      NewNode=NewNode->next;
   }
    return 0;
}
