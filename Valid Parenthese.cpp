class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('$');
        
        for(int i = 0 ;i < s.length(); i++){
        if(s.at(i) == '(') st.push('(');
        if(s.at(i) == '[') st.push('[');
        if(s.at(i) == '{') st.push('{');
          
          if(s.at(i) == ')') 
           {
               if(st.top() == '(')
               st.pop();
               else return 0;
           }
          if(s.at(i) == ']') 
           {
               if(st.top() == '[')
               st.pop();
               else return 0;
           } 
          if(s.at(i) == '}') 
           {
               if(st.top() == '{')
               st.pop();
               else return 0;
           }
        }
        if(st.top() == '$')
        return 1;
    }
};