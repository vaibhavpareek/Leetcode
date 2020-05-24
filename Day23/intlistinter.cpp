#include <bits/stdc++.h>
using namespace std;
vector<int> diffint(vector<int> v1,vector<int> v2)
{
	vector<int> v;
	int min,max;
	if(v1[0]>v2[0])
		min=v1[0];
	else
		min=v2[0];
	if(v1[1]>v2[1])
		max=v2[1];
	else
		max=v1[1];
	v.push_back(min);
	v.push_back(max);
	return v;
}
vector<vector<int>> interval(vector<vector<int>> &A,vector<vector<int>> &B)
{
	vector<vector<int>> C;	
	for (int i = 0; i < A.size(); ++i)
	{
		for (int j = 0; j < B.size(); ++j)
		{
			if(A[i][1]>=B[j][0] && B[j][1]>=A[i][0])
			C.push_back(diffint(A[i],B[j]));
		}
	}
	return C;
}
int main()
{
	vector<vector<int>> A={{0,2},{5,10},{13,23},{24,25}};
	vector<vector<int>> B= {{1,5},{8,12},{15,24},{25,26}};
	vector<vector<int>>C = interval(A,B);
	for(int i=0;i<C.size();i++)
	{
		for (int j = 0; j < C[0].size(); ++j)
		{
			cout<<C[i][j]<<" ";			
		}
		cout<<endl;
	}
}