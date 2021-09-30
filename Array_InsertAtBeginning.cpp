#include <iostream>

using namespace std;

int main()
{
   int array[10], size, i;
   
   cout<<"Enter the size of the array: ";
   cin>>size;
   
   cout<<"Enter the elements in the array: ";
   for(i=0; i<size; i++)
   {
       cin>>array[i];
   }
   
   int element;
   cout<<"Enter the element to be inserted in the beinning ";
   cin>>element;
   for(i=size-1; i>=0; i--)
   {
       array[i+1]= array[i];
   }
   array[0]=element;
   
   for(i=0; i<size+1; i++)
   {
       cout<<array[i]<<" ";
   }
    return 0;
}
