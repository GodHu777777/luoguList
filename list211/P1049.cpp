#include<bits/stdc++.h>
using namespace std;
int f[35][20005];
/*
f[i][j] means the max V when you can choose from the
first ith items and V is no more than j  
*/
int main()
{
    int maxv,n;
    cin >> maxv;
    cin >> n;
    memset(f,0,sizeof(f));
    int v[n+1];
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= maxv; j++){
            if(v[i] > j) f[i][j] = f[i-1][j];
            //too big to take
            else f[i][j] = fmax(f[i-1][j],f[i-1][j-v[i]]+v[i]);
            //take , no
        }
    }
    cout << f[n][maxv];
    return 0;
}
