#include<stdio.h>

void ReversedArray(int arr[],int n)
{
    int left = 0;
    int right = n-1;

    for (int i=0;i<n/2;i++)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",ReversedArray(arr,n));
}