class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
        }
        for(int j=nums.size()-1;j>1;j--){
            if(nums[j]<ans-nums[j]){
                return ans;
            }
            else{
                ans=ans-nums[j];
            }
        } 
        return -1;    
    }
};
