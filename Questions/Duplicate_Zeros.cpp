#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {0,0,0,0,0,0,0,0,0};
	int arrSize = 8;
    
   int count =0;
    int temp = 0;
    for(int i=0;i<arrSize;i++)
    {
        if(count <arrSize)
        {
        if(arr[i]==0)
        {
            temp =i;
            count =  count + 2;
        }
        else
        {
            count ++;
            temp =i;
        }
        }
        else{
            break;
        }
        
    }
    cout<<temp<<endl;
    int b = arrSize-1;
    
    for(int i =temp ;i >=0 ;i-- )
    {
        if(arr[i]==0)
        {
            arr[b]=0;
            b--;
            arr[b]=0;
            b--;
        }
        else{
            arr[b]=arr[i];
            b--;
        }
    }
    
    for(int i=0;i<8;i++)
    {
    	cout<<arr[i]<<" ";
	}
    
}
