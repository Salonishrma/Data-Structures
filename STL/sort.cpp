
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,2,1,7,8,9,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
