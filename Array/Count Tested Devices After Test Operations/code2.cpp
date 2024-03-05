class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int cnt=0;
        for(int i=0;i<b.size();i++){
            if(b[i]!=0){
                cnt++;
               for(int j=i+1;j<b.size();j++){
                   if(b[j]!=0){
                       b[j]--;
                   }
               }
            }
        }
        return cnt;
    }
};
