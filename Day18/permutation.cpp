// Solution:
// Technique: Modified Rabin Karp Algorithm
class Solution {
public:
     bool isequal(int p_count[26],int t_count[26])
    {
	for(int i=0;i<26;i++)
	{
		if(p_count[i]!=t_count[i])
		{
			return false;
		}
	}
	return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length())
            return false;
	    int s1_count[26]={0};
        int s2_count[26]={0};
        for(int k=0;k<s1.length();k++)
		{
			s1_count[s1[k]-'a']+=1;
            s2_count[s2[k]-'a']+=1;
		}
        
        for(int i=s1.length();i<s2.length();i++)
	    {               
		    if(isequal(s1_count,s2_count))
		    {
			    return true;
		    }
            s2_count[s2[i]-'a']++;
            s2_count[s2[i-s1.length()]-'a']--;    
	    }
        if(isequal(s1_count,s2_count))
            return true;        
    return false;        
    }
};