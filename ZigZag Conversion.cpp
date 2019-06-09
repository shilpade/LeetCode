class Solution {
public:
    string convert(string s, int numRows) {
        string op = "";
        if(numRows == 1)
        return s;
        //use at() to access string element
        
        for(int i = 0 ;i < numRows; i++)
        {
            int step1 = (numRows-i-1)*2;
            int step2 = i*2;
            int index = i;
        //add first letter to the output op
            if(index < s.length())
            op = op + s.at(index);
            
            while(1){
                index +=step1;
                if(index >=s.length())
                break;
                if(step1){
                     op = op + s.at(index);
                }
                
                 
                index +=step2;
                if(index >= s.length())
                break;
                if(step2){
                    op = op + s.at(index);
                }
                  
            }
            
            
        }
       return op;
    }
};