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
std::vector<int> v{95,65,-12,-6,0,10,1,123,1000,-768};
algo::heap_sort(v.begin(),v.end(),0,9,compare);
for(int i:v) std::cout<<i<<std::endl;
std::array<int,10> a={95,65,-12,-6,0,10,1,123,1000,-768};
algo::heap_sort(a.begin(),a.end(),2,7,compare);
for(const int i:a) std::cout<<i<<std::endl;
std::vector<int> v1{95,65,-12,-6,0,10,1,123,1000,-768};
algo::heap_sort(v1.begin(),v1.end(),0,0,compare);
for(int i:v1) std::cout<<i<<std::endl;
std::vector<int> v2{95,65,-12,-6,0,10,1,123,1000,-768};
algo::heap_sort(v2.begin(),v2.end(),20,100,compare);
for(int i:v2) std::cout<<i<<std::endl;
return 0;
}
