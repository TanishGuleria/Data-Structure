#include<bits/stdc++.h>
using namespace std;
template <class T>
class  square{
	
	T length;
	T breath;
	public:
		square();
		square(T l,T b);
		T area();
		T change(T l);
		~square(){
			cout<<"destructor";
		}
};
template <class T>
square<T>::square()
{
	this->length=0;
	this->breath=0;
}
template <class T>
square<T>::square(T l , T b)
{
	this->length =l;
	this->breath =b;
 } 
 
 template <class T>
square<T>::area()
{
	return this->length*this->breath;
}

int main()
{
 square<int> s(10,20);
 
 cout<<s.area()<<endl;
 //s.change(40);
 cout<<s.area()<<endl;
 
 	
}

