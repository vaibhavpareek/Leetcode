// Solution:
// Technique : 26Size character array
class Solution {
public:
    int firstUniqChar(string s) {
        int charvalue[26]={0};
        int charindex[26]={0};
        for(int i=0;i<s.size();i++)
        {
            if(charvalue[int(s[i])-int('a')]==0)
            {
                charindex[int(s[i])-int('a')] = i;
            }
            charvalue[int(s[i])-int('a')] =  charvalue[int(s[i])-int('a')] + 1;
            
        }
        for(int i=0;i<s.size();i++)
        {
            if(charvalue[int(s[i])-int('a')]==1)
            {
                return charindex[int(s[i])-int('a')];
            }
        }
        return -1;
        
    }
};