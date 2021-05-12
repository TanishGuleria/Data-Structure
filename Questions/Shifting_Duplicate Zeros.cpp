#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr [ ] = {1,0,2,3,0,4,5,0};
	
	   int arrSize = 8;
    int *b;
    int size = arrSize*2;
    b= (int *)malloc (size*sizeof(int));
    
    int x =0;
    for(int i=0;i<arrSize;i++)
    {
    	if(arr[i]==0)
    	{
    		b[x]=0;
    		x++;
    		b[x]=0;
    		x++;
    		
		}
		else
		{
			b[x]=arr[i];
			x++;
		}
        
    }
    
    for(int i=0;i<arrSize;i++){
        cout<<b[i]<<" ";
        
    }
    
    free(b);
}
