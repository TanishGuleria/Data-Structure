#include<bits/stdc++.h>
using namespace std;
 int PBVswap(int x ,int y)
 {
 	int temp;
 	temp = x;
 	x=y;
 	y=temp;
 }
 int PBAswap(int *x , int *y)
 {
 	int temp;
 	temp = *x;
 	*x=*y;
 	*y=temp;
 }
 int PBRswap(int &x , int &y)
 {
 	int temp;
 	temp = x;
 	x=y;
 	y=temp;
 }


int main()
{
		int a=10,b=20;
		PBVswap(a ,b); // pass by value
		cout<<a<<b<<endl;
		
		PBAswap(&a,&b); // pass by address
		cout<<a<<b<<endl;
		a=40;
		b=50;
		//no extra memory is taken  
		PBRswap(a,b); // only iin c++ not in c pass by refrence 
		cout<<a<<b<<endl;
		
}
