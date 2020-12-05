#include<bits/stdc++.h>
using namespace std;

void insertionsort(int* arr,int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0 && arr[j]>key;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1] = key;
	}
	
	for(i=0;i<n;i++)
	{
		cout << arr[i] << "  ";
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
	insertionsort(arr,size);
	return 0;
}

