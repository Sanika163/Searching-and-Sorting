#include <iostream>
#include <stdlib.h>
using namespace std;

void SelectionSort(int Arr[], int n)    
{
    int i = 0 , j = 0;

    for( i = 0; i < n-1; i++)
    {
        int min = i;

        for(j = i+1; j < n; j++)
        {
            if(Arr[j] < Arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = Arr[min];
            Arr[min] = Arr[i];
            Arr[i] = temp;
        }
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

    SelectionSort(ptr,iLength);

    free(ptr);

    return 0;
}