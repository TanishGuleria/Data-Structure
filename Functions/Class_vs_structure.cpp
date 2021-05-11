#include<bits/stdc++.h>
using namespace std;
class square{
	
	int length;
	int breath;
	public: 
	
	square() //default constructor 
	{
		this->length =0;
		this->breath = 0;
	}
 	square(int l ,int b) //parameterize constructor 
	{
		this->length = l;
		this->breath = b;
	}
	
	 int area()
	{
		return length * breath;
	}
	void changelength(int l);
	
	~square(){
		cout<<"destructor";
	}
};
 void square::changelength(int l)
 {
 	this->length =l;
 }


int main()
{
	square s(10,20);
	
	cout<<s.area()<<endl;
	s.changelength(30);
	cout<<s.area()<<endl;
	
	
}
