//next permutation

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  s="ABC";
  do{
      cout<<s<<endl;
  }
  while(next_permutation(s.begin(),s.end()));
    return 0;
}
