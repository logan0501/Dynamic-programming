#include<bits/stdc++.h>
using namespace std;
int res=0;

// recursive solution

// int helper(int i,vector<int> freq){
//     if(i>=freq.size())return 0;
//     return max(helper(i+2,freq)+freq[i],helper(i+1,freq));
// }
// int deleteAndEarn(vector<int> nums) {
//      vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
//      for(auto &a:nums){freq[a]+=a;}
//      return helper(0,freq);  
// }


// Recursion with top down approach
// vector<int> dp;
// int helper(int i,vector<int> freq){
//     if(i>=freq.size())return 0;
//     if(dp[i]!=-1)return dp[i];
//     return dp[i]=max(helper(i+2,freq)+freq[i],helper(i+1,freq));
// }
// int deleteAndEarn(vector<int> nums) {
//      vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
//      for(auto &a:nums){freq[a]+=a;}
//      dp.resize(10001,-1);
//     return helper(0,freq);  
// }
vector<int> dp;
int deleteAndEarn(vector<int> nums) {
    vector<int> freq(*max_element(nums.begin(),nums.end())+1,0);
    for(auto &a:nums){freq[a]+=a;}
    dp.resize(10001,-1);
    if(freq.empty())return 0;
    if
}

int main(){
    vector<int> nums={2,2,3,3,3,4};
    deleteAndEarn(nums);
    return 0;
}