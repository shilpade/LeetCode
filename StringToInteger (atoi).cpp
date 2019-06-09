class Solution {
public:
    int myAtoi(string str) {
        if(str == "")
        return 0;
        stringstream ss(str);   //or ss>>str;
        int integer = 0;
        
        ss>>integer;
        return integer;
    }
};