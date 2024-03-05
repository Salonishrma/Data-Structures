//max element

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int maxi=0;
  maxi=*max_element(a,a+n); //where a is starting index and a+n is ending index
  cout<<maxi;
    return 0;
}
