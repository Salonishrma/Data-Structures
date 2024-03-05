#include<iostream>
#include<map>
using namespace std;
int main(){
   map<int,string>m1;
   m1[1]="saloni";
   m1[2]="sharma";
   m1[3]="himachal";
   m1.insert({5,"hello"});
   cout<<"before erase "<<endl;
  for(auto i:m1){
      cout<<i.first<<" "<<i.second<<endl;
  }
  m1.erase(2);
  cout<<"after erase "<<endl;
  for(auto i:m1){
      cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl;
  auto it=m1.find(5);
  for(auto i=it;i!=m1.end();i++){
      cout<<(*i).first<<endl;
  }
    return 0;
}
