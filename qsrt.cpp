#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<sys/time.h>
#define max 1000
using namespace std;
struct timeval tim;
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
	double dt1,dt2;
	cout<<"enter the size of the array\n";
	cin>>n;
	a=new int[n];
	//int a[n];
	for(i=1;i<=n;i++)
		a[i]=rand()%100;
	cout<<"the random array is\n";
	for(i=1;i<=n;i++)
		cout<<a[i]<<endl;
	cout<<"before qsrt in main\n";
        gettimeofday(&tim,NULL);
        dt1=(tim.tv_sec*1000000)+(tim.tv_usec);
	qsrt(a,1,n);
        gettimeofday(&tim,NULL);
        dt2=(tim.tv_sec*1000000)+(tim.tv_usec);
	cout<<"after qsrt in main\n";
	cout<<"the sorted array is\n";
	for(i=1;i<=n;i++)
		cout<<a[i]<<"\t";
                cout<<"time taken"<<dt2-dt1;
               	
	delete []a;
}
