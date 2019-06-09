class Solution {
public:
    int romanToInt(string s) {
        map<char,int> myMap = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int op = myMap[s.back()];  //access the last character of string
        
        for(int i = 1; i < s.length(); i++)
        {
        if(myMap[s.at(i-1)] < myMap[s.at(i)])
          op -= myMap[s.at(i-1)];
        if(myMap[s.at(i-1)] >= myMap[s.at(i)])
          op += myMap[s.at(i-1)];
        } 
          return op;
    }
};