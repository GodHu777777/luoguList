#include<bits/stdc++.h>
using namespace std;
const int maxn = 1005;
int a[maxn][maxn];
int f[maxn][maxn];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> a[i][j];
        }
    }
    memset(f,0,sizeof(f));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j==1) f[i][j] = f[i-1][j] + a[i][j];
            else if(j==i) f[i][j] = f[i-1][j-1] + a[i][j];
            else f[i][j] = a[i][j] + fmax(f[i-1][j-1],f[i-1][j]);
        }
    }
    int max = f[n][1];
    for(int i = 1; i <= n; i++){
        max = fmax(max,f[n][i]);
    }   
    cout << max;
    return 0;    
}