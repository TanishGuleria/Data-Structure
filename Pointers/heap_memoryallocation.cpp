#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *p,*p2;
	p =  (int *)malloc(5*sizeof(int)); // for c language 
	p2 = new int[5]; // for c++
	
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	
	delete []p2; // used in c++
	free(p); // used in c
	
	//  pointer size is 8 bytes independent of the data type  
}
