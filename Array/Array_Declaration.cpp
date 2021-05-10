#include<iostream>
#include<stdio.h>
int main()
{
	int a[5]; //stored in stack memory
	int b[] = {1,2,3,4,5}; //stored in stac memory
	
	int size = sizeof(b)/sizeof(b[0]); // int size is 4 byte
	for(int i=0;i<size;i++)
	{
		printf("%d \n",b[i]);
	}
	a[1] = 2;
	printf("%d \n",a[1]);
	printf("%d \n",a[0]); // prints 0 output
	printf("%d \n",a[10]); // give garbage value
}
