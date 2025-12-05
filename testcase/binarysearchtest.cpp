#include<iostream>
#include<vector>
#include<tm_algorithm>
#include<forward_list>
#include<algorithm>
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
auto k=algo::binary_search(v.begin(),v.end(),30,compare);
cout<<"30: "<<k<<endl;
auto g=algo::binary_search(v.begin(),v.end(),60,compare);
cout<<"60: "<<g<<endl;
auto h=algo::binary_search(v.begin(),v.end(),100,compare);
cout<<"100: "<<h<<endl;
cout<<"------"<<endl;
vector<int> a={10,20,30,30,30,40,50,60,70,80};
auto b=algo::binary_search(a.begin(),a.end(),30,compare);
cout<<"30: "<<b<<endl;
auto c=algo::binary_search(a.begin(),a.end(),60,compare);
cout<<"60: "<<c<<endl;
auto d=algo::binary_search(a.begin(),a.end(),100,compare);
cout<<"100: "<<d<<endl;
return 0;
}
