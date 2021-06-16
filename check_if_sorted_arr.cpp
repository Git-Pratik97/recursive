#include<iostream>
using namespace std;

bool sorted_arr(int arr[], int n)
{
    if (n ==1 )
    {
        return true;
    }
    bool rest_arr = sorted_arr(arr+1, n-1);
    return (arr[0] < arr[1] && rest_arr);
}

int main()
{
    int arr[] = {1,2,7,4,5,6};
    int n = sizeof(arr);

    cout << sorted_arr(arr, n) <<endl;

    return 0;
}