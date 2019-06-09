class NumArray {
  vector<int> vec = {0};     //private
public:

    NumArray(vector<int> &nums) {
    
     for (int number : nums)
            vec.push_back(vec.back() + number);
    }

    int sumRange(int i, int j) {
       
     return vec[j+1]-vec[i];  
    }
};


