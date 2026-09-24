class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxps=0;
        int count=0;
        for(auto x:s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
                count++;
                continue;
            }
            else if((x==')' && st.top()=='(') || (x=='}' && st.top()=='{') || (x==']' && st.top()=='[')){
                st.pop();
                maxps=max(maxps,count);
                count--;
            }
        }
        return maxps;
    }
};