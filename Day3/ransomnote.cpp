// Solution : ransomNote 
// Technique : 26Letter Array(String Concept) 


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            
        int chararr[26]={0};
        for (int i=0;i<magazine.size();i++)
        {
            int val = int(magazine[i]) - int('a');
            chararr[val] = chararr[val]+1;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            int val=int(ransomNote[i]) - int('a');
            chararr[val] = chararr[val]-1;
        }
        for(int i=0;i<26;i++)
        {
            if(chararr[i]<0)
            {
                return false;
            }
        }
        return true;
    }
};