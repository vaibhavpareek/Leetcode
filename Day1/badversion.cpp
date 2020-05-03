// SOlution : 
// Tehnique : Binary Search Algorithm

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int first=1;
        long long int last=n;
        
        while(true)
        {
            long long int mid = (first+last)/2;
            if(first==last)
            {
                return mid;
            }
            if(isBadVersion(mid))
            {
                last = mid;
            }
            else
            {
                first = mid+1;
            }    
        }
        
        
    }
};