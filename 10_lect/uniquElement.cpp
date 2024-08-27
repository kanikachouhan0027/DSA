#include <iostream>
using namespace std;
int FindUnique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        int reverse = 0;
        

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;

                break;
            }
        }
        for (int k = i-1; k >= 0;k--)
        {
            if (arr[i] == arr[k])
            {
                reverse = reverse + 1;
                break;
            }
        }
        if (count == 0 && reverse==0)
        {
            return arr[i];
        }
    }
}
int main()
{
    int arr[] = {2,3,1,6,3,6,2};
    int n = 7;
    cout << FindUnique(arr, n);
}