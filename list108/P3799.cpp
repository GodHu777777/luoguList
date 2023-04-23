#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int n,vis[N],a[N],ans[6],mark,now = 1,flagx,flag[N];


void dfs(int step)
{
    if(step == 2) flagx = 0;
    if(flagx) return;
    if(step > 4)
    {
        if(ans[1] + ans[2] == ans[4])
        {
            mark++;
            mark %= (int)1e9 + 7;
        }
        else flagx = 1;
        return;
    }
    if(step == 3)
    {
        for(int i = now; i <= n; i++)
        {
            if(!flag[i]) continue;
            if(flag[i] && ans[1] + ans[2] == a[i]) flagx = 1;
            else continue;
            if(flagx && !flag[i]) dfs(2);
            ans[3] = ans[4] = a[i];
            dfs(5);
        }
    }
    for(int i = now; i <= n; i++)
    {
        if(vis[i]) continue;
        if(n - i + step < 4) break;
        now = i+1;
        vis[i] = 1;
        ans[step] = a[i];
        dfs(step+1);
        vis[i] = 0;
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for(int i = 1; i <= n; i++)
        if(a[i] == a[i+1]) flag[i] = 1;
    dfs(1);
    cout << mark;
    return 0;
}