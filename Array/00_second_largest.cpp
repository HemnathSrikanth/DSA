#include<iostream>
#include<limits.h>

int SecondLargetst(int arr[], int n)
{
    if (n<2)
    {
        return -1;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i<n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i]>second && arr[i] != first)
        {
            second = arr[i];
        }
        
    }

    if (second == INT_MIN)
    {
        return -1;
    }
    
    else
    {
        return second;
    }

}

int main()
{
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << SecondLargetst(arr,n);
    return 0;
}