#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v1;
    for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    //v1.push_back({x,y});
    v1.push_back(make_pair(x,y));
    }
    cout<<"pairs are "<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i].first<<" "<<v1[i].second<<" "<<endl;
    }
    
    return 0;
}
