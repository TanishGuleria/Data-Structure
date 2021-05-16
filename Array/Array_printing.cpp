#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6};
	cout<<*(a+0)<<endl;
	cout<<2[a]<<endl;
	cout<<*(a+(*(a+2)+1));
}
