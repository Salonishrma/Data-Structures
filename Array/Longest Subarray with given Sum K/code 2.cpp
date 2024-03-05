#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& a,long long k){
    int length=0;
    for(int i=0;i<a.size()-1;i++){
        long long sum=0;
        for(int j=i;j<a.size()-1;j++){
            sum=sum+a[j];
            if(sum==k){
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}

int main()
{
    vector<int>a={2,3,5,9,1};
    long long k=10;
    int len=getLongestSubarray(a,k);
    cout<<len<<endl;

    return 0;
}
