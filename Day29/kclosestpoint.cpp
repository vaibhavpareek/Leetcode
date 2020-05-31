// Solution:
// Technique: Map and Sorting
class Solution {
public:
    float euclid_distance(vector<int>point_a)
    {
        return sqrt((point_a[0]*point_a[0])+(point_a[1]*point_a[1]));
    }
    static bool sortByVal(const pair<int,float> &a, const pair<int,float> &b) 
    { 
        return (a.second < b.second); 
    } 
    pair<int,float> make_pair(int a , float b)
    {
        return pair<int,float>(a,b);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> res;
        map<int,float> values;
        for(int i=0;i<points.size();i++)
        {
                values.insert({i,euclid_distance(points[i])});
        }
        vector<pair<int,float>> vec;
        for(auto it: values)
        {
            vec.push_back(make_pair(it.first,it.second));
        }
        
         sort(vec.begin(),vec.end(),sortByVal);
        int count=0;
        for(auto it: vec)
        {
            if(count==K)
            {
                break;
            }
            res.push_back(points[it.first]);
            count++;
        }
        
        
        return res;
        
    }
};