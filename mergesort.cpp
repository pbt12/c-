//merge sort
#include<bits/stdc++.h>
using namespace std;

merge(int* a,int l,int m,int r)
{
	int temp[r+1];
	int i=l;
	int j=m+1;
	int k=l;
	
	while(i<=m && j<=r)
	{
		
		if(a[i]<=a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	
	while(i<=m)
	{
		
		temp[k] = a[i];
		i++;
		k++;
	}
	
	while(j<=r)
	{
		
		temp[k] = a[j];
		j++;
		k++;
	}
	i=l;
	while(i<=r)
	{
		
		a[i]=temp[i];
		i++;
	}
	

}

mergesort(int* a,int l,int r)
{
	if(l<r)
	{
	
	int m= ((l+r)/2);
	mergesort(a,l,m);
	mergesort(a,m+1,r);
	merge(a,l,m,r);
	
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
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << "    " ;
	}
	return 0;
}

