#include<iostream>
using namespace std;
void merge(int arr[],int low,int high,int mid)
{
    int i= low;
    int j=mid+1;
    int arr[high];
    int k=0;
    while (i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            i++;
            arr[k]=arr[i];
            k++;
        }
        else
        {
            j++;
            arr[k]=arr[j];
            k++;
        }
    }
    while (i<=mid)
    {
        i++;
        arr[k]=arr[i];
        k++;
    }
    while (j<=high)
    {

        j++;
        arr[k]=arr[i];
        k++;
    }
    for(i=low;i<k;i++)
    {
        arr[i]=arr[i];
    }
}
void mergesort(int arr[],int low ,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        merge(arr,low,high,mid);
    }
}