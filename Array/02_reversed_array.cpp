#include<iostream>

void ReversedArray(int arr[],int n)
{

    for (int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    ReversedArray(arr,n);
    for (int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}