#include<iostream>
#include<vector>
#include<tm_algorithm>
using namespace std;

int main()
{
vector<int> v{10,20};
vector<int>::iterator iter1=v.begin();
vector<int>::iterator iter2=iter1+1;
cout<<*iter1<<","<<*iter2<<endl;
algo::iter_swap(iter1,iter2);
cout<<*iter1<<","<<*iter2<<endl;
return 0;
}

