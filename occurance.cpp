#include<iostream>

using namespace std;

int first_occ(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return first_occ(arr, n, i+1, key);
}

int last_occ(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int rest_arr = last_occ(arr, n, i+1, key);
    if (rest_arr != -1)
    {
        return rest_arr;
    }
    if (arr[i]== key)
    {
        return i;
    }
    else
    {
        return -1;
    }
   
}

int main()
{
    int arr[] = {1,2,3,4,2,2,3,5,1,4};
    int n = sizeof(arr);

    cout << first_occ(arr, n, 0, 4) << endl;
    cout << last_occ(arr, n, 0, 4) <<endl;

    return 0;
}