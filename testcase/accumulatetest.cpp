#include<iostream>
#include<vector>
#include<tm_numeric>

using namespace std;
using namespace algo;

int main()
{
using intvector=vector<int>;
intvector g;
g.push_back(10);
g.push_back(20);
g.push_back(30);
g.push_back(40);
g.push_back(50);
int total=accumulate(g.begin(),g.end(),0);
intvector k;
k.push_back(60);
k.push_back(70);
k.push_back(80);
total=accumulate(k.begin(),k.end(),total);
cout<<"Total is : "<<total<<endl;
return 0;
}
