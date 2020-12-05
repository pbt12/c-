#include<bits/stdc++.h>
using namespace std;

int partition(int* a,int l,int r)
{
	int pivot = a[r];
	int pindex=l;
	for(int i=l;i<r;i++)
	{
		if(a[i] <=pivot)
		{
			int temp = a[i];
			a[i] = a[pindex];
			a[pindex] = temp;
			pindex++;
		}
	}
	
	int temp = a[r];
	a[r] = a[pindex];
	a[pindex] = temp;
	
	return pindex;
}

QuickSort(int* a,int l,int r)
{
	if(l<r)
	{
		int pindex = partition(a,l,r);
		QuickSort(a,l,pindex-1);
		QuickSort(a,pindex+1,r);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout << a[i] << "  ";
	}
	return 0;
}

