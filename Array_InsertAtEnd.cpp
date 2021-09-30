#include <bits/stdc++.h>

using namespace std;

int main()
{
   int array[10], newarray[10], size, i, element;
   
   cout<<"Enter the size of the array: ";
   cin>>size;
   
   cout<<"Enter the elements in the array: ";
   for(i=0; i<size; i++)
   {
       cin>>array[i];
   }
   
   cout<<"Enter the element to be inserted in the end: ";
   cin>>element;
   
   array[size]=element;
   
   for(i=0; i<size+1; i++)
   {
       cout<<array[i]<<" ";
   }
    return 0;
}
