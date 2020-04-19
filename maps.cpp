#include<iostream>
using namespace std;

#include<map>
#include<algorithm>

int main()
{
	//Initialise map from int to int
	map<int,int> a;
	a[1] = 100;
	a[2] = 10;
	a[3] = 200;
	a[1000001] = 1;

	//Map from char to int
	map<char,int> c;
	string s = "aditya a stl demo";

	for(char ch:s)
		c[ch]++;
	cout<<c['a']<<" "<<c['d']<<endl;

	//
return 0;
}	