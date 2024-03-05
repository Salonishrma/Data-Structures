int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    map<int,int>m1;
    m1[0]=1;
    int sum=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int remove=sum-k;
        cnt+=m1[remove];
        m1[sum]+=1;
    }
    return cnt;
}
