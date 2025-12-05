#include<forward_list>
#include<iostream>
#include<tm_algorithm>
using namespace std;
int main()
{
using intforwardlist=forward_list<int>;
intforwardlist g;
forward_list<int>::iterator itr=g.before_begin();
itr=g.insert_after(itr,10);
itr=g.insert_after(itr,20);
itr=g.insert_after(itr,30);
itr=g.insert_after(itr,40);
itr=g.insert_after(itr,50);
for(int i:g) cout<<i<<endl;
itr--;
cout<<"---------"<<endl;
algo::reverse(g.begin(),g.end());
for(int i:g) cout<<i<<endl;
return 0;
}
