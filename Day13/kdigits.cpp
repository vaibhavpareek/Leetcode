Solution
Technique : If i+1 is less then i remove the i number ,till it reaches the k value in deletion
class Solution {
public:
    string removeZero(string str) 
{ 
    int i = 0; 
    while (str[i] == '0') 
       i++; 
  
    str.erase(0, i); 
  
    return str; 
} 
    string removeKdigits(string num, int k) {
    if (num.length() == k)
            return "0";

        
        for (int j = 0; j < k; j++) {
            int i = 0;
            while (i < num.length() - 1 && num[i] <= num[i + 1]) {
                i++;
            }
            num.erase(i, 1);
        }

        while (num.length() > 1 && num[0] == '0')
            num.erase(0, 1);

        if (num.length() == 0) {
            return "0";
        }

        return num;
    }
};