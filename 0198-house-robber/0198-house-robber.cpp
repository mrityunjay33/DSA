class Solution {
public:
    int helper(vector<int>& nums, int i,int n, vector<int>& dp){

    if(i >= n){
        return 0;
    }

    if(dp[i] != -1){
        return dp[i];
    }

    int m1 = nums[i];
    int m2 = helper(nums,i+1,n,dp);
    int m3 = nums[i] + helper(nums,i+2,n,dp);

    return dp[i] = (m1 > m2) ? (m1 > m3)? m1:m3 : (m2>m3)? m2:m3;
}

int rob(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> dp(n,-1);

    return helper(nums,0,n,dp);
}
};