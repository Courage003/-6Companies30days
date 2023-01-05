class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i+1<nums.size() && nums[i]<=nums[i+1]) i++;
        while(j-1>=0 && nums[j-1]<=nums[j]) j--;

        if(i==nums.size()-1) return 0;

        int w=INT_MAX;
        int x=INT_MIN;
        for(int a=i;a<=j;a++){
            w=min(w,nums[a]);
            x=max(x,nums[a]);
        }

        while(i-1>=0 && nums[i-1]>w) i--;
        while(j+1<=nums.size()-1 && nums[j+1]<x) j++;

        return j-i+1;
        
    }
};
