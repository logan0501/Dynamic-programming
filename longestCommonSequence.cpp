#include<bits/stdc++.h>
using namespace std;

// Link - https://leetcode.com/problems/longest-common-subsequence/
int rec1(string s1,string s2,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(s1[m-1]==s2[n-1]){
        return 1+rec1(s1,s2,m-1,n-1);
    }
    return max(rec1(s1,s2,m-1,n),rec1(s1,s2,m,n-1));

}

int rec2(string s1,string s2,int m,int n,int memo[][1001]){
    if(m==0 || n==0)return 0;
    if(memo[m][n]!=-1)return memo[m][n];
    if(s1[m-1]==s2[n-1]){
        return memo[m][n]=1+rec2(s1,s2,m-1,n-1,memo);
    }else{
        return memo[m][n]=max(rec2(s1,s2,m-1,n,memo),rec2(s1,s2,m,n-1,memo));
    }
}
int longestCommonSubsequence(string text1, string text2) {
   int m=text1.size(),n=text2.size();
   int dp[m+1][n+1];
   for(int i=0;i<m+1;i++){
       dp[i][0]=0;
   }
    for(int i=0;i<n+1;i++){
       dp[0][i]=0;
   }
   for(int i=1;i<m+1;i++){
       for(int j=1;j<n+1;j++){
           if(text1[i-1]==text2[j-1]){
               dp[i][j]=1+dp[i-1][j-1];
           }else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
   }
   return dp[m][n];
}
int main(){

    return 0;
}