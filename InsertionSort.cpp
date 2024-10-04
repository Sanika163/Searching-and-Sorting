#include <iostream>
#include <stdlib.h>
using namespace std;

int InsertionSort(int Arr[], int n)    
{
    int i = 0, j = 0, temp = 0;

    for(i = 1; i < n; i++)
    {
        temp = Arr[i];
        int j = i-1; 

        while( j >= 0 && Arr[j]>temp)
        {
            Arr[j+1] = Arr[j];
            j--;
        }

        Arr[j+1] = temp; 
    }

    cout<<"Sorted Array is : \n";

    for(i = 0; i < n; i++)
    {
        cout<<Arr[i]<<" ";
    }
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

    InsertionSort(ptr,iLength);

    free(ptr);

    return 0;
}