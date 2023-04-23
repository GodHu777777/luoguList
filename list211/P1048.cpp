#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxtime,n;
    cin >> maxtime >> n;
    int a[n+1][2];//[0]=time [1]=value
    for(int i = 1; i <= n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    int f[n+1][maxtime+1];
    memset(f,0,sizeof(f));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= maxtime; j++){
            if(a[i][0] > j) f[i][j] = f[i-1][j];
            //too long to take
            else{
                f[i][j] = fmax(f[i-1][j],f[i-1][j-a[i][0]]+a[i][1]);
                //take or not
            }
        }
    }
    cout << f[n][maxtime];
    return 0;
}