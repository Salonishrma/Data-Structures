#include<iostream>
#include<queue>
using namespace std;
int main(){
   priority_queue<int>maxi;
   priority_queue<int,vector<int>,greater<int>>mini;
   maxi.push(1);
   maxi.push(3);
   maxi.push(4);
   maxi.push(7);
   cout<<"size "<<maxi.size()<<endl;
   int n=maxi.size();
   for(int i=0;i<n;i++){
       cout<<maxi.top()<<endl;
       maxi.pop();
   }
   mini.push(90);
   mini.push(10);
   mini.push(60);
   mini.push(30);
   cout<<"size "<<mini.size()<<endl;
   int m=mini.size();
   for(int i=0;i<m;i++){
       cout<<mini.top()<<endl;
       mini.pop();
   }
    return 0;
}
