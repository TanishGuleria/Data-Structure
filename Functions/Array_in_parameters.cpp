#include<bits/stdc++.h>
using namespace std;

int * sum(int *a,int size,int *rsize)
{
	
	int *p;
	
	p = (int*)malloc(size*sizeof(int)); 
	for(int i=0;i<size;i++)
	{
		p[i]=a[i]; 
	}
	
	*rsize = size;
	
	return p;
}
int main()
{
	int a[5] = {1,2,3,4,5};
	int size =5;
	int rsize=0;
	int *p;
	p = (int*)malloc(size*sizeof(int)); 
	
	p =   sum(a,size,&rsize);
	
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
}
