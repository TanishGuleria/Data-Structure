#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {-4,-1,0,3,10};
	int b [5];	
	int first =0 , last=4;
	
	for(int i=4;i>=0;i--)
	{
		if(abs(a[first])>a[last])
		{
			b[i] = a[first]*a[first];
			first ++;
		}
		else{
			b[i]= a[last]*a[last];
			last --;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	
	
}
