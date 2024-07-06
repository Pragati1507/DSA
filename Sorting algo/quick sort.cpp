#include<iostream>
using namespace std;
int Partition(int arr[],int low ,int high)
{
    int x,y,pivot;
    x=low-1;
    pivot=arr[high];
    for ( y = low; y <=high; y++)
    {
        if (arr[y]<pivot)
        {
            x++;
            swap(arr[x],arr[y]);
        }
    }
    swap(arr[x+1],pivot);
    return x+1;
    
}
void Quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pos=Partition(arr,low,high);
         Quicksort(arr,low,high);
         Quicksort(arr,pos+1,high);
    }
   
}