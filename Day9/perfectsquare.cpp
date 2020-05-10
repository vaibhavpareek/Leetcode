// Solution:
// Technique : Binary Search Algorithm(Here we will also get the number)

class Solution {
public:
    int checksquare(long int num,long int start,long int last)
{
	long int mid = (start+last)/2;
	if(start>last)
	{
		return -1;
		}
	
	if(mid*mid == num)
	{
		return mid;
	}

	else if(mid*mid > num)
	{
		 return checksquare(num ,start,mid-1 );
	}
	else
	{
		 return checksquare(num,mid+1,last);
	}
	

}
    bool isPerfectSquare(long int num) {
     if(checksquare(num,1,num)==-1)
     {
         return false;
     }
        else
            return true;
         
        
    }
};