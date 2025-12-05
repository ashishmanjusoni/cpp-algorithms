#include<iostream>
#include<vector>
#include<tm_algorithm>
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
cout<<"Min element: "<<*(algo::max_element(g.begin(),g.end()))<<endl;
return 0;
}
