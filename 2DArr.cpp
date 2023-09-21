#include<iostream>
using namespace std;

int ArrAdd(int arr1[m][n], int arr2[m][n], int arr3[m][n], int m, int n){

    int arr3[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int arr3[i][j] = arr1[i][j] + arr2[i][j];
            return arr3[i][j];
        }
    }

    
}

int PrintArr(int arr1[m][n], int arr2[m][n], int arr3[m][n], int m, int n){

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"\t"<<arr3[i][j];
            
        }
        cout<<endl;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m][n];
    int arr2[m][n];
    int arr3[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    
    ArrAdd(arr1, arr2, arr3, m, n);
    PrintArr(arr1,arr2,arr3,m,n);
}