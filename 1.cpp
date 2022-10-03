#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int dp[1000001];

int fun(int n) {
    if(n==0) {
        return 1;
    }
    if(dp[n] != -1) return dp[n];
    int ans = 0;
    for(int i = 1; i<=6; i++) {
        if(n>=i) dp[n] = ans = (ans + fun(n-i))%1000000007;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fun(n)<<endl;
    return 0;
}