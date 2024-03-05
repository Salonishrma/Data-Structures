#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{ 
    vector<int>v1;
    v1.emplace_back(10);
    v1.emplace_back(20);
    v1.emplace_back(30);
    v1.emplace_back(40);
    v1.emplace_back(50);
    for(auto it=v1.begin();it!=v1.end();it++)
    cout<<" "<<*it;

    return 0;
}
