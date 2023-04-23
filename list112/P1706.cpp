#include<bits/stdc++.h>
using namespace std;
bool vis[15];
int n,ans[15];
void setval(int x,int y,int k){
    ans[x] = y;
    vis[y] = k;
}
void dfs(int step){
    if(step > n){
        for(int i = 1; i <= n; i++) printf("%5d",ans[i]);
        cout << endl;
        return;
    }
    for(int j = 1; j <= n; j++){
        if(vis[j]) continue;
        setval(step,j,1);
        dfs(step+1);
        setval(step,j,0);
    }
}
int main()
{
    cin >> n;
    dfs(1);
    return 0;
}