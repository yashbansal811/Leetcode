class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;        
        int m1[256]={0};
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m1[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(m1[i]!=0){
                return false;
            }
        }
        return true;
    }
};