// Solution :
// Technique : Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mid = nums.size()/2;
        int count =1;
        int maj_index=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[maj_index]==nums[i])
            {
                count++;
            }
            else
                count--;
            if(count==0)
            {
                count=1;
                maj_index=i;
            }
        }
        return nums[maj_index];
            
    }
};