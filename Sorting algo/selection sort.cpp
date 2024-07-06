#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,1,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i ,j , min_index;
    for(i=0;i<5;i++)
    {
        min_index =i;
        for ( j = i+1 ; j < n; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index=j;

            }
            
        }
        if(min_index!=i)
        {
            swap(arr[min_index],arr[i]);
        }
        for(int k=0; k<n ; k++)
        {
            cout<<arr[k]<<"\t";
        }
        cout<<"Pass"<<i<<endl;
    }
}