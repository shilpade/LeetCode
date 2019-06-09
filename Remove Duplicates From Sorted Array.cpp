class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec;
        //O(n) solution
        
        
        int pos = 0;
        for(int i = 0; i < nums.size(); i++)
        {
           if( i == 0 || nums[i] != nums[pos-1])
           {
           nums[pos] = nums[i];
           pos++;
           }
          
        }
        return pos;
    }
};