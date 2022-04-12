#include<bits/stdc++.h>
using namespace std;
// link - https://leetcode.com/problems/coin-change/
int coinChangerec(vector<int>& coins, int amount) {
    if(amount <= 0)return 0;
    int tcoins=0;
    for(int i=0;i<coins.size();i++){
        int curr = coinChange(coins,amount-coins[i]);
        tcoins = min(tcoins,curr+1);
    }    
    return tcoins;
}
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,0);
    for(int i=1;i<=amount;i++){
        dp[i]=INT_MAX;
        for(auto c:coins){
            if(i-c>=0 && i-c!=INT_MAX){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }     
    return dp[amount]==INT_MAX?-1:dp[amount];
}
int main(){

    return 0;
}