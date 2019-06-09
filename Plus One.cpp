class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        
        if(digits[n] < 9)
               digits[n]+= 1; 
        
        else
        {
           for(int i = n; i >= 0; i--)
            {
              if(digits[i] == 9)
              digits[i] = 0;
              else
              {
              digits[i]++;
              break;
              }
            }
            
            if(digits[0] == 0)
            digits.insert(digits.begin(),1);
        }
          
          return digits;
        
    }
};