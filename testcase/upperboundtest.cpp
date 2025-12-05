#include<iostream>
#include<vector>
#include<tm_algorithm>
#include<forward_list>
using namespace std;

int compare(int left,int right)
{
return left<right;
}

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
auto k=algo::upper_bound(v.begin(),v.end(),30,compare);
if(k!=v.end()) cout<<distance(v.begin(),k)<<endl;
auto g=algo::upper_bound(v.begin(),v.end(),60,compare);
if(g!=v.end()) cout<<distance(v.begin(),g)<<endl;
auto h=algo::upper_bound(v.begin(),v.end(),100,compare);
if(h!=v.end()) cout<<distance(v.begin(),h)<<endl;

vector<int> a={10,20,30,30,30,40,50,60,70,80};
auto b=algo::upper_bound(a.begin(),a.end(),30,compare);
if(b!=a.end()) cout<<b-a.begin()<<endl;
auto c=algo::upper_bound(a.begin(),a.end(),60,compare);
if(c!=a.end()) cout<<c-a.begin()<<endl;
auto d=algo::upper_bound(a.begin(),a.end(),100,compare);
if(d!=a.end()) cout<<d-a.begin()<<endl;
return 0;
}
