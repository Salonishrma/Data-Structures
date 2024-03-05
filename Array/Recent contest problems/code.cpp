#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count1=0;
	    int count2=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=="START38"){
	            count1++;
	        }
	        else if(a[i]=="LTIME108"){
	            count2++;
	        }
	    }
	     cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
