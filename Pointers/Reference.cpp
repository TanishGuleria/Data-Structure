#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a=10;
	int &r=a;
	cout<<r<<endl;
	int b=20;
	r=b;
	cout<<r<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
