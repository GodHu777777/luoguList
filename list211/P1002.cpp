#include<bits/stdc++.h>
using namespace std;
bool unacc[23][23];
long long dp[23][23];
int main()
{
    int n,m;
    cin >> n >> m;
    int x,y;
    cin >> x >> y;
    memset(unacc,0,sizeof(unacc));
    for(int i = -1; i <= 1; i+=2){
        for(int j = -1;j <= 1; j+=2){
            if(x+i>=0&&y+j*2>=0){
                unacc[x+i][y+j*2] = 1;
            }
            if(x+i*2>=0&&y+j>=0){
                unacc[x+i*2][y+j] = 1;
            }
        }
    }
    unacc[x][y] = 1;
    memset(dp,0,sizeof(dp));
    for(int i = 1; i <= n && !unacc[i][0]; i++)  dp[i][0] = 1;
    for(int j = 1; j <= n && !unacc[0][j]; j++)  dp[0][j] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!unacc[i][j]) dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    cout << dp[n][m];
    return 0;
}