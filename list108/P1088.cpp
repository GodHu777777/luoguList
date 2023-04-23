#include<bits/stdc++.h>
using namespace std;
int ans[10005],cnt,n,goal,vis[10005];
int tmp[10005],flagx;
bool flag;

void setval(int x,int y,int k){
    ans[x] = y;
    vis[y] = k;
}

void dfs(int step){
    if(flagx) return;
    if(step > n){
        // if(!flag){
        //     for(int i = 1; i <= n; i++){
        //         if(tmp[i] != ans[i]) break;
        //         if(i == n) flag = 1;
        //     }
        // }else{
        //     cnt++;
        //     if(cnt == goal) for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        // }
        cnt++;
    if(cnt == goal + 1){
        for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        flagx = 1;
    }
    //    cout << "cnt ---" <<cnt << endl;
    }
    if(step == n) flag = 1;
    if(ans[step-1] > tmp[step-1] || flag){
        flag = 1;
        for(int j = 1; j <= n; j++){
        if(vis[j]) continue;
        setval(step,j,1);
        dfs(step+1);
        setval(step,j,0);
        }
    }else{
        flag = 0;
        for(int j = tmp[step]; j <= n; j++){
            if(vis[j]) continue;
            setval(step,j,1);
            dfs(step+1);
            setval(step,j,0);
        }
    }
}

int main()
{
    cin >> n >> goal;  
    for(int i = 1; i <= n; i++) cin >> tmp[i];
    dfs(1);
    return 0;
}