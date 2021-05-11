#include<bits/stdc++.h>
using namespace std;
int f1(int a ,int b) // formal parameters
{
	// memory is created in stack then deleted after use 
	return a+b; 
int main()
{
	int a=10,b=20;
	cout<<f1(a,b); //actual parameters
}
