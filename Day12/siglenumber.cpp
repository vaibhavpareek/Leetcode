// Solution:
// Technique : Binary Search
class Solution {
public:
    int findSingle(vector<int>&nums,int s,int l)
    {
        int mid = (s+l)/2;
        if(s>l)
            return mid;
        if(l==s)
        {
            return mid;
        }
        if(mid%2==0)
        {
            if(nums[mid]==nums[mid+1])
            {
                return findSingle(nums,mid+2,l);
            }
            else
                return findSingle(nums,s,mid);
        }
        else
        {
            if(nums[mid]==nums[mid-1])
            {
                return findSingle(nums,mid+1,l);
            }
            else
            {
                return findSingle(nums,s,mid-1);
            }
        }
        return mid;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int index =  findSingle(nums,0,nums.size()-1);
        return nums[index];
    }
};