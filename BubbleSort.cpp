#include <iostream>
#include <stdlib.h>
using namespace std;

int BubbleSort(int Arr[], int iLength)    
{
    int i = 0, j = 0, temp = 0;
    for(i = 0; i < iLength-1; i++)
    {
        int flag = 0;
        for(j = 0; j < iLength-1-i; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    cout<<"Sorted Array is : \n";

    for(i = 0; i < iLength; i++)
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

    BubbleSort(ptr,iLength);

    free(ptr);

    return 0;
}