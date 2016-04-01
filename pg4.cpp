#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(int argc,char *argv[])
{
	int tomday=0,tommonth=0,tomyear=0;
	int day,month,year;
	char dtm[10];
	strcpy(dtm,argv[1]);
	sscanf( dtm, "%d/%d/%d",&day,&month,&year );
	/*cout<<"value of day : "<<day<<endl;
	cout<<"value of month : "<<month<<endl;
	cout<<"value of year : "<<year<<endl;*/
	//while(1)
	//{
	/*cout<<"enter the date in the format yyyy mm dd"<<endl;
	cin>>year;
	cin>>month;
	cin>>day;*/
	tomday=day;
	tommonth=month;
	tomyear=year;
	if((day<1 || day>31)&&(month<1 || month>12)&&(year<1811 || year>2016))
	{
		cout<<"day,month,year is out of range"<<endl;
		//cout<<"re-enter the date"<<endl;
		//continue;
		exit(0);
	}
	else if((day<1 || day>31)&&(month<1 || month>12))
	{
		cout<<"day,month is out of range"<<endl;
		//cout<<"re-enter the date"<<endl;
		//continue;
		exit(0);
	}
	else if((year<1812 || year>2016)&&(month<1 || month>12))
	{
		cout<<"month,year is out of range"<<endl;
		//cout<<"re-enter the date"<<endl;
		//continue;
		exit(0);
	}
	else if((year<1812 || year>2016)&&(day<1 || day>31))
	{
		cout<<"day,year is out of range"<<endl;
		//cout<<"re-enter the date"<<endl;
		//continue;
		exit(0);
	}
	else if(day<1 || day>31)
	{
		cout<<"day out of range"<<endl;
		//continue;
		exit(0);
	}
	else if(month<1 || month>12)
	{
		cout<<"month out of range"<<endl;
		//continue;
		exit(0);
	}
	else if(year<1812 || year>2016)
	{
		cout<<"year out of range"<<endl;
		//continue;
		exit(0);
	}
	else
	{
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
		{
			if(day<31)
			{
				tomday=day+1;
			}
			else if(day==31)
			{
				tomday=1;
				tommonth=month+1;
			}
			else
			{
				cout<<"invalid"<<endl;
				//continue;
				exit(0);
			}
		}
		if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			if(day<30)
			{
				tomday=day+1;
			}
			else if(day==30)
			{
				tomday=1;
				tommonth=month+1;
			}
			else
			{
				cout<<"invalid"<<endl;
				exit(0);
				//continue;
			}
		}
		if(month == 2)
		{
			if(day<28)
			{
				tomday=day+1;	
			}
			else
			{
				if(day==28)
				{
					if(year%400==0 || (year%4==0 && year%100!=0))
					{
						tomday=day+1;
					}
					else
					{
						tomday=1;
						tommonth=3;
					}
				}
				else if(day==29)
				{
					if(year%400==0 || (year%4==0 && year%100!=0))
					{
						tomday=1;
						tommonth=3;
					}
					else
					{
						cout<<"invalid date"<<endl;
						exit(0);
					}
				}
				else
				{
					cout<<"invlaid date"<<endl;
					exit(0);
				}
			}
		}
		if(month==12)
		{
			if(day<31)
			{
				tomday=day+1;
			}
			else
			{
				tomyear=year+1;
				if(tomyear==2017)
				{
					cout<<"out of range"<<endl;
					exit(0);
					//continue;
				}
				tomday=1;
				tommonth=1;
				
			}
		}
		cout<<tomday<<"/"<<tommonth<<"/"<<tomyear<<endl;
	}
	
	/*int i;
	cout<<"press 0 to exit 1 to continue"<<endl;
	cin>>i;
	if(i==0)
		exit(0);
	else
		continue;
	}*/
}

