#include<iostream>
#include<vector>
#include<tm_algorithm>
using namespace std;
using namespace algo;

bool my_function(int left,int right)
{
return left<right;
}

int main()
{
using intvector=vector<int>;
intvector v;
v.push_back(95);
v.push_back(65);
v.push_back(-12);
v.push_back(-6);
v.push_back(0);
v.push_back(10);
v.push_back(1);
v.push_back(1000);
v.push_back(123);
v.push_back(-786);
sort(v.begin(),v.end());
for(int i:v) cout<<i<<endl;
cout<<"-------"<<endl;
intvector g;
g.push_back(95);
g.push_back(65);
g.push_back(-12);
g.push_back(-6);
g.push_back(0);
g.push_back(10);
g.push_back(1);
g.push_back(1000);
g.push_back(123);
g.push_back(-786);
sort(g.begin(),g.end(),my_function);
for(int i:g) cout<<i<<endl;
return 0;
}
