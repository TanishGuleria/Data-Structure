#include<iostream>
#include<stdio.h>
//ponter is used for excessing outside resources or heap memory and paramater passing as well
int main()
{
	
	int *p,a=10; // declarantion take space in stack 
	p = &a;//initialization 
	printf("%d\n",a);
	printf("%d\n",p); // print adresss
	printf("%d\n",*p); // derefrencing
	
	
	//pointer with an arrray
	int *pa;
	int A[] = {1,2,3,4,5,6};
	pa = A ; //array itself is a address
	
	printf("%d",*pa); // give 1st element of array
	printf("%d",pa[1]); // no need to use * 
}
