#include<iostream>
#include<stdio.h>
using namespace std;
struct cards{
	int number;
	int shape;
	int color;
};
int main()
{
	struct cards c[2];
	
	for (int i=0;i<2;i++)
	{
		cin>>c[i].number;
		cin>>c[i].shape;
		cin>>c[i].color;
	}
	for (int i=0;i<2;i++)
	{
		cout<<c[i].number<<"-";
		cout<<c[i].shape<<"-";
		cout<<c[i].color<<endl;
	}
	
}
