#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int lock,stock,barrel;
	int tlock=0,tstock=0,tbarrel=0;
	float lsale,ssale,bsale;
	float sales=0.0,comission=0.0;
	float lprice=45.0,sprice=30.0,bprice=25.0;
	cout<<"enter value for lock : ";
	cin>>lock;
	cout<<endl;
	if(lock==-1)
	{
		cout<<"program terminated"<<endl;
		exit(0);
	}
	while(lock != -1)
	{
		tlock=tlock+lock;
		if(lock<1 || lock>70)
		{
		cout<<"locks out of range"<<endl<<endl;
		}
		cout<<"enter value for stock : ";
		cin>>stock;
		cout<<endl;
		tstock=tstock+stock;
		if(stock<1 || stock>80)
		{
		cout<<"stock out of range"<<endl<<endl;
		}
		cout<<"enter value for barrel : ";
		cin>>barrel;
		cout<<endl;
		tbarrel=tbarrel+barrel;
		if(barrel<1 || barrel>90)
		{
		cout<<"barrel out of range"<<endl<<endl;
		}
		cout<<"enter value for lock : ";
		cin>>lock;
		cout<<endl;
	}
	if((tlock<1 || tlock>70)&&(tstock<1 || tstock>80)&&(tbarrel<1 || tbarrel>90))
	{
		cout<<"Total lock,total stock,total barrel out of range"<<endl;
		exit(0);
	}
	if((tlock<1 || tlock>70)&&(tstock<1 || tstock>80))
	{
		cout<<"Total lock,total stock out of range"<<endl;
		exit(0);
	}
	if((tstock<1 || tstock>80)&&(tbarrel<1 || tbarrel>90))
	{
		cout<<"total stock,total barrel out of range"<<endl;
		exit(0);
	}
	if((tlock<1 || tlock>70)&&(tbarrel<1 || tbarrel>90))
	{
		cout<<"Total locks,total barrel out of range"<<endl;
		exit(0);
	}
	if(tlock<1 || tlock>70)
	{
		cout<<"total locks out of range"<<endl;
		exit(0);
	}
	if(tstock<1 || tstock>80)
	{
		cout<<"total stock out of range"<<endl;
		exit(0);
	}
	if(tbarrel<1 || tbarrel>90)
	{
		cout<<"total barrel out of range"<<endl;
		exit(0);
	}
	
	lsale = tlock*lprice;
	ssale = tstock*sprice;
	bsale = tbarrel*bprice;
	sales = lsale+ssale+bsale;
	cout<<"the total sale is : "<<sales<<endl;
	if(sales>1800.0)
	{
		comission=0.10*1000;
		comission=comission+(0.15*800);
		comission=comission+((sales-1800)*0.20);
	}
	else if(sales>1000)
	{
		comission=0.10*1000;
		comission=comission+((sales-1000)*0.15);
	}
	else
		comission=0.10*sales;
	cout<<"The comission is : "<<comission<<endl;
}
