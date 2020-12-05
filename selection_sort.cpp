#include<bits/stdc++.h>
using namespace std;

selectionsort(int* a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	selectionsort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << "  ";
	}
	
}
