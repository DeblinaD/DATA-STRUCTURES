#include <iostream>

using namespace std;

int main()
{
    int array[10], size, position, i, element;
    
    cout<<"Enter the no. of elements in array"<<" ";
    cin>>size;
    
    cout<<"Enter the elements"<<" ";
    for(i=0; i<size; i++)
    {
        cin>>array[i];
    }
    
    cout<<"Enter the position where you want to insert"<<" ";
    cin>>position; //position means no. of alement position not the index 
    
    cout<<"Enter the element to be inserted"<<" ";
    cin>>element;
    
    for(i=size-1; i>=position-1; i--) //this is because we move the elements one step ahead unless we reach the desired position
    {
        array[i+1]=array[i];
    }
    array[position-1]= element;
    
    for(i=0; i<size+1; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
