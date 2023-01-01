class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int num= *max_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(num < (2*nums[i]) && nums[i]!=num) return -1;
            if(nums[i]==num) ans=i;
        }
        return ans;
    }
};
