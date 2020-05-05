// sOLUTION:
// Technique : Convert to binary then multiply (COmplexity : O(num))

class Solution {
public:
    int findComplement(int num) {
       int value[32];
        int i=0;
        while(num>0)
        {
            int rem = num%2;
            if(rem==1)
            {
              value[i]=0;   
            }
            else
            {
                value[i]=1;
            }
            i++;
            num = num / 2;
        }
        int sum=0;
        for(int j=i-1;j>=0;j--)
        {
            sum = sum + pow(2,i-1)*value[j];
            i--;
        }
        return sum;
    }
};