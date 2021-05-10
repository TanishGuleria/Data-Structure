#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
	int length; // int is 4 bytes
	int breath; // int is 4 bytes
}; // 8 bytes of memory 

int main()
{
	// r is an object occuping 8 bytes of memory in stack 
	struct rectangle r1 = {10,20};  // one way to intialized values
	
	int temp = r1.length*r1.breath;
	cout<<temp*2;
}
