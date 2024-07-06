#include<iostream>
using namespace std;
//creating bubble sort function with two argument(array,size)
void bubbleSort(int arr[],int n)
{
    //iteration pass
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j <n-i-1; j++)
        {
            /* code */
            cout<<"pass :"<<i+1<<endl;
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        } 
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i]<<"\t";
        }
        cout<<endl;
        
    }
}

void print(int arr[],int n)
    {
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i]<<" ";
        }
        cout<<""<<endl;
    }
    int main()
    {
        int arr[5]={3,4,5,7,8};
        int size=sizeof(arr)/sizeof(arr[0]);
        cout<<"Before call bubble sort"<<endl;
        print(arr,size);
        bubbleSort(arr,size);

        cout<<"After bubble sort call"<<endl;
        print(arr,size);

    }