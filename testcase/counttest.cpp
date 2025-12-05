#include<iostream>
#include<vector>
#include<tm_algorithm>
#include<forward_list>
using namespace std;

int main()
{
forward_list<int> v;
forward_list<int>::iterator it=v.before_begin();
it=v.insert_after(it,10);
it=v.insert_after(it,20);
it=v.insert_after(it,30);
it=v.insert_after(it,30);
it=v.insert_after(it,30);
it=v.insert_after(it,40);
it=v.insert_after(it,50);
it=v.insert_after(it,60);
it=v.insert_after(it,70);
it=v.insert_after(it,80);
auto k=algo::count(v.begin(),v.end());
cout<<k<<endl;
vector<int> g={10,20,30};
auto h=algo::count(g.begin(),g.end());
cout<<h<<endl;
return 0;
}
