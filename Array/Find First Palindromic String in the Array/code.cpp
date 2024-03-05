class Solution {
public:
    string firstPalindrome(vector<string>& words) {
    for(auto i:words){
        string st=i;
        reverse(i.begin(),i.end());
        if(i==st){
            return st;
        }
    }
    return "";
    }
};
