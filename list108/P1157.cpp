#include<bits/stdc++.h>
using namespace std;

int n,r,vis[25],now,ans[25];

void setval(int x,int y,int k){
    ans[x] = y;
    vis[x] = k;
}

void dfs(int step){
    if(step > r) {
        for(int t : ans) if(t != 0) cout << setw(3) << t;
        cout << endl;
        return;
    }
    if(now == n && step != r) return;
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
    cin >> n >> r;
    dfs(1);
    return 0;
}