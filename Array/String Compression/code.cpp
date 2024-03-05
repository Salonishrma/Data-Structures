class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int cnt=0;
        int n=chars.size()-1;
        if(chars.size()==1){
            return 1;
        }
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                cnt++; //cnt=1
            }
            else{
                s=s+chars[i-1];  //s=a
                if(cnt>=1){
                    s+=to_string(cnt+1); //s=a2
                    cnt=0;
                }
            }
        }
        if(chars[n]==chars[n-1]){
            s+=chars[n];
            s+=to_string(cnt+1);
        }
        else{
            s+=chars[n];
        }
        for(int i=0;i<s.size();i++){
            chars[i]=s[i];
        }
        return s.size();
    }
};
