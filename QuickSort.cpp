#include <iostream>
#include <stdlib.h>
using namespace std;

int Partition(int Arr[], int lb, int ub)    
{
    int pivot = Arr[lb];

    int start = lb, end = ub, temp = 0;

    while(start < end)
    {
        while(Arr[start] < pivot)
        {
            start++;
        }
        while(Arr[end] > pivot)
        {
            end--;
        }

        if(start < end)
        {
            temp = Arr[start];
            Arr[start] = Arr[end];
            Arr[end] = temp;
        }
    }
    swap(Arr[lb],Arr[end]);

    return end;
}

int QuickSort(int Arr[],int lb, int ub)
{
    int loc = 0;
    if(lb < ub)
    {
        loc = Partition(Arr,lb,ub);

        QuickSort(Arr,lb,loc-1);
        QuickSort(Arr,loc+1,ub);
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

    QuickSort(ptr,0,iLength);

    cout<<"Sorted Array is : \n";

    for(int i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<" ";
    }

    free(ptr);

    return 0;
}