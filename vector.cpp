//VECTORS

#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>

int f(int x,int y)
{
	x>y;
}

int main()
{

vector<int > v;
v = {2,4,25,19,5};
cout<<v[2];

//sort O(nlogn)
sort(v.begin(),v.end());

//binary search O(logn)
bool present = binary_search(v.begin(),v.end(),25);
cout<<present<<endl;
present = binary_search(v.begin(),v.end(),100);
cout<<present<<endl;

//push element
v.push_back(100);
v.push_back(100);
v.push_back(100);
v.push_back(123);

//iterator
vector<int> :: iterator it = lower_bound(v.begin(),v.end(),100);// >=
vector<int> :: iterator it2 = upper_bound(v.begin(),v.end(),100); // >
cout<<*it<<""<<*it2;
cout<< it2-it <<endl;

auto i = lower_bound(v.begin(),v.end(),25);
cout<<*i<<endl;

//sort using custom function

sort(v.begin(),v.end(),f);

for(int x:v)
	cout<<x<<" ";
cout<<endl;
//iterator by reference

for(int &x:v)
x++;
for(int x:v)
cout<<x<<" ";
return 0;
}