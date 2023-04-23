#include<bits/stdc++.h>
using namespace std;
int main()
{int sum,t[70],dp[30][2000],tsum[6];

    int n[6];
    for(int i = 1; i <= 4; i++){
        cin >> n[i];
    }
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= n[i]; j++){
            cin >> t[j];
            tsum[i] += t[j];
        }
    }
    for(int k = 1; k <= 4; k++){
        
        for(int i = 1; i <= n[k]; i++){
            for(int j = 1; j <= tsum[k]/2; j++){
                dp[i][j] = max(dp[i][j-1],dp[i][j-t[i]]+t[i]);
            }
        }
        sum += tsum[k] - dp[n[k]][tsum[k]/2];
        memset(dp,0,sizeof(dp));

    }
    cout << sum << endl;
    return 0;
}