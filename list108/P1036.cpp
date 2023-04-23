#include<bits/stdc++.h>
using namespace std;
           //val order
int vis[25],num[25][2],sum,n,k,cnt,now;
int ans[25];

bool isprime(int x){
    if(x <= 1) return 0;
    for(int i = 2; i <= sqrt(x); i++) if(x % i == 0) return 0;
    return 1;
}

void setval(int x,int y,int k){
    vis[y] = k;
    ans[x] = num[y][0];
}
void dfs(int step){
    if(step > k){
        for(int t : ans) sum += t;
        //cout << sum << endl;
        if(isprime(sum)) cnt++;
        sum = 0;
        return;
    }
    if(num[step-1][1] == n && step != n) return;
    for(int j = now + 1; j <= n; j++){
        if(vis[j]) continue;
        setval(step,j,1);
        now = j;
        dfs(step+1);
        setval(step,j,0);
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> num[i][0];
        num[i][1] = i;
    }
    dfs(1);
    cout << cnt;
    return 0;
}