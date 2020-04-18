//SET
//In set we can add elements which are stored in sorted order,this is why we use sets over vectors

#include<iostream>
using namespace std;

#include<set>
#include<algorithm>

int main()
{
	//Initialise set
	set<int > s;

	//Insert new elements O(log n)
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);

	//Iterate and print the elements(which are sorted)
	for(int x:s)
		cout<<x<< " ";

	//FIND 
	//-10 -1 1 2 
	auto it = s.find(-1);
	if(it == s.end())
		cout<<"NOT PRESENT";
	else cout<<*it<<endl;	

	auto it2 = s.upper_bound(-1);
	auto it3 = s.upper_bound(0);
	cout<< *it2 << *it3 <<endl;

	auto it4 = s.upper_bound(2);//Note this value doesnot exists.
	cout<<*it4;

	//Erase
	s.erase(-10);
	for(int x:s)
		cout<<x<< " ";


return 0;
}