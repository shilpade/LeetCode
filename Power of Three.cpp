class Solution {
public:
    bool isPowerOfThree(int n) {
        int a = 0;
        
        if(n == 0)
        return 0;
        
        if(n == 1)
        return 1;
        
        if((n%3) == 0)
          a = n/3;
          
        if(a == 1)
        return 1;
        else
        isPowerOfThree(a);
           
    }
};