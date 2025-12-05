#include<iostream>
#include<vector>
#include<tm_algorithm>
#include<list>
using namespace std;

int main()
{
using intvector=vector<int>;
intvector g;
g.push_back(95);
g.push_back(65);
g.push_back(-12);
g.push_back(-6);
g.push_back(0);
cout<<"Min element: "<<*(algo::min_element(g.begin(),g.end()))<<endl;
using intlist=list<int>;
intlist k;
k.push_back(95);
k.push_back(65);
k.push_back(-12);
k.push_back(-6);
k.push_back(0);
cout<<"Min element: "<<*(algo::min_element(k.begin(),k.end()))<<endl;
return 0;
}
