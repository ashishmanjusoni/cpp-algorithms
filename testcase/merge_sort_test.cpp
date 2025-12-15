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
algo::merge_sort(v.begin(),v.end(),compare);
for(int i:v) std::cout<<i<<std::endl;
std::array<int,10> a={95,65,-12,-6,0,10,1,123,1000,-768};
algo::merge_sort(a.begin(),a.end(),compare);
for(const int i:a) std::cout<<i<<std::endl;
return 0;
}
