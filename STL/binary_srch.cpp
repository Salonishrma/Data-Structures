//binary search

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int key;
  cout<<"key is ";
  cin>>key;
  if(binary_search(a,a+n,key)){ // a is starting index a+n is ending and key the element which we have to search
      cout<<"present"<<endl;
  }
  else{
      cout<<"Absent"<<endl;
  }
    return 0;
}
