#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1 ,5,6,7,8};
    int key, j, i, flag;
    for (i = 1; i < 5; i++)
    {
        flag = 0;

        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--; // here j become j=-1
            /* code */
            flag = 1;
        }
        arr[j + 1] = key;
        if (flag == 0)
        {
            for (int k = 0; k < 5; k++)
            {
                /* code */
                cout << arr[k] << "\t";
            }
            cout<<"Pass"<<i<< endl;
        
        }

    }
}