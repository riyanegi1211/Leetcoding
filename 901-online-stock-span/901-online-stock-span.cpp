class StockSpanner {
public:
    stack<pair<int,int>> s;
    int idx=0;
    int p=-1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans;
        while(s.size()>0 and s.top().first<=price) s.pop();
        if(s.size()==0){
            ans=idx-p;
        }
        else{
            ans=idx-s.top().second;
        }
        s.push({price,idx});
        idx++;
        return ans;
    }
};