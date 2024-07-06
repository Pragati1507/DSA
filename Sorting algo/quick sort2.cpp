//this code is for practice the quick sort 
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int x,y,pivot;
    x=low-1;
    pivot=arr[high];
    for ( y =low; y <=high; y++)
    {
        if (arr[y]<pivot)
        {
            x++;
            swap(arr[x],arr[y]);
            /* code */
        }
    }
    swap(arr[x+1],arr[pivot]);
    return x+1;
}