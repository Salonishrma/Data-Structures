class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       unordered_map<int,int>m1;
        for(auto it:arr){
            m1[it]++;
        }
        vector<int>v1;
        for(auto i:m1){
            v1.push_back(i.second);
        }
        sort(v1.begin(),v1.end());
        int cnt=0;
        for(int i=0;i<v1.size();i++){
            if(k>=v1[i]){
                k-=v1[i];
                cnt++;
            }
            else{
                break;
            }
        }
    return v1.size()-cnt;
    }
};
