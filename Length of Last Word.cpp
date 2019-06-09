class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.length();
          while(s[n-1] == ' ' && n > 0)
          n--;
          
           while(s[n-1] != ' ' && n > 0)
           {
               count++;
               n--;
           }
           
          
        return count;
    }
};