#include<iostream>
#include<tm_sort>
#include<vector>
#include<array>
int main()
{
std::vector<int> v{95,65,12,6,0,10,1,123,1000,768};
algo::pigeon_hole_sort(v.begin(),v.end());
for(int i:v) std::cout<<i<<std::endl;
std::cout<<"------------"<<std::endl;
std::array<int,10> a={95,65,12,6,0,10,1,123,1000,768};
algo::pigeon_hole_sort(a.begin(),a.end());
for(const int i:a) std::cout<<i<<std::endl;
return 0;
}
