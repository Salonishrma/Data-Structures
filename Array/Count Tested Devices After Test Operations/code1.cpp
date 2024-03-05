class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int res=0;
        for(int i=0;i<batteryPercentages.size();i++){
            
            batteryPercentages[i]-=res;
            if(batteryPercentages[i]>0){
                res++;
            }
        }
        return res;
    }
};
