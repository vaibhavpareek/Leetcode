// Solution:
// Technique : Hash Map
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    map<int,int> max_len;
    int sum=0;
     int longest=0;
    map<int, int>::iterator it ; 
        for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
            nums[i]=-1;
        sum = sum + nums[i];
        if(sum!=0)
        {
            if(max_len.find(sum)!=max_len.end())
            {    
                it = max_len.find(sum);
                int temp = i - it-> second;
                if(longest < temp)
                    longest=temp;
            }
            else
                 max_len.insert({sum,i});
        }
        else
        { int te = 1+i;
            if(longest<te)
                longest=te;
       
        }
    }
        return longest;
        
        
    }
};