#include <bits/stdc++.h>
using namespace std;
int n;
int k;
int main(){
    freopen("BAI3.inp","r",stdin);
    freopen("BAI3.out","w",stdout);
    cin >>n;
    cin >>k;
    int A[n];
    for(long long  i=0;i<n;i++) cin >>A[i];
    int dp[k];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=k;j>=A[i];--j){
            if(dp[j-A[i]]==1) {
                dp[j]=1;
            }
        }
    }
    if (dp[k]==1) cout <<"True";
    else cout <<"False";
}