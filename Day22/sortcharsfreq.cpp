// Solution:
// Technique: Using HashMap
class Solution {
public:
   static bool cmp(pair<int,char> a,pair<int,char> b)
    {
        return a.first < b.first;
    }
    string frequencySort(string s) {
        vector<pair<int,char>> temp;
        map<char,int> freq;
        for(int i=0;i<s.size();i++)
        {
         freq[s[i]]++;
        }
        map<char,int>::iterator i=freq.begin();
        while(i != freq.end())
        {
            temp.push_back({i->second,i->first});
            i++;
        }
        sort(temp.rbegin(),temp.rend(),cmp);
        string res;
        for(int i=0;i<temp.size();i++)
        {
            int tem=temp[i].first;
            while(tem--)
            {
                res+=temp[i].second;
            }
        }
        return res;
        
        
    }
};