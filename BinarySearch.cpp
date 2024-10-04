#include <iostream>
#include <stdlib.h>
using namespace std;

int BinarySearch(int Arr[], int iLength,int data)    
{
    int l = 0, r = iLength-1; 

    while(l < r)
    {
        int mid = (l + r) /2;

        if(Arr[mid] == data)
        {
            return mid;
        }
        else if(data < Arr[mid])
        {
            r = mid-1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;

    cout<<"Enter no of elements you want in array : \n";
    cin>>iLength;

    int *ptr = new int[iLength];

    cout<<"Enter "<<iLength<<" elements in array : ";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Enter no to find in array : \n";
    cin>>iNo;
    
    int iRet = BinarySearch(ptr,iLength,iNo);

    if(iRet == -1)
    {
        cout<<iNo<<" is not present in array";
    }
    else
    {
        cout<<"Element "<<iNo<<" is present at index : \n"<<iRet;
    }

    free(ptr);

    return 0;
}