#include <iostream>
using namespace std;
  
// Function to find the
int findSingle(int ar[], int n)
{
  
    // Iterate over every element
    for (int i = 0; i < n; i++) {
  
        int count = 0;
  
        for (int j = 0; j < n; j++) {
            if (ar[i] == ar[j]) {
                count++;
            }
        }
  
        // if the frequency of the
        // element is one
        if (count == 1) {
            return ar[i];
        }
    }
    
    return -1;
}
  
// Driver code
int main()
{
    int n;
    cin>>n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
      
    cout << "Element occurring once is "<< findSingle(ar, n);
    
    return 0;
}