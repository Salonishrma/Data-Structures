class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(), candies.end());
        vector<bool>v1;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >=maxi){
                v1.push_back(true);
            }
            else{
                v1.push_back(false);
            }
        }
        return v1;
    }
};
