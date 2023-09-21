#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfArr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    sumOfArr(arr, n);
    printf("%d",sumOfArr(arr,n));
    return 0;
}