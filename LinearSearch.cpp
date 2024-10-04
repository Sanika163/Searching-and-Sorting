#include <iostream>
#include <stdlib.h>
using namespace std;

int LinearSearch(int Arr[], int iLength,int Data)    
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == Data)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    return iCnt;
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
    
    int iRet = LinearSearch(ptr,iLength,iNo);

    if(iRet == -1)
    {
        cout<<iNo<<" is not present in array";
    }
    else
    {
        cout<<"Element "<<iNo<<"is present at index : \n"<<iRet;
    }

    free(ptr);

    return 0;
}