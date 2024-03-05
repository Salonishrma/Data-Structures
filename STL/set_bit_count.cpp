//count number of set bits 
// means if 7 in binary is written as 111 so number of set bit is 3
// if 8 in binary is 1000 so number of set bit is 1
// if 10 in binary is 1010 so number of set bits is 2

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int ans =__builtin_popcount(n);
  cout<<ans;
    return 0;
}
