#include<bits/stdc++.h>
using namespace std;

int binerysearch(int* arr,int left,int right,int value)
{
	int mid=(left+right)/2;
	/*if(value==arr[mid])
	return mid;
	else if(value>arr[mid])
	{
		left=mid+1;
		return binerysarch()
	}*/
	while(arr[mid]!=value)
	{
		if(value>arr[mid])
		{
			left=mid+1;
			mid=(left+right)/2;
		}
		else if(value<arr[mid])
		{
			right=mid-1;
			mid=(left+right)/2;
		}
	}
	return mid+1;
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
	int m;
	cout << "nummber to be searched = " ;
	cin >> m;
	cout << binerysearch(arr,0,n,m);
	return 0;
}
