class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>v;
        int n=ops.size();
        for(int i=0;i<n;i++){
            if(ops[i]=="C"){
                v.pop();
            }
            
            else if(ops[i]=="D"){
                int ans=v.top();
                ans*=2;
                v.push(ans);
            }
            
            else if(ops[i]=="+"){
                int first=v.top();
                v.pop();
                int second=v.top();
                v.pop();
                 v.push(second);
                 v.push(first);
                 v.push(first+second);
            }
            
            else{
               int number=stoi(ops[i]);
                v.push(number);
            }
        }
        int sum=0;
        while(!v.empty()){
            int top=v.top();
            sum=sum+top;
             v.pop();
        }
        
        return sum;
    }
};