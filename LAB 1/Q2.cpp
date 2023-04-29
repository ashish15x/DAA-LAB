//binary search
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
        return mid;
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

    cout<<"enter the key to be searched "<<endl;
    cin>>k;
    int bs=search(ar,size,k);
    cout<<"the key is found at ="<<endl;
    cout<<bs;
    return 0;
}