#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int binary(int key,int a[],int low,int high)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			cout<<"element found at position : "<<mid+1;
			return mid;
		}
		else if(key>a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"enter the number of elements in the array\n";
	cin>>n;
	cout<<endl;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key,flag=0;
	while(flag==0)
	{
	cout<<"enter the element to be searched\n";
	cin>>key;
	cout<<"endl";
	int k=-1;
	k=binary(key,a,0,n-1);
	if(k==-1)
		cout<<"element not found";
	cout<<"enter 0 to continue";
	cin>>flag;
	}
}
