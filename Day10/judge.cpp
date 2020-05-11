// Solution : 
// Technique : Create vector of size N then start pushing

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
    vector<int> numx(N+1,0);
    vector<int> numy(N+1,0);    
        for(int i=0;i<trust.size();i++)
        {
            numx[trust[i][0]]+=1;
            numy[trust[i][1]]+=1;
        }
        for(int i=1;i<N+1;i++)
        {
            if(numy[i]==N-1 && numx[i]==0)
            {
                return i;
            }
        }
        return -1;
        
        
    }
};