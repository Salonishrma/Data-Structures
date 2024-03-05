//used in graphs 
//we have to make pair like {1,{5,6}}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,pair<int,int>>p1;
    p1.first=1;
    p1.second.first=5;
    p1.second.second=6;
    cout<<"{"<<p1.first<<",{"<<p1.second.first<<","<<p1.second.second<<"}"<<"}";
    

    return 0;
}
