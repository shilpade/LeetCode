class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
         vector<int>vec1 = {0};
        vec1=nums;
        sort(vec1.begin(),vec1.end());
        
        int l = 0, h = vec1.size()-1; 
       
        
        int sum;
        while(l<h){
            sum = vec1[l]+ vec1[h];
        if(sum > target)
        h--;
        
        else if(sum < target)
        l++;
    
        else
        break;
        }
        
        for(int i=0 ; i< nums.size(); i++){
        if(nums[i]==vec1[l])
        vec.push_back(i+1);
        else if(nums[i]==vec1[h])
        vec.push_back(i+1);
        }
        if(vec[0]>vec[1])
        swap(vec[0],vec[1]);
        
        return vec;
              
        }
        
};