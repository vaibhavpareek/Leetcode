// SOlution:
// Technique: Keep on going back till you get the bigger value.
class StockSpanner {
public:
    vector<int>stock;
    StockSpanner() {
        
    }
    
    int next(int price) {
        stock.push_back(price);
        int count=1;
        for(int i=stock.size()-2;i>=0;i--)
        {
            if(stock[i]<=price)
                count++;
            else
                break;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */