#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int found = search(arr, n, key);

    if (found)
    {
        cout << "Found at index: "<< endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
}