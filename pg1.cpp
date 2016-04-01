#include<iostream>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main(int argc,char* argv[])
{
	int a,b,c,d;
	//while(1)
	//{
		//cout<<"enter the 3 side in seperate lines"<<endl;
		//cin>>a>>b>>c;
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		c=atoi(argv[3]);
		if((a<1||a>10)&&(b<1||b>10)&&(c<1||c>10))
		{
			cout<<"a,b and c is out of range"<<endl;
		}
		else if((a<1||a>10)&&(b<1||b>10))
		{
			cout<<"a and b is out of range"<<endl;
		}
		else if((b<1||b>10)&&(c<1||c>10))
		{
			cout<<"b and c is out of range"<<endl;
		}
		else if((a<1||a>10)&&(c<1||c>10))
		{
			cout<<"a and c is out of range"<<endl;
		}
		else if(a<1||a>10)
		{
			cout<<"a is out of range"<<endl;
		}
		else if(b<1||b>10)
		{
			cout<<"b is out of range"<<endl;
		}
		else if(c<1||c>10)
		{
			cout<<"c is out of range"<<endl;
		}
		//if(a!=0 && b!=0 && c!=0)
		//{
		else
		{
			if(a<(b+c) && b<(c+a) && c<(a+b))
			{
				if(a==b && b==c)
					cout<<"Equilateral triangle"<<endl;
				else if(a!=b && b!=c && a!=c)
					cout<<"Scalene triangle"<<endl;
				else
					cout<<"Isosceles triangle"<<endl;
			}
			else
				cout<<"cannot form a triangle"<<endl;
		}
		/*else
			break;
		cout<<"enter 0 to exit 1 to continue"<<endl;
		cin>>d;
		if(d==0)
			exit(0);
		else
			continue;*/
	//}
}
