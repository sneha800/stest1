#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
	list <int> l1,l2;
	//list <int>:: iterator it;

	//1. 
	l1.assign(5,10);
	for(auto x:l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	l2.assign(l1.begin(),l1.end());
	for(auto x:l2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//2,3.
	cout<<*(l1.begin())<<"\n";
	cout<<l1.back()<<"\n";

	//4.
	l2.clear();
	for(auto x:l2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//5.
	if(l2.empty())
	{
		cout<<"1"<<"\n";
	}
	//6.
	cout<<*(l1.end())<<"\n";
	//7.
	l2.assign(l1.begin(),l1.end());
	l2.erase(l2.begin());
	//8,9, same as vector
	cout<<l1.max_size()<<"\n";
	l1.merge(l2);
	// remove 
	l1.remove(10);
	l1.assign(5,10);

	// mylist.remove_if (is_odd());     when you want to erase return value
	l1={1,2,3,4,5};
	 l1.reverse();
	 for(auto x:l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	cout<<l1.size()<<"\n";
	l1.sort();
	for(auto x:l1)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//
	l2.assign(5,10);
	l2.splice (l2.begin(), l1);
	 for(auto x:l2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//
	l2.unique();
	for(auto x:l2)
	{
		cout<<x<<" ";
	}
	cout<<endl;

return 0;

}