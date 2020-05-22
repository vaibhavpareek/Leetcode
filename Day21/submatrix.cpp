// Solutuion:
// Technique : Naive Approach
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
            int c = 0;
        
        int m  = matrix.size();
        int n  = matrix[0].size();
        
        for (int i = 0; i < m; i ++){
            for (int j = 0; j < n; j ++){
                if (matrix[i][j] == 1){
                    c++;
                } 
            }
        }
        
        
        while (m > 1 && n > 1){
            for (int i = 0; i < m-1; i ++){
                for (int j = 0; j < n-1; j ++){
                    if (  matrix[i][j]     == 0 
                       || matrix[i+1][j]   == 0
                       || matrix[i][j+1]   == 0
                       || matrix[i+1][j+1] == 0)
                    {
                        matrix[i][j] = 0;
                    }  else {
                        c++;
                    }
                }
            }
            m --;
            n --;
        }
        return c; 
        
    
    }
};