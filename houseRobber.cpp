#include<bits/stdc++.h>
using namespace std;
// link - https://leetcode.com/problems/house-robber/
int rob(vector<int>& nums) {
    int n = nums.size();
    if(n==0)return 0;
    if(n==1)return nums[0];
    if(n==2)return max(nums[1],nums[0]);
    int dp[n];
    dp[0]=nums[0];
    dp[1]=max(nums[1],nums[0]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
    }
    return dp[n-1];
}
int main(){
    return 0;
}