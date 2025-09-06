#include<iostream>

void MoveZerosToEnd(int arr[],int n)
{
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        if (arr[right] !=0)
        {
            int temp = arr[right];
            arr[right] = arr[left];
            arr[left] = temp;
            left++;
        }
    }
}

int main()
{
    int arr[] = {3,5,0,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    MoveZerosToEnd(arr,n);

    for (int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }

    return 0;
}