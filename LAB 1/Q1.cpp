//Insertion Sort

#include<iostream>
using namespace std;

void Insertion_Sort()
{
    for(int j=1;j<len(arr);++j)

}



void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i];
    }
}

int main()
{
    int arr[5];
    cout<<"Enter the array to be sorted:"<<endl;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printArray(arr,size);

}