/*
Question: Sort the string as per their characters frequencies.
Characters allowed are only small and capital letters
*/
#include <bits/stdc++.h>
using namespace std;
bool isempty(int (&ar)[52])
    {
        for(int i=0;i<52;i++)
        {
            if(ar[i]!=0)
            {
                return false;
            }
        }
        return true;
    }
    int maxval(int (&ar)[52],int &index)
    {
         index=0;
        int temp=ar[index];
        for(int i=1;i<52;i++)
        {
            if(temp<ar[i])
            {
                temp=ar[i];
                index=i;
            }
        }
        return temp;
    }
    string frequencySort(string s) {
        
         int ar[52]={0};
        for(int i=0;i<s.length();i++)
        {
            if(int(s[i])>=65 && int(s[i])<=90)
            {
                ar[int(s[i]-'A')+26]+=1;
            }
            else
            {
            	 ar[s[i]-'a']+=1;
            }
        }
        string res;
        while(!isempty(ar))
        {
        	int index=0;
            int max_value=maxval(ar,index);
            ar[index]=0;
            string tr;
            if(index>=26)
            {
                string st(1,char(index-26+65));
            	tr=st;
            }
            else
            {
                string st(1,char(index+97));
            	tr=st;
            }
            for(int i=0;i<max_value;i++)
            {
                res.append(tr);
            }
        }
         return res;
    }

int main()
{
	string s;
	cout<<frequencySort("bbAa");
	return 0;
}