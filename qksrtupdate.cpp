#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
 void qsrt(int a[],int low,int high)
{
	//cout<<"inside qsrt fn\n";
	int temp,k;
	int p=low;	
	int i=low+1;
	int j=high;
	if(low>=high)
		return;
	while(i<=j)
{
		while(a[i]<=a[p])
			i++;
		while(a[j]>a[p])
			j--;
		if(i<j)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;	
		}
		
}	
		temp=a[j];
		a[j]=a[p];
		a[p]=temp;	

	qsrt(a,low,j-1);
	qsrt(a,j+1,high);
}
main()
{
	int n,i;
	int *a;
	cout<<"enter the size of the array\n";
	cin>>n;
	a=new int[n];
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];      
	qsrt(a,0,n-1);
	cout<<"the sorted array is\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
        delete []a;
}

