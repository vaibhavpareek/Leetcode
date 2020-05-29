// Solution:
// Technique : Set Bit in previous odd even bit.
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>res;
        res.push_back(0);
        if(num==0)
            return res;
        res.push_back(1);
        for(int i=2;i<=num;i++)
        {
            if(i%2==0)
            {
                res.push_back(res[i>>1]);
            }
            else
            {
                res.push_back(res[i>>1]+1);
            }
        }
        return res;
    }
};