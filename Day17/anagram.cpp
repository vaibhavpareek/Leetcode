// Solution:
// Technique:Modified KMP or Rabin Karp
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
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.length()<p.length())
            return res;
	    int p_count[26]={0};
        int t_count[26]={0};
        for(int k=0;k<p.length();k++)
		{
			p_count[p[k]-'a']+=1;
            t_count[s[k]-'a']+=1;
		}
        
        for(int i=p.length();i<s.length();i++)
	{               
		if(isequal(p_count,t_count))
		{
			res.push_back(i-p.length());
		}
        t_count[s[i]-'a']++;
        t_count[s[i-p.length()]-'a']--;    
	}
        if(isequal(p_count,t_count))
            res.push_back(s.length()-p.length());
	return res;
        
    }
};