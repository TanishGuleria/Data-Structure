#include<bits/stdc++.h>
using namespace std;
struct rectangle{
	int length;
	int breath;
};


int main()
{
	struct rectangle r = {10,20
	};
	struct rectangle *p;
	p = &r;
	cout<<p->length<<endl; // way to acess structure using pointer
	cout<<(*p).breath<<endl;
	
	
	
	// using heap
	
	struct rectangle *hp;
//	 hp = (struct rectangle *) malloc(sizeof(struct rectangle));
	hp = new rectangle;
	hp->breath =10;
	hp->length=20;
	cout<<hp->breath;
	 
	 	 
}
