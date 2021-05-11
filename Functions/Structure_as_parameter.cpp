#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int marks[5];	
};

struct student * getval(struct student *s1)
{
	s1->name = "tanish";
	s1->marks[0] = 1;
}



int main()
{

	
	struct student *p;
	p= (struct student*)malloc(sizeof(struct student));
	p=	getval(p);
		cout<<p->name;
		cout<<p->marks[0];
}
