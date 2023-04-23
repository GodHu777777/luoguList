#include<bits/stdc++.h>
using namespace std;

#define maxn 20
int a[maxn][maxn];

int main()
{
    memset(a,0,sizeof(a));
    int n;
    cin >> n;
    int tot,x,y;
    a[x=0][y=0] = tot = 1;
    while(tot < n*n){
        while(y+1 < n && !a[x][y+1]) a[x][++y] = ++tot;//right
        while(x+1 < n && !a[x+1][y]) a[++x][y] = ++tot;//down
        while(y-1 >= 0 && !a[x][y-1]) a[x][--y] = ++tot;//left
        while(x-1 >= 0 && !a[x-1][y]) a[--x][y] = ++tot;//up
    }    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d",a[i][j]);
        }
        cout << endl;
    }
    return 0;
}