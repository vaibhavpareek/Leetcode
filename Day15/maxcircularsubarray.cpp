// Solution
// Technique : Modified Kadane ALgo
class Solution {
public:
    int kadane(vector<int>&A)
{
	int max_end=INT_MIN;
	int max_so_far=0;
	int s=0,i,end;
	int start;
	for(int i=0;i<A.size();i++)
	{	
		max_so_far+=A[i];
		if(max_so_far>max_end)
		{
			max_end=max_so_far;
			start=s;
			end=i;
		}
		if(max_so_far<0)
		{
			s=i+1;
			max_so_far=0;
		}
	}
	return max_end;
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
    int maxSubarraySumCircular(vector<int>& A) {
        int kadsum = kadane(A);
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
    	sum=sum+A[i];
    	A[i]=-A[i];
    }
    int negsum=kadane(A);
    if(abs(negsum)==abs(sum))
        return kadsum;
    return max(kadsum,negsum+sum);    
    }
};