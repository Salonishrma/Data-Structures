class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m1;
       for(int it:nums){
        m1[it]++;
       if(m1[it]>1){
        return it;
       }
       }
       return -1;
    }
};
