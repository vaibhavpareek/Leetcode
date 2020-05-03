// Solution:
// Technique : BruteForce (String Matching)Naive Approach

class Solution {
public:
    int numJewelsInStones(string J, string S) {
   
        int count =0;
        for(int i=0;i<S.size();++i)
        {
             for(int it=0;it<J.size();++it)
            {
                if(S[i]==J[it])
                {
                    count++;
                }
            }
        }
        return count;
    }
};