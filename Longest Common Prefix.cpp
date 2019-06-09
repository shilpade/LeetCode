class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
         
        for(int j = 0; j < strs[0].length(); j++)
          for(int i = 0; i < strs.size(); i++)
             if ( !(j < strs[i].length() && strs[0].at(j)==strs[i].at(j)) )
                    return strs[0].substr(0, j);
        return strs[0];           
    }
};