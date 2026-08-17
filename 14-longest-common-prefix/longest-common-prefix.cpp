class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int len=strs.size()-1;
        string last=strs[len];
        int minLen=min(first.size(),last.size());
        string ans="";
        for(int i=0;i<minLen;i++){
            if(first[i]==last[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};