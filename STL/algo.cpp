#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int>v1;
   v1.push_back(1);
   v1.push_back(3);
   v1.push_back(6);
   v1.push_back(7);
  cout<<"find 7-> "<<binary_search(v1.begin(),v1.end(),7)<<endl;
  cout<<"lower bound-> "<<lower_bound(v1.begin(),v1.end(),6)-v1.begin()<<endl;
   cout<<"upper bound-> "<<upper_bound(v1.begin(),v1.end(),4)-v1.begin()<<endl;
  int a=3;
  int b=8;
  cout<<"max elemnt is "<<max(a,b)<<endl;
  cout<<"min elemnt is "<<min(a,b)<<endl;
  swap(a,b);
  cout<<"a is eql to= "<<a<<" b is eql to= "<<b <<endl;
  string s="India";
  reverse(s.begin(),s.end());
  cout<<s<<endl;
    return 0;
}
