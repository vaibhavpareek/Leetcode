// Solution : 
// Technique : flood fill algorithm
#include <bits/stdc++.h>
using namespace std;
void floodUtil(vector<vector<int>>&image ,int sr,int sc,int newColor,int prevColor)
    {
        if(sr<0 || sc < 0 || sr>=image.size() || sc>=image[0].size() )
        {
           return; 
        }
        if(image[sr][sc]!=prevColor)
        {
            return ;
        }
        if(image[sr][sc]==newColor)
        return;
        
        image[sr][sc]=newColor;
        floodUtil(image,sr-1,sc,newColor,prevColor);
        floodUtil(image,sr,sc-1,newColor,prevColor);
        floodUtil(image,sr+1,sc,newColor,prevColor);
        floodUtil(image,sr,sc+1,newColor,prevColor);
        
        return;
        }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         int prevColor = image[sr][sc];
        floodUtil(image,sr,sc,newColor,prevColor); 
        return image;   
    }
    int main()
    {
        vector<vector<int>> image;
        for(int i=0;i<3;i++)
        {
            vector<int>temp;
            int te;
            for (int j=0;j<3;j++)
            {
                cin>>te;
                temp.push_back(te);
            }
            image.push_back(temp);
        }
        image = floodFill(image,1,1,2);
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                cout<<image[i][j]<<" ";
            }
            cout<<endl;
        }
    }