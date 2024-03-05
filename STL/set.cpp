#include<iostream>
#include<set>
using namespace std;
int main(){
   set<int>s1;
   s1.insert(9);
   s1.insert(0);
   s1.insert(7);
   s1.insert(5);
   s1.insert(5);
   s1.insert(5);
   s1.insert(5);
   for(auto i:s1){
       cout<<i<<endl;
   }cout<<endl;
   set<int>::iterator it=s1.begin();
   it++;
   s1.erase(it);
   for(auto i:s1){
       cout<<i<<endl;
   }cout<<endl;
   cout<<"9 is present or not "<<s1.count(9)<<endl;
    return 0;
}
