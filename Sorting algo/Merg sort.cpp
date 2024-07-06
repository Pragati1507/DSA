#include<iostream>
using namespace std;
void merge(int arr[],int low,int high,int mid)
{
    int i= low;
    int j=mid+1;
    int arr[high];
    int k=0;
    while (i<=mid)
    {
        if(i<j)
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

}