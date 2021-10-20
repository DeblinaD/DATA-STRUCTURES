//a simple program to create a linked list with 3 nodes.
#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    /*now allocating the three nodes into heap memory*/
    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));

    /* Three blocks have been allocated dynamically.
     We have pointers to these three blocks as head,
     second and third    
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
    
    presently the store no value, these are just null*/

    /*now assigning value to the nodes*/
    head->data=1;
    head->next= second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    while(head!= NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

    return 0;
}
