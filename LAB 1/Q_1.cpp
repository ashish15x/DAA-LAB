#include<iostream>
using namespace std;
int search(int ar[],int size,int k)
{
    int low=0;
    int high=size-1;
    int mid=low+(high+low)/2;
    while(low<=high)
    {
        if(ar[mid]==k)
        return mid;EN
        if(k>ar[mid])
        low=high+1;
        else
        {
        high=mid-1;
         }
         mid=(low+high)/2;
    }
    return -1;
}
void insertion(int ar[], int size) {
  for (int i = 1; i < size; i++) {
    int key = ar[i];
    int j = i - 1;
    while (key < ar[j] && j >= 0) {
      ar[j + 1] = ar[j];
      --j;
    }
    ar[j + 1] = key;
  }
}
void print(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int size,k;
    cout<<"enter the size "<<endl;
    cin>>size;
    int ar[size];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    insertion(ar,size);
    print(ar,size);
    cout<<"enter the key to be searched "<<endl;
    cin>>k;
    int bs=search(ar,size,k);
    cout<<"the key is found at ="<<endl;
    cout<<bs;
    return 0;
}