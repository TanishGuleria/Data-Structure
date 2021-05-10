#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
	int length; // int is 4 bytes
	int breath; // int is 4 bytes
	char  ch; //1 byte but will we conciderd as 4 (PADDING OF MEMORY)
}r3; // declare object 
// 8 bytes of memory 
struct rectangle global // global object
int main()
{
	// r is an object occuping 8 bytes of memory in stack 
	struct rectangle r1 = {10,20};  // one way to intialized values
	
	int temp = r1.length*r1.breath;
	cout<<temp*2;
}
