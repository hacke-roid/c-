#include<iostream>

void printArray(int arr[],int n) {
	for (int i=0; i<n ; i++)
		std::cout<< arr[i] << "";
	std::cout<< std::endl;
}
void rearrange(int arr[],int n)
{
	int outofspace = -1;
	for(int i=0; i<n; i++)
	{
		if(outofspace>=0)
		{
			if((arr[i]>=0)&&(arr[outofspace]<0)||(arr[i]<0) && (arr[outofspace]>=0))
			{
				rightrotate(arr, n,outofspace, i); 
				

int main()
{
	int arr[] = {4 , -9 , -2 , 6 , -8};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	std::cout<< "Given array is \n" ;
	printArray(arr,n);
	
	rearrange(arr,n);
	
}
