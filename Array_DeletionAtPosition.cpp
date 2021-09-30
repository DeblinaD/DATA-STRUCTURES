#include <bits/stdc++.h>

using namespace std;

int main()
{
   int array[10], size, i, pos;
   
   cout<<"Enter the size of the array: ";
   cin>>size;
   
   cout<<"Enter the elements in the array: ";
   for(i=0; i<size; i++)
   {
       cin>>array[i];
   }
   
   cout<<"Position from which the element to be deleted: ";
   cin>>pos;
   for(i=pos-1; i<size-1; i++)
   {
       array[i]=array[i+1];
   }
   
   for(i=0; i<size-1; i++)
   {
       cout<<array[i]<<" ";
   }
    return 0;
}
