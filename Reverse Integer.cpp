class Solution {
public:
    int reverse(int x) {
        long y = 0;
        long sign = (x < 0 ? (-1): 1);
        long temp = abs((long)x);
        if(temp < 10)
        return x;
        
        while(temp){
        y = y * 10 + temp % 10;
        temp /= 10;
        }
        return y > (long)INT_MAX ? 0 : sign * y;
        
    }
};