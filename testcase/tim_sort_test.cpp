#include<iostream>
#include<tm_sort>
#include<vector>
#include<array>
int compare(int left,int right)
{
return left-right;
}
int main()
{
std::vector<int> v{95,65,-12,-6,0,10,1,123,1000,-768,34,234,5435,636,234,6090,9881,45524,24354,13218,3251,65431};
algo::tim_sort(v.begin(),v.end(),compare);
for(int i:v) std::cout<<i<<" ";
std::cout<<std::endl;
std::cout<<"-----------------"<<std::endl;
std::array<int,23> a={95,65,-12,-6,0,10,1,123,1000,-768,-8989,454,-898,54634,32684,3216,13232,1100,5456,11210,34534,1356432,3524};
algo::tim_sort(a.begin(),a.end(),compare);
for(const int i:a) std::cout<<i<<" ";
std::cout<<std::endl;
return 0;
}
