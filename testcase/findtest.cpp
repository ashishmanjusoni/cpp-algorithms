#include<vector>
#include<forward_list>
#include<iostream>
#include<tm_algorithm>
using namespace std;

int main()
{
vector<int> g={10,20,30,5,78,65,5};
auto k=algo::find(g.begin(),g.end(),30);
if(k==g.end()) cout<<"Not found"<<endl;
else cout<<"Found : "<<*k<<" at index: "<<k-g.begin()<<endl;

forward_list<int> v={10,20,30,40,50,60};
auto h=algo::find(v.begin(),v.end(),30);
if(h==v.end()) cout<<"Not found"<<endl;
else cout<<"Found : "<<*h<<endl;
return 0;
}

