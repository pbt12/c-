#include<bits/stdc++.h>
using namespace std;

void bubblesort(int* a,int n)
{
	
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<n-(i+1);j++)
		{
			if(a[j+1] < a[j])
			{
				
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout << a[i] << "  ";
	}
}

int main()
{
	int size;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	bubblesort(arr,size);
	return 0;
}

