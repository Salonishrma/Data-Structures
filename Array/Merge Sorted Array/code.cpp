class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     for(int i=m;i<nums1.size();i++){
         for(int j=0;j<nums2.size();j++){
             if(nums1[i]==0){
                 nums1[i]=nums2[j];
                 i++;
             }
         }
     }
    sort(nums1.begin(),nums1.end());
    }
};
