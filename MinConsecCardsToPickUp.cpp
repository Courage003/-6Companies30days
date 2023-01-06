class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        int flag=0;
        int res=INT_MAX;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.count(cards[i])){
            res=min(res,i-m[cards[i]]+1);
            flag=1;
            }
               m[cards[i]]=i;
        }
     
        if(flag==0) return -1;
        return res;
        
    }
};
