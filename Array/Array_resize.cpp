#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *p;
	int counter =0;
	p=(int *)malloc(5*sizeof(int));
	
	for(int i=0;i<5;i++)
	{
		p[i]=counter++;;
	}
	for(int i=0;i<5;i++)
	{
		cout<<" "<<p[i];
	}
	
	
	int *q;
	q= (int*)malloc(10*sizeof(int));
	q=0;
	q=p;
	
	p=NULL;
	cout<<endl;
	delete []p;
	for(int i=0;i<10;i++)
	{
		cout<<" "<<q[i];
	}
	
}
