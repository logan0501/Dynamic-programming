#include<bits/stdc++.h>
using namespace std;

// link - https://leetcode.com/problems/min-cost-climbing-stairs/

int minCostClimbingStairsTD(vector<int>& cost,vector<int> &memo) {

}
int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
        for(int i=2;i<=n;i++){
            int j1 = dp[i-1]+cost[i-1];
            int j2 = dp[i-2]+cost[i-2];
            dp[i]=min(j1,j2);
        }
        return dp[n];
}
int main(){

    return 0;
}